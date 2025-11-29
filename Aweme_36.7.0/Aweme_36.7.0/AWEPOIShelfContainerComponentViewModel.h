@class AWEPOIShelfContainerExtension, NSString, AWEPOIShelfContainerComponentView, NSArray, NSMutableDictionary, NSDictionary, NSNumber, AWEPOIShelfBridgeManager;

@interface AWEPOIShelfContainerComponentViewModel : DitoComponentViewModel

@property (retain, nonatomic) NSMutableDictionary *moduleHeightMap;
@property (nonatomic) double lastScrollEventTimeStamp;
@property (nonatomic) BOOL needNestedScroll;
@property (retain, nonatomic) NSNumber *lastScrollViewOffsetY;
@property (copy, nonatomic) NSString *templateUrl;
@property (retain, nonatomic) AWEPOIShelfBridgeManager *bridgeManager;
@property (copy, nonatomic) NSArray *shelfModuleArr;
@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDictionary *globalData;
@property (weak, nonatomic) AWEPOIShelfContainerComponentView *ditoBindView;
@property (copy, nonatomic) NSDictionary *reputationRecommendCo;
@property (copy, nonatomic) NSDictionary *keyUserInfo;
@property (retain, nonatomic) NSDictionary *atmosphereInfo;
@property (weak, nonatomic) AWEPOIShelfContainerExtension *poiShelfContainerExtension;
@property (nonatomic) double scrollEventThrottle;
@property (nonatomic) BOOL receivePageScroll;

- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)pageView:(id)a0 scrollViewDidEndDecelerating:(id)a1;
- (void)sendError:(id)a0 url:(id)a1;
- (void)parseNeedNestedScrollValue;
- (void)handleModalViewStateChange;
- (void)sendScrollEventWithDeltaY:(id)a0;
- (void)forceNotifyTempoScrollViewVisibilityChanged:(id)a0;
- (void)sendScrollEvent:(id)a0;
- (void)pageView:(id)a0 scrollViewDidEndScrollingAnimation:(id)a1;
- (void)updateModuleHeight:(double)a0 withModuleID:(id)a1;
- (id)findViewByID:(id)a0;
- (id)generateGlobalData;
- (void)updateJsRuntimeReadyStatus;
- (id)parseQueryItems;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)initWithNode:(id)a0;
- (void)parseData;

@end
