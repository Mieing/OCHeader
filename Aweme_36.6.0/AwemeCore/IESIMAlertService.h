@class NSString;

@interface IESIMAlertService : HTSService <IESIMAlertService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAlertWithTitle:(id)a0 description:(id)a1 image:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (BOOL)isSomeAlertShowing;
- (id)createAlertViewWithModernStyle:(BOOL)a0;
- (id)createAlertViewWithCustomStyle;
- (id)actionWithTitle:(id)a0 style:(long long)a1 font:(id)a2 handler:(id /* block */)a3;
- (id)createRadioAlertViewWithCustomStyle;
- (void)showAlertWithImage:(id)a0 isImageAnimatable:(BOOL)a1 trackIsAnimatable:(BOOL)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2 cancelButtonTitle:(id)a3 destructiveButtonTitle:(id)a4 otherButtonTitles:(id)a5 tapBlock:(id /* block */)a6;
- (id)createStandardAlert;
- (id)standardAlertWithImage:(id)a0 heading:(id)a1 body:(id)a2 actions:(id)a3;
- (id)standardAlertWithImage:(id)a0 heading:(id)a1 body:(id)a2 actions:(id)a3 enlargeType:(unsigned long long)a4;
- (id)standardAlertActionWithTitle:(id)a0 type:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)standardAlertActionWithTitle:(id)a0 type:(unsigned long long)a1 disableAutoDismiss:(BOOL)a2 handler:(id /* block */)a3;
- (double)standardDefaultDialogInnerWidthOnView:(id)a0;
- (id)alertBodyContentWithString:(id)a0;
- (id)alertBodyContentWithView:(id)a0;
- (long long)p_aweUIAlertActionStyleWithIESIMStyle:(long long)a0;
- (unsigned long long)p_duxAlertActionColorWithIESIMType:(unsigned long long)a0;
- (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
- (void)showAlert:(id)a0;

@end
