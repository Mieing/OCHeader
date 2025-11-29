@class NSString, CJPayFrontCashierContext, CJPayBalanceVerifyManager, NSMutableArray;

@interface CJPayBalanceWithdrawController : CJPayBalanceBaseController <CJPayHomeVCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CJPayFrontCashierContext *payContext;
@property (retain, nonatomic) NSMutableArray *notSufficientFundIds;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long loadingType;
@property (retain, nonatomic) CJPayBalanceVerifyManager *balanceWithdrawVerifyManager;
@property (copy, nonatomic) id /* block */ refreshOrderBlock;

- (id)topVC;
- (id)createOrderResponse;
- (unsigned long long)firstVerifyType;
- (id)curSelectConfig;
- (void)push:(id)a0 animated:(BOOL)a1;
- (void)endVerifyWithResultResponse:(id)a0;
- (void)closeActionAfterTime:(double)a0 closeActionSource:(unsigned long long)a1;
- (BOOL)receiveDataBus:(unsigned long long)a0 obj:(id)a1;
- (void)p_dismissAllVCAboveCurrent;
- (void)p_callbackResultWithSource:(unsigned long long)a0;
- (void)showState:(long long)a0;
- (void)p_refreshOrderResponseWithToastMessage:(id)a0;
- (void)startWithdrawWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (void)dealloc;

@end
