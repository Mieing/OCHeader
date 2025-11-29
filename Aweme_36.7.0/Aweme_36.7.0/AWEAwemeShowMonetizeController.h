@class NSString, AWEAwemeModel;
@protocol AWEShowMonetizePopupTaskQueueService;

@interface AWEAwemeShowMonetizeController : AWEAwemeFeedBaseController <AWEAwemeFeedBaseControllerProtocol, AWEAwemeNewDetailTableControllerProtocol, AWEShowMonetizeCouponHandler, AWEShowMonetizePopupHandler>

@property (retain, nonatomic) id<AWEShowMonetizePopupTaskQueueService> popupTaskQueue;
@property (nonatomic, getter=isHasShowCouponPageForSceneEnter) BOOL hasShowCouponPageForSceneEnter;
@property (nonatomic) BOOL shouldUseCouponAfterClose;
@property (retain, nonatomic) AWEAwemeModel *monetizeCurrentAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)initialDataSourceFetchDidFinished;
- (void)willReloadWithDataController:(id)a0 initialIndex:(long long)a1 customAnimated:(BOOL)a2 systemAnimated:(BOOL)a3;
- (void)didReloadWithDataController:(id)a0 initialIndex:(long long)a1 customAnimated:(BOOL)a2 systemAnimated:(BOOL)a3;
- (id)couponReceiveHandlerEventContainerID:(id)a0;
- (void)coupon:(id)a0 receivedCouponPageEventWithType:(unsigned long long)a1 scene:(unsigned long long)a2 timing:(unsigned long long)a3;
- (void)coupon:(id)a0 didCloseCouponPageForScene:(unsigned long long)a1 timing:(unsigned long long)a2;
- (void)popupDidStart:(id)a0;
- (void)popupDidFinish:(id)a0;
- (id)popupReceiveHandlerEventQueueName:(id)a0;
- (unsigned long long)getCouponInfoScene;
- (void)tryToPopupMonetizePageWithAweme:(id)a0;
- (void)removeAoopExecutedRulesIfNeededWithAweme:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
