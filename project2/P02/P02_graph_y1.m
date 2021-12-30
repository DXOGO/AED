load P02_y1.txt;
% first column: n
% third column: F(n)
% fourth column: execution time
y=P02_y1;
plot(y(:,1),log10(y(:,3)),'bx-','linewidth',3,y(:,1),log10(y(:,4)),'ro-','linewidth',3)
grid on
xlabel('n');
ylabel('execution time');
title('Fibonacci version 1');
