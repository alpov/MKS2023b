M = csvread('ntc.csv');
t = M(:,1);
r = M(:,2);

ad = (r ./ (r + 10)) .* 1024;
hold off, plot(ad, t, 'o'), grid on;

p = polyfit(ad, t, 10);
ad2 = 0:1023;
t2 = polyval(p, ad2);
hold on, plot(ad2, round(t2,1), 'r');

dlmwrite('ntc.dlm', t2*10, ',');
