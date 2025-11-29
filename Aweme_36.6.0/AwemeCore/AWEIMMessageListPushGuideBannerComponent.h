@class AWEIMPushGuideBannerView, NSString, AWEIMPushGuideBannerModel;
@protocol AWEIMMessageListTopFloatingInterface, AWEIMIncentiveChatPushGuideInteractorProtocol;

@interface AWEIMMessageListPushGuideBannerComponent : AWEIMComponentBase <AWEIMSyncPriorityDispatchObjectProtocol, AWEIMPushGuideBannerViewDelegate, AWEIMMessageListBackgroundAction, AWEIMMessageListPushGuideBannerComponentInterface>

@property (weak, nonatomic) id<AWEIMMessageListTopFloatingInterface> floatingService;
@property (retain, nonatomic) AWEIMPushGuideBannerView *pushGuideBannerView;
@property (nonatomic) BOOL hasAddedPushGuide;
@property (retain, nonatomic) AWEIMPushGuideBannerModel *model;
@property (retain, nonatomic) id<AWEIMIncentiveChatPushGuideInteractorProtocol> incentivePush;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)app_willEnterForeground;
- (void)hostVC_viewWillAppear;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)pushGuideBannerViewDidClose;
- (void)showPushGuideBannerViewWithCompletion:(id /* block */)a0;
- (void)customizeModelIfNeed;
- (BOOL)p_shouldShowConsecutiveChatStyleGuide;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isDisplaying;

@end
