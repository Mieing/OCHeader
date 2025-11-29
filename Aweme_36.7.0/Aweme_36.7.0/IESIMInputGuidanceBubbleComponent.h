@class NSString;

@interface IESIMInputGuidanceBubbleComponent : AWEIMComponentBase <IESIMInputStateChangedActionProtocol, IESIMInputGuidanceBubbleComponentInterface, AWEIMComponentLazyCreate>

@property (nonatomic) BOOL chatPanelOrGuideBubbleHasShow;
@property (nonatomic) BOOL isShowWatchOnceBubbleGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)tryShowGuidanceBubble;
- (BOOL)canShowCouponGuidanceBubble;
- (BOOL)canShowCommodityGuidanceBubble;
- (BOOL)tryShowFansCouponGuideBubble;
- (BOOL)tryShowCommodityGuideBubble;
- (void)updateComponentFromState:(long long)a0 toState:(long long)a1;

@end
