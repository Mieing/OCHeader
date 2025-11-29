@interface CJPayAlertUtil : NSObject

+ (id)customSingleAlertWithTitle:(id)a0 content:(id)a1 buttonDesc:(id)a2 actionBlock:(id /* block */)a3 useVC:(id)a4;
+ (id)singleAlertWithTitle:(id)a0 content:(id)a1 buttonDesc:(id)a2 actionBlock:(id /* block */)a3 styleWithMessage:(id)a4 useVC:(id)a5;
+ (id)doubleAlertWithTitle:(id)a0 content:(id)a1 leftButtonDesc:(id)a2 rightButtonDesc:(id)a3 leftActionBlock:(id /* block */)a4 rightActioBlock:(id /* block */)a5 styleWithMessage:(id)a6 useVC:(id)a7;
+ (void)p_presentCustomAlertVC:(id)a0 fromVC:(id)a1;
+ (id)singleAlertWithTitle:(id)a0 content:(id)a1 buttonDesc:(id)a2 actionBlock:(id /* block */)a3 useVC:(id)a4;
+ (id)doubleAlertWithTitle:(id)a0 content:(id)a1 leftButtonDesc:(id)a2 rightButtonDesc:(id)a3 leftActionBlock:(id /* block */)a4 rightActioBlock:(id /* block */)a5 useVC:(id)a6;
+ (id)customDoubleAlertWithTitle:(id)a0 content:(id)a1 leftButtonDesc:(id)a2 rightButtonDesc:(id)a3 leftActionBlock:(id /* block */)a4 rightActioBlock:(id /* block */)a5 useVC:(id)a6;

@end
