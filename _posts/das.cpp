template <typename T> class Stack : public Vector<T>{
public : // size() empty()接口 其他开放接口 均可直接沿用
    void push(T const &e)
    {
        insert(size(), e);//入栈
    }
        T pop ()
        {
        return remove(size() - 1);
        }
        T& top ()
        {
            (*this)[size() - 1];//取顶 : 直接返回向量的末元素
        }
}

int stk [N] , tt;//tt为栈顶元素
stk[ ++t] = x;//在栈顶插入
tt -- //弹出
//判断是否为空
if(tt > 0) not empty
else empty
//栈顶 队尾插入 队头弹出
stk[tt];
#### 队列
int q[N] ,hh ,tt ;//hh表示队头 tt表示队尾
//插入一个元素
q[ ++tt] = x;
//弹出一个元素
hh++;
//判断是否为空
if(hh <= tt) not empty//因为是用数组实现 所以队头下标是小于队尾的 所以会存在
else empty;
//取出队头元素
q[hh];
