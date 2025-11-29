@class AWESECAppJumpDialogBluePrint, AWESECAppJumpOutEvent, DUXAlertDialog, NSString;

@interface AWESECAppJumpDialog : NSObject <DUXAlertDialogDelegate>

@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (weak, nonatomic) DUXAlertDialog *dialog;
@property (retain, nonatomic) AWESECAppJumpOutEvent *event;
@property (retain, nonatomic) AWESECAppJumpDialogBluePrint *dialogBluePrint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidClickMaskArea:(id)a0;
- (id /* block */)confirmClick;
- (id)createStandardDialogOnView:(id)a0;
- (id /* block */)dialogClickWithType:(long long)a0;
- (id /* block */)cancelClick;
- (void)popupViewDidConfirm;
- (void)popupViewBeforeCancel;
- (void)popupViewDidCancel;
- (void)eventTrack:(id)a0;
- (id)createDialogOnView:(id)a0;
- (void)popupViewDidAppear:(id)a0;
- (void)dialogAppLogCancelTrack:(id)a0;
- (id)initWithEvent:(id)a0 confirmAction:(id /* block */)a1 cancelAction:(id /* block */)a2;
- (void)showInMainThreadByForce;
- (void).cxx_destruct;
- (void)show;
- (id)bodyString;
- (void)showOnViewController:(id)a0;

@end
