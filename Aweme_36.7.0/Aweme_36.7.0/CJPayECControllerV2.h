@class CJPayAssetDouPayProcessController, NSDictionary, CJPayDouPayProcessController, CJPayBDCreateOrderResponse, NSString;

@interface CJPayECControllerV2 : NSObject <CJPayCashierEvokeHomePageProtocol>

@property (nonatomic) long long cashierScene;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) CJPayDouPayProcessController *douPayController;
@property (retain, nonatomic) CJPayAssetDouPayProcessController *assetDouPayController;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getPerformanceInfo;
- (id)checkTypeName;
- (id)evokeNaviController;
- (long long)evokeCallbackCode;
- (void)startPaymentWithParams:(id)a0 completion:(id /* block */)a1;
- (void)p_setCashierScene:(id)a0;
- (void)p_handleParams:(id)a0 response:(id)a1;
- (void)p_startAssetDouPayWithCreateResponse:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)p_getDefaultShowConfigWithResponse:(id)a0;
- (void)p_handleDouPayResultWithResultModel:(id)a0;
- (id)p_createParamsWithResultModel:(id)a0;
- (BOOL)p_isCanOpenDeskWithResponse:(id)a0;
- (void)p_trackReqeustWithIsCanOpenDesk:(BOOL)a0;
- (void)p_tryReOpenPayDeskWithResultModel:(id)a0;
- (void).cxx_destruct;

@end
