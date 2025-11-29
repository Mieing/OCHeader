@class NSString, CJPayBalanceVerifyManager, CJPayFrontCashierContext;

@interface CJPayBalanceRechargeController : CJPayBalanceBaseController <CJPayHomeVCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long loadingType;
@property (retain, nonatomic) CJPayBalanceVerifyManager *frontCashierVerifyManager;
@property (retain, nonatomic) CJPayFrontCashierContext *payContext;

- (id)topVC;
- (id)createOrderResponse;
- (unsigned long long)firstVerifyType;
- (id)curSelectConfig;
- (void)push:(id)a0 animated:(BOOL)a1;
- (void)endVerifyWithResultResponse:(id)a0;
- (void)closeActionAfterTime:(double)a0 closeActionSource:(unsigned long long)a1;
- (BOOL)receiveDataBus:(unsigned long long)a0 obj:(id)a1;
- (void)startPaymentWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_dismissAllVCAboveCurrent;
- (void)p_notifyNotSufficientFunds:(id)a0;
- (void)p_callbackResultWithSource:(unsigned long long)a0;
- (void)showState:(long long)a0;
- (void)p_refreshOrderResponseWithToastMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;

@end
