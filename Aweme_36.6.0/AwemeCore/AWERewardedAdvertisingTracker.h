@class NSString;

@interface AWERewardedAdvertisingTracker : NSObject <AWERewardedAdvertisingTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackEvent:(id)a0 model:(id)a1 extraParams:(id)a2 object:(id)a3;
+ (id)rewardedAdvertisingPageCommonParamsWithModel:(id)a0 referString:(id)a1 logExtraDic:(id)a2;
+ (id)rewardedAdvertisingCommonParamsWithModel:(id)a0;
+ (void)monitorIAAVideoPlay:(id)a0 model:(id)a1 error:(id)a2 extraParams:(id)a3;
+ (id)commonParamsForMix:(id)a0;
+ (id)commonParamsForLongVideo:(id)a0;
+ (id)commonParamsForPlaylet:(id)a0;
+ (unsigned long long)videoTypeForModel:(id)a0;
+ (id)commonParamsForVideo:(id)a0;
+ (BOOL)enableSetItemIdToFromGroupID:(id)a0 logExtra:(id)a1;
+ (id)rewardPreviewConfigParamsWithModel:(id)a0;
+ (id)rewardedAdvertisingVideoPlayParams:(id)a0;
+ (id)paramsForRewardParamsWithModel:(id)a0;
+ (id)playletContentsaleTypeWithModel:(id)a0;
+ (id)getPlayletSaleTypeCombinationWithIsIaa:(BOOL)a0 isIap:(BOOL)a1 isVip:(BOOL)a2 isPreAccess:(BOOL)a3;
+ (long long)rewardPaymentStatusWithModel:(id)a0;
+ (void)monitorRewardedAdvertising:(id)a0 model:(id)a1 status:(long long)a2 errorInfos:(id)a3 errorCode:(id)a4 categoryParams:(id)a5 extraParams:(id)a6;
+ (id)monitorErrorInformationForServiceName:(id)a0;


@end
