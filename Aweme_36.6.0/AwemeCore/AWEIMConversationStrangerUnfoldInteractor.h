@class NSString, NSDictionary, AWEIMConStrangerUnfoldBannerView, NSNumber;

@interface AWEIMConversationStrangerUnfoldInteractor : AWEIMComponentBase <AWEUserMessage, AWEIMFloatingViewDispatchProtocol, AWEIMMessageListUserInfoAction>

@property (retain, nonatomic) AWEIMConStrangerUnfoldBannerView *unfoldBannerView;
@property (copy, nonatomic) NSDictionary *bannerABConfig;
@property (retain, nonatomic) NSNumber *lastExitTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didClickConfirmBtn;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (BOOL)p_shouldShow;
- (void)__dismissBanner:(BOOL)a0;
- (double)lastBannerExitTime;
- (void)didClickCloseBtn;
- (void)p_trackBannerWithActionType:(id)a0 toUserId:(id)a1;
- (void)markBannerExit;
- (void)__tryShowBannerView;
- (void).cxx_destruct;
- (id)conversation;
- (void)dealloc;
- (BOOL)isDisplaying;

@end
