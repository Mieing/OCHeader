@class NSString, AWEIMTopNoticeTipView, AWEIMTopNoticeTipViewConfig, AWEIMJoinGroupApplyNewStyleNoticeView;
@protocol AWEIMTopNoticeTipInteractorProtocol;

@interface AWEIMJoinGroupApplyInteractor : AWEIMTopNoticeTipInteractor <AWEIMMessageListDataAction, AWEIMMessageBaseVCLayoutAction, AWEUserMessage, AWEIMJoinGroupApplyInteractorInterface>

@property (retain, nonatomic) AWEIMJoinGroupApplyNewStyleNoticeView *noticeView;
@property (nonatomic) unsigned long long currentDisplayCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (readonly, nonatomic) AWEIMTopNoticeTipViewConfig *config;
@property (readonly, nonatomic) AWEIMTopNoticeTipView *noticeTipView;
@property (weak, nonatomic) id<AWEIMTopNoticeTipInteractorProtocol> topTipViewDelegate;
@property (readonly, nonatomic) BOOL showing;

+ (BOOL)isSupportJoinGroupApplyInteractorWithConversation:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterFirstScreenDataInitialize;
- (void)hostVC_viewWillAppear;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)vcParent;
- (void)handleReceiveJoinGroupApplyNotice:(id)a0;
- (void)showBannerViewWithCompletion:(id /* block */)a0;
- (BOOL)shouldShowBannerView;
- (id)getCurrentConversationId;
- (id)getViewConfig;
- (void)showBannerViewIfNeed;
- (id)getTipText;
- (void)trackJoinGroupApplyShow;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addNotificationObserver;
- (void)dismissBannerView;

@end
