@class AWEIMMessageShareCellViewModel, AWEIMMessage, DUXAlertDialog, DUXTextField, NSString, AWEShareContext;

@interface AWEIMShareDialogHandler : NSObject <DUXAlertDialogDelegate>

@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) AWEIMMessageShareCellViewModel *cellModel;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) double keyboardHeight;
@property (weak, nonatomic) DUXAlertDialog *dialog;
@property (weak, nonatomic) DUXTextField *textField;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL showingDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidClickMaskArea:(id)a0;
- (void)alertDialogDidDismiss:(id)a0;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (id)initWithShareContext:(id)a0 cellModel:(id)a1 forwardMessage:(id)a2;
- (id)getExtraText;
- (void)showDialogOnViewController:(id)a0;
- (void)trackDialogWithEvent:(id)a0;
- (void)didUpdateKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 willShowKeyboard:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)p_removeObservers;
- (void)p_addObservers;

@end
