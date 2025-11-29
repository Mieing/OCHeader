@class NSString;

@interface AWEDUXAlertControllerImpl : NSObject <DUXAlertDialogDelegate, ACCDUXAlertControllerProtocol>

@property (copy, nonatomic) id /* block */ dismissedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidDismiss:(id)a0;
- (id)showAlertWithTitle:(id)a0 description:(id)a1 image:(id)a2 forbidDismissByClickMask:(BOOL)a3 actionButtonTitle:(id)a4 cancelButtonTitle:(id)a5 actionBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7 dismissedBlock:(id /* block */)a8;
- (id)showAlertWithTitle:(id)a0 description:(id)a1 image:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6 dismissedBlock:(id /* block */)a7;
- (id)showAlertWithTitle:(id)a0 body:(id)a1 image:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6 dismissedBlock:(id /* block */)a7;
- (id)showAlertWithTitle:(id)a0 description:(id)a1 image:(id)a2 forbidDismissByClickMask:(BOOL)a3 actionButtonTitle:(id)a4 cancelButtonTitle:(id)a5 actionBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7 dismissedBlock:(id /* block */)a8 onViewController:(id)a9;
- (void).cxx_destruct;
- (void)dealloc;

@end
