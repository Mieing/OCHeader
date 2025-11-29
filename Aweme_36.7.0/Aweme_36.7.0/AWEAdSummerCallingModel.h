@class AWEAdSummerCallingChargingCardModel, AWEAdCouponRequestModel, NSString, AWEAdSummerCallingLongPressModel, AWEAdSummerCallingTransitionModel, AWEAdSummerCallingPreloadResourcesModel;

@interface AWEAdSummerCallingModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAdSummerCallingChargingCardModel *chargingCardInfo;
@property (retain, nonatomic) AWEAdSummerCallingLongPressModel *longPressInfo;
@property (retain, nonatomic) AWEAdSummerCallingTransitionModel *transitionInfo;
@property (retain, nonatomic) AWEAdSummerCallingPreloadResourcesModel *preloadResources;
@property (retain, nonatomic) AWEAdCouponRequestModel *couponInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chargingCardInfoJSONTransformer;
+ (id)longPressInfoJSONTransformer;
+ (id)transitionInfoJSONTransformer;
+ (id)preloadResourcesJSONTransformer;
+ (id)couponInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
