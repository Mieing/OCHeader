@class DUXAlertDialog;

@interface LSIMAlertDialogWrapper : LSIMAlertControllerWrapper

@property (retain, nonatomic) DUXAlertDialog *alert;

- (void)dismiss;
- (void).cxx_destruct;
- (void)showOnViewController:(id)a0;
- (id)createAlertDialog;

@end
