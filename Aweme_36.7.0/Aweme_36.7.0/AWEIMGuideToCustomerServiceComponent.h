@class AWEIMGuideToCustomerServiceBannerView, AWEIMGuideToCustomerServiceBannerViewConfig, NSString;

@interface AWEIMGuideToCustomerServiceComponent : AWEIMComponentBase <AWEIMFloatingViewDispatchProtocol, AWEIMMessageConversationGeneralFloatingBarProtocol>

@property (retain, nonatomic) AWEIMGuideToCustomerServiceBannerView *guideView;
@property (nonatomic) BOOL isDisplaying;
@property (retain, nonatomic) AWEIMGuideToCustomerServiceBannerViewConfig *config;
@property (copy, nonatomic) NSString *buttonLink;
@property (nonatomic) BOOL showInFloatMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_trackShow;
- (BOOL)p_shouldShow;
- (void)p_trackClick:(id)a0;
- (void)p_disableForToday;
- (void)p_dismissBanner;
- (void)p_registerPriority;
- (void)p_createGuideView;
- (BOOL)p_checkAndIncrementFrequencyControl;
- (void)p_showBanner;
- (void)showBannerViewWithCompletion:(id /* block */)a0;
- (void)handleFloatingBarData:(id)a0;
- (void).cxx_destruct;

@end
