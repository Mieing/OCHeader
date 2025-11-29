@class AWEIMShadowStyleBannerView, NSString;

@interface AWEIMStrangerChatLimitBannerComponent : AWEIMComponentBase <AWEIMSyncPriorityDispatchObjectProtocol>

@property (retain, nonatomic) AWEIMShadowStyleBannerView *bannerView;
@property (nonatomic) BOOL isDisplaying;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_isC2CNotFriendCon:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)p_shouldShow;
- (void)dismissView:(BOOL)a0;
- (id)getBaseVC;
- (void)prepareToDispatch;
- (void)p_display;
- (void)p_fetchEnableShow:(id /* block */)a0;
- (void)dismiss;
- (void).cxx_destruct;

@end
