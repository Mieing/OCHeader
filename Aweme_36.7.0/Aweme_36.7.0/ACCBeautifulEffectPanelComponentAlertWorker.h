@class DUXToast, UIViewController, DUXLoadingToast;

@interface ACCBeautifulEffectPanelComponentAlertWorker : NSObject

@property (retain, nonatomic) UIViewController *alertVC;
@property (retain, nonatomic) DUXToast *toastToBeRemoved;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;

- (void)hideToast;
- (void)showAlertWithTitle:(id)a0 content:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)showAlertDialogWithTitle:(id)a0 content:(id)a1 isWarningStatus:(BOOL)a2 confirmCompleteHandler:(id /* block */)a3 cancelCompleteHandlder:(id /* block */)a4;
- (void)showAlertDialogWithTitle:(id)a0 content:(id)a1 cancelTitle:(id)a2 confirmTitle:(id)a3 isWarningStatus:(BOOL)a4 confirmCompleteHandler:(id /* block */)a5 cancelCompleteHandlder:(id /* block */)a6;
- (void)showToastAndStore:(id)a0;
- (void)showLoadingToastWithTitle:(id)a0;
- (void)hideShowLoadingToast;
- (void)showToast:(id)a0;
- (void).cxx_destruct;

@end
