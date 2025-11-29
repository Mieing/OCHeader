@class NSString, UIViewController, IESECGoodsDetailResponse;

@interface IESECGoodsFeedHelper : NSObject

@property (class, nonatomic) BOOL goodsFeedSpeedup;
@property (class, nonatomic) BOOL goodsFeedLighting;
@property (class, retain, nonatomic) IESECGoodsDetailResponse *preLoadInnerData;
@property (class, copy, nonatomic) NSString *preLoadGroupID;
@property (class, nonatomic) BOOL preLoading;
@property (class, weak, nonatomic) UIViewController *goodsFeedVC;

+ (id)goodsFeedScreenShotSchema;
+ (void)preLoadInternalFeedWithRequest:(id)a0;
+ (void)showGoodsInternalFeed:(id)a0;
+ (id)immersiveProductCardWithConfig:(id)a0;
+ (void)showGoodsImmersiveInternalFeed:(id)a0;
+ (void)showGoodsInternalFeedOld:(id)a0;
+ (id)createGoodsDetailParameterByResponse:(id)a0 request:(id)a1 entranceInfoJSONString:(id)a2 metaParams:(id)a3;
+ (void)updateTargetViewControllerData:(id)a0 largeCardResponse:(id)a1 error:(id)a2;
+ (void)updateTargetViewControllerData:(id)a0 response:(id)a1 requestStart:(double)a2 metric:(id)a3 error:(id)a4;
+ (id)buildParamsForOneStepOrder:(id)a0 request:(id)a1;
+ (id)showParams:(id)a0 from:(id)a1 recommendType:(long long)a2 metricsSnapshot:(id)a3 willOpenHalfPage:(id /* block */)a4 willClosePage:(id /* block */)a5 closeHalfPageProgress:(id /* block */)a6 feedSeesionId:(id)a7 completion:(id /* block */)a8;
+ (void)updateBannerViewControllerData:(id)a0 response:(id)a1 error:(id)a2;
+ (void)trackInflowCoreParamsWithResponse:(id)a0 request:(id)a1 extraParams:(id)a2;
+ (BOOL)GoodsFeedRefactorEnabled;
+ (void)requestGoodInternalFeedRecommendListWithRequest:(id)a0 metaParams:(id)a1 completion:(id /* block */)a2;
+ (void)requestSearchBannerWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)preLoadImmersiveInternalFeedWithRequest:(id)a0;
+ (id)recommendTypeEventDescriptionWithType:(unsigned long long)a0;
+ (id)indemnificationMessageWithParams:(id)a0;
+ (id)exposedMessageForParameters:(id)a0;
+ (id)activityDetailForTrackingWithParams:(id)a0;
+ (id)showImmersiveWithRequest:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (BOOL)distributeFrameworkEnabled;
+ (void)showGoodsFeedWithParams:(id)a0 source:(id)a1 completion:(id /* block */)a2;
+ (id)createImmersiveParamsByResponse:(id)a0 rawModel:(id)a1 request:(id)a2 entranceInfoJSONString:(id)a3 metaParams:(id)a4;

@end
