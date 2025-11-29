@class NSDictionary, NSString;

@interface AWELivePreStreamADBusinessElement : AWELiveBusinessBaseElement <AWELivePreStreamEnterRoomDataProvider, AWELiveRoomMessage>

@property (copy, nonatomic) NSDictionary *balanceToCouponData;
@property (copy, nonatomic) NSDictionary *couponDict;
@property (nonatomic) BOOL isCardClickEnterLiveRoom;
@property (copy, nonatomic) NSString *adCardClickMethod;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (void)audienceQuitAllRoom;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (id)provideCoreDataForEvent:(long long)a0;
- (void)viewController_viewDidLoad;
- (void)handleCardDidClickToOpenLiveRoomInStream:(id)a0;
- (void)p_fetchBalanceToCouponStateIfNeeded:(BOOL)a0;
- (void)fetchBalanceToCouponState;
- (void)onUserQuitLiveRoom;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
