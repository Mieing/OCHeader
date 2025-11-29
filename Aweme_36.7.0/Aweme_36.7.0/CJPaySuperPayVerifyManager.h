@class CJPayFrontCashierContext, NSDictionary, CJPayHintInfo;

@interface CJPaySuperPayVerifyManager : CJPayBaseVerifyManager

@property (retain, nonatomic) CJPayFrontCashierContext *payContext;
@property (retain, nonatomic) CJPayHintInfo *hintInfo;
@property (copy, nonatomic) NSDictionary *dataDict;
@property (nonatomic) BOOL isPayAgainV2;

+ (id)managerWith:(id)a0 isAssetProcess:(BOOL)a1;
+ (id)managerWith:(id)a0;

- (void)onBindCardAndPayAction;
- (id)buildConfirmRequestParamsByCurPayChannel;
- (void)confirmRequestSuccess:(id)a0 withChannelType:(unsigned long long)a1;
- (void)requestConfirmPayWithOrderResponse:(id)a0 withExtraParams:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)gotoBindCardWithCompletion:(id /* block */)a0;
- (void)p_bindCardAction;
- (void)p_trackQueryResultWithResultResponse:(id)a0;
- (void).cxx_destruct;

@end
