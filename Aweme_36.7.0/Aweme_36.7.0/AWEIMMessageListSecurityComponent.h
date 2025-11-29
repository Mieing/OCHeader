@class AWEIMSecurityToastConfigModel, NSString, AWEIMSecurityRemindTopTipManager, AWEIMTopSecurityTipView, AWEIMSecurityRemindManager;
@protocol AWEIMMessageListTopFloatingInterface, AWEIMMessageListSecurityComponentDelegate;

@interface AWEIMMessageListSecurityComponent : AWEIMComponentBase <AWEIMSecurityRemindManagerDelegate, AWEIMSecurityRemindTopTipManagerDelegate, AWEIMMessageListDataAction, AWEIMSyncPriorityDispatchObjectProtocol, AWEIMTopSecurityTipViewDelegate, AWEIMMessageListBackgroundAction>

@property (retain, nonatomic) AWEIMSecurityRemindManager *securityRemindManager;
@property (retain, nonatomic) AWEIMSecurityRemindTopTipManager *securityRemindTopTipManager;
@property (weak, nonatomic) id<AWEIMMessageListTopFloatingInterface> topFloatingService;
@property (retain, nonatomic) AWEIMSecurityToastConfigModel *config;
@property (retain, nonatomic) AWEIMTopSecurityTipView *tipView;
@property (weak, nonatomic) id<AWEIMMessageListSecurityComponentDelegate> delegate;
@property (nonatomic) BOOL hostVCIsAppearing;
@property (nonatomic) BOOL shouldRequestRemindView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)hostVC_viewDidDisappear;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)p_viewDidAppear;
- (void)tryToShowSecurityRemindView;
- (BOOL)isDisplayingTipView;
- (void)p_showTopView;
- (void)p_dismissTopView:(BOOL)a0;
- (id)conversationIDForSecurityRemindManager:(id)a0;
- (BOOL)securityRemindManager:(id)a0 isInEditModeForConversation:(id)a1;
- (void)securityRemindTopTipManager:(id)a0 showTip:(id)a1;
- (void)topSecurityTipView:(id)a0 didClickButtonModel:(id)a1;
- (void)topSecurityTipViewDidClickCloseButton:(id)a0;
- (void)topSecurityTipViewDidShowInterrupted:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;

@end
