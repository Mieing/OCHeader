@class QuickReplyMsgNotifyView, MMTimer, NSString, UIView, QuickReplyMsgReporter, QuickReplyNotifyItem;
@protocol QuickReplyMsgViewControllerDelegate;

@interface QuickReplyMsgViewController : MMWindowViewController <QuickReplyMsgWindowDelegate, QuickReplyMsgNotifyViewDelegate, IStrongNotificationMgrExt>

@property (retain, nonatomic) QuickReplyMsgNotifyView *msgPushNotifyView;
@property (retain, nonatomic) UIView *blurBgView;
@property (retain, nonatomic) MMTimer *autoDismissTimer;
@property (nonatomic) double dismissTimeout;
@property (nonatomic) BOOL isPreviewEnable;
@property (weak, nonatomic) id<QuickReplyMsgViewControllerDelegate> delegate;
@property (weak, nonatomic) QuickReplyMsgReporter *reporter;
@property (nonatomic) long long notifyViewStyle;
@property (readonly, nonatomic) QuickReplyNotifyItem *currNotifyItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)showQuickReplyItem:(id)a0 dismissTimeout:(double)a1;
- (void)viewDidLoad;
- (void)dismiss;
- (void)dismissWithJumpToChat:(BOOL)a0;
- (BOOL)shouldHandleStatusBarAppearance;
- (void)showBlurBgView;
- (void)viewDidLayoutSubviews;
- (void)relayoutUI;
- (void)initUI;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidTransitionToNewSize;
- (long long)overrideUserInterfaceStyle;
- (void)onStrongNotificationShow;
- (BOOL)shouldHandleTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)onTouchAtNoneMsgArea;
- (void)onNotifyViewDismissSelf;
- (void)onNotifyViewBeginDraging;
- (void)onNotifyViewEndDraging;
- (void)onNotifyViewReadMsg:(id)a0;
- (void)onNotifyViewJumpToChat:(id)a0;
- (void)onNotifyViewJumpToSetting:(id)a0;
- (void)onNotifyViewShowSettingBtn:(id)a0;
- (void)onNotifyViewShowMoreSetting:(id)a0 isShow:(BOOL)a1;
- (void)onNotifyViewTemporaryClose:(id)a0;
- (void)onNotifyViewNotifyPushClose:(id)a0;
- (void)showFinishTipsAndDismiss:(id)a0;
- (void)markMessageRead:(id)a0;
- (void)resetTimer:(double)a0;
- (BOOL)isEmptyMessage:(id)a0;
- (void).cxx_destruct;

@end
