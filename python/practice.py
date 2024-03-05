# 1번 심화문제 풀이 line 그래프, marker = 'o'
import matplotlib.pyplot as pyplot

Month = [7, 8, 9, 10, 11, 12]
User = [456, 492, 578, 599, 678, 854]

plt.title('Daehan company Speeda Net new customers')
plt.plot(Month, User, color = 'blue', linestyle = 'solid')

plt.xlabel('Month')
plt.ylabel('User')

plt.show()

# 2번 심화문제 풀이
# 하나의 figure에 Bar chart, Line chart, Scatter chart, Horizontal bar chart
import matplotlib.pyplot as pyplot

Month = [7, 8, 9, 10, 11, 12]
User = [456, 492, 578, 599, 678, 854]

fig, axs = plt.subplots(1, 4, figsize = (10, 3))
axs[0].bar(Month, User)
axs[1].plot(Month, User, linestyle = 'solid', marker = 'o', color = 'red')
axs[2].scatter(Month, User, color = 'orange') # 산포도
axs[3].barh(Month, User, color = 'green') # 수평막대

# 각 차트의 제목 표시
axs[0].set_title("Bar chart")
axs[1].set_title("Line chart")
axs[2].set_title("Scatter chart")
axs[3].set_title("Horizontal bar chart")

plt.show()