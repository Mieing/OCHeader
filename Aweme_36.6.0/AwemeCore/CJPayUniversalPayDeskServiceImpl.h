@class NSString, NSMutableDictionary;

@interface CJPayUniversalPayDeskServiceImpl : NSObject <CJPayUniversalPayDeskService, CJPayAPIWrapperProtocol>

@property (retain, nonatomic) NSMutableDictionary *multiApiDelegates;
@property (copy, nonatomic) NSString *trackMerchantId;
@property (copy, nonatomic) NSString *trackAppId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;

- (void)onResponse:(id)a0 from:(id)a1;
- (void)callState:(BOOL)a0 fromScene:(long long)a1 from:(id)a2;
- (void)i_openUniversalPayDeskWithParams:(id)a0 withDelegate:(id)a1;
- (void)i_openUniversalPayDeskWithParams:(id)a0 referVC:(id)a1 withDelegate:(id)a2;
- (void)i_openUniversalPayDeskWithParams:(id)a0 routeDelegate:(id)a1 withDelegate:(id)a2;
- (void)i_openUniversalPayDeskWithParams:(id)a0 referVC:(id)a1 routeDelegate:(id)a2 withDelegate:(id)a3;
- (void)i_callBackWithCallBackId:(id)a0 response:(id)a1;
- (id)i_processCallbackDataWithResponse:(id)a0;
- (void)p_onResponseError:(long long)a0 errorDesc:(id)a1 from:(id)a2;
- (void)p_tryRecorMerchantInfoWithPayDeskModel:(id)a0;
- (void)p_handleBackHookActionCallbackId:(id)a0 delegate:(id)a1;
- (void)p_addBTMParamIfNeededWithModel:(id)a0;
- (void)p_trackTTPayWakeWithExtra:(id)a0 from:(id)a1;
- (void)p_callState:(BOOL)a0 fromScene:(long long)a1 from:(id)a2;
- (id)p_buildTrackerParams:(id)a0;
- (void)p_handlePayService:(id)a0 sdkInfo:(id)a1 withDelegate:(id)a2;
- (void)p_handleSuperPayResponse:(id)a0;
- (id)p_callBackDataWithResponse:(id)a0;
- (void)p_ttpayPutTimestamp:(id)a0 withParamKey:(id)a1;
- (void)p_prepareForPreCashierLaunch:(id)a0 sdkInfo:(id)a1;
- (BOOL)p_tryOpenUnifyPayWithParamsForPreCashier:(id)a0 withDelegate:(id)a1;
- (BOOL)p_tryOpenDypayProcessWithParams:(id)a0 withDelegate:(id)a1;
- (id)p_tryToRemoveTmpTrackInfoFromParams:(id)a0;
- (BOOL)p_tryOpenPreCashierForSuperPayWithModel:(id)a0 withMutableParams:(id)a1 withDelegate:(id)a2;
- (void)p_handleOpenLynxWithModel:(id)a0 delegate:(id)a1;
- (void)p_handleBioService:(id)a0 from:(id)a1;
- (BOOL)p_tryOpenUnifyPayWithParams:(id)a0 withDelegate:(id)a1;
- (void)p_addCJExtParamIfNeededWithModel:(id)a0;
- (void)p_addABTestParamIfNeededWithModel:(id)a0;
- (void)p_handleByRouterWithModel:(id)a0 delegate:(id)a1;
- (void)p_handleGetParamsServiceWith:(id)a0 delegate:(id)a1;
- (void)p_trackWithEvent:(id)a0 params:(id)a1 from:(id)a2;
- (void)p_justOnResponse:(id)a0 from:(id)a1;
- (void)p_trackTTPayCallbackWithResponse:(id)a0 from:(id)a1;
- (id)p_buildCallbackPayDictWithResponse:(id)a0;
- (id)p_callbackBindCardDictWithResponse:(id)a0;
- (id)p_buildParamsSeriveDictWithResponse:(id)a0;
- (id)p_buildGeneralAbilityServiceDictWithResponse:(id)a0;
- (id)p_buildLynxCardDictWithResponse:(id)a0;
- (id)p_buildCallBackLynxBindCardCallMiniAppWithResponse:(id)a0;
- (id)p_buildUnifiedCallbackDictWithResponse:(id)a0;
- (void).cxx_destruct;

@end
