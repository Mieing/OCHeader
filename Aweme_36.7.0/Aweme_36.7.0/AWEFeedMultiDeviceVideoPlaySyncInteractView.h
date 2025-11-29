@class DUXAlertDialog, NSString, NSTimer, DUXBottomNotification;
@protocol AWEFeedMultiDeviceVideoPlaySyncInteractDelegateProtocol;

@interface AWEFeedMultiDeviceVideoPlaySyncInteractView : NSObject <DUXAlertDialogDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ manuallyDismissCompletionBlock;
@property (retain, nonatomic) DUXAlertDialog *alertDialog;
@property (retain, nonatomic) DUXBottomNotification *bottomNotification;
@property (retain, nonatomic) NSTimer *alertDialogAutoDismissTimer;
@property (weak, nonatomic) id<AWEFeedMultiDeviceVideoPlaySyncInteractDelegateProtocol> interactDelegate;
@property (nonatomic) BOOL interactViewIsShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidClickMaskArea:(id)a0;
- (void)alertDialogDidDismiss:(id)a0;
- (void)showNotificationFromeDeviceType:(long long)a0 completion:(id /* block */)a1;
- (id)getFromeDeviceType:(long long)a0;
- (void)showDialogWithModel:(id)a0 completion:(id /* block */)a1;
- (void)onPlayButtonClicked;
- (void)trackForPopupClick:(id)a0;
- (void)onSettinsLinkClicked;
- (void)cancelVideoSyncPlay;
- (void)setupAutoHideTimerForAlertDialog;
- (void)trackForToastClick:(id)a0 fromeDeviceType:(long long)a1;
- (void)hideDialogManually:(id /* block */)a0;
- (void)showInteractViewWithModel:(id)a0 fromeDeviceType:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
