@interface AWEShareTokenAlert : NSObject

+ (void)showAlertWithModel:(id)a0 actionBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
+ (void)showAlertWithModel:(id)a0 checkboxModel:(id)a1 actionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
+ (void)openDestinationAppWithShareType:(id)a0;
+ (id)shareTitleWithText:(id)a0;
+ (id)actionButtonTitleWithShareType:(id)a0;
+ (id)bodyViewWithDesc:(id)a0 andCheckboxModel:(id)a1;

@end
