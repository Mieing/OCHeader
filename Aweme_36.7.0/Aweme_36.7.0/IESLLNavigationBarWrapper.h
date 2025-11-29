@interface IESLLNavigationBarWrapper : NSObject

+ (id)createNavigationBar;
+ (id)actionWithContentView:(id)a0 withActionSize:(struct CGSize { double x0; double x1; })a1 withActionPadding:(double)a2;
+ (id)createActionWithImage:(id)a0 onClickBlock:(id /* block */)a1;
+ (id)createActionWithImage:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2 withActionPadding:(double)a3;

@end
