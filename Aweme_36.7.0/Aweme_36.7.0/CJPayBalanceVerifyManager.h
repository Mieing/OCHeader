@class CJPayBalanceVerifyManagerQueen, CJPayFrontCashierContext;

@interface CJPayBalanceVerifyManager : CJPayBaseVerifyManager

@property (retain, nonatomic) CJPayBalanceVerifyManagerQueen *queen;
@property (nonatomic) unsigned long long balanceVerifyType;
@property (retain, nonatomic) CJPayFrontCashierContext *payContext;

- (id)verifyManagerQueen;
- (void)onBindCardAndPayAction;
- (id)buildConfirmRequestParamsByCurPayChannel;
- (void)confirmRequestSuccess:(id)a0 withChannelType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
