@class NSString;

@interface AWEVideoPaymentTracker : NSObject <AWEVideoPaymentTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paymentCommonParamsWithModel:(id)a0;
+ (id)commonParamsWithModel:(id)a0 logExtraDic:(id)a1;
+ (id)paymentCommonParamsWithModel:(id)a0 logExtraDic:(id)a1;
+ (id)paymentPreviewConfigParamsWithModel:(id)a0;
+ (id)paramsForTrackParamsWithLogExtra:(id)a0 model:(id)a1 isClick:(BOOL)a2;
+ (id)paramsForADParamsWithModel:(id)a0;
+ (void)monitorVideoPayment:(id)a0 model:(id)a1 status:(long long)a2 error:(id)a3 errorCode:(id)a4 categoryParams:(id)a5 extraParams:(id)a6;
+ (id)commonParamsWithModel:(id)a0 context:(id)a1;
+ (void)checkPaymentDataWithModel:(id)a0;
+ (id)paramsForPerformanceWithModel:(id)a0;
+ (id)playletAutoPlayParamsWithModel:(id)a0 logExtraDic:(id)a1;
+ (id)paramsForMonetizeWithModel:(id)a0;
+ (id)commonParamsForMix:(id)a0;
+ (id)commonParamsForLongVideo:(id)a0;
+ (unsigned long long)videoTypeForModel:(id)a0;
+ (id)commonParamsForVideo:(id)a0;
+ (id)paramsForApeParamsWithModel:(id)a0;
+ (id)paramsForADWithLogExtraDic:(id)a0;
+ (id)paramsForUGWithLogExtraDic:(id)a0;
+ (id)paramsForRelatedPanelWithLogExtraDic:(id)a0;
+ (id)paramsForMonetizeWithModel:(id)a0 logExtraDic:(id)a1;
+ (void)trackEvent:(id)a0 model:(id)a1 context:(id)a2 extraParams:(id)a3;
+ (BOOL)enableSetItemIdToFromGroupID:(id)a0 logExtra:(id)a1;
+ (id)playletContentsaleTypeWithModel:(id)a0;
+ (id)monitorErrorInformationForServiceName:(id)a0;
+ (id)currentFromContentType:(id)a0 logExtraDic:(id)a1;
+ (id)currentFromContentId:(id)a0 logExtraDic:(id)a1;
+ (id)schemaAutoAnalysisWith:(id)a0 LogExtraDic:(id)a1;
+ (id)payCommonParamsWithModel:(id)a0 logExtraDic:(id)a1;
+ (id)commonParamsForPlaylet:(id)a0 logExtraDic:(id)a1;
+ (id)monitorCommonParams:(id)a0;
+ (id)getBussinessScene:(id)a0;
+ (void)checkBussinessDataWithModel:(id)a0;


@end
