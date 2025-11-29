@class DUXAlertDialog, DUXLoadingToast, NSString, AWEPublishBaseTask, UIView;
@protocol AWEPublishCancelDialogDelegate;

@interface AWEPublishCancelDialog : NSObject <AWEPublishTaskMessage, DUXAlertDialogDelegate, AWEPublishCancelDialogProtocol>

@property (class, retain, nonatomic) AWEPublishCancelDialog *currentDialog;

@property (weak, nonatomic) id<AWEPublishCancelDialogDelegate> delegate;
@property (retain, nonatomic) AWEPublishBaseTask *targetTask;
@property (retain, nonatomic) DUXAlertDialog *alertDialog;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (retain, nonatomic) DUXLoadingToast *loadingView;
@property (retain, nonatomic) UIView *loadingBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidClickMaskArea:(id)a0;
- (void)alertDialogDidDismiss:(id)a0;
- (void)task:(id)a0 didRemoveWithResult:(long long)a1 error:(id)a2 info:(id)a3;
- (void)task:(id)a0 cancelWithResult:(BOOL)a1;
- (void)trackShowEvent;
- (void)showWithTask:(id)a0;
- (id)reeditActionWithTask:(id)a0;
- (id)saveAsDraftActionWithTask:(id)a0;
- (id)resumeActionWithTask:(id)a0 rollback:(BOOL)a1;
- (void)taskCancellationTimeout:(id)a0;
- (void)trackReeditStatusWithSuccess:(BOOL)a0 startTimestamp:(double)a1;
- (void)trackClickEventWithActionType:(id)a0;
- (id)dialogEventCommonParams;
- (BOOL)cancelTask:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
