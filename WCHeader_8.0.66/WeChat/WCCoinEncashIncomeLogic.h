@class WCCoinEncashParameter, NSString, WCCoinFetchMoneyInputViewController, KindaProgressDialog, PrepareIncomeEncashResponse, WCCoinInterceptLogic, SecurityInfoAuthrizeLogic;
@protocol WCCoinEncashIncomeLogicDelegate;

@interface WCCoinEncashIncomeLogic : MMObject <WCCoinPrepareIncomeEncashCgiDelegate, WCCoinEncashIncomeCgiDelegate, WCCoinFetchMoneyInputViewControllerDelegate, WCPayJSApiVerifyDelegate, WCPayPaidSuccessStatusViewControllerDelegate, WCCoinRealNameAuthCgiDelegate, WCCoinResignTaxCutTipsViewDelegate>

@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) PrepareIncomeEncashResponse *prepareEncashResponse;
@property (copy, nonatomic) NSString *wcpayToken;
@property (retain, nonatomic) WCCoinInterceptLogic *interceptLogic;
@property (retain, nonatomic) WCCoinFetchMoneyInputViewController *inputVC;
@property (retain, nonatomic) KindaProgressDialog *loading;
@property (retain, nonatomic) SecurityInfoAuthrizeLogic *authLogic;
@property (retain, nonatomic) WCCoinEncashParameter *parameter;
@property (weak, nonatomic) id<WCCoinEncashIncomeLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)enterInputVC;
- (void)getRealNameInfo;
- (void)uploadToken:(id)a0;
- (void)encashWith:(unsigned long long)a0;
- (void)startPrepareEncash;
- (void)startGetWCPayToken;
- (void)startEncash;
- (void)startEncash:(id)a0 action:(int)a1;
- (void)callSuccess;
- (void)callFail;
- (void)handleIntercept:(id)a0;
- (id)getTopVC;
- (void)showError:(id)a0;
- (void)shouldFetchMoney:(id)a0 amount:(unsigned long long)a1;
- (void)vcDidBePopedOrDismissed:(id)a0;
- (void)didClickTaxCutEntrance:(id)a0;
- (void)statusViewControlleDidClickDone:(id)a0;
- (void)didClickAgree:(id)a0;
- (void)didClickDisagree:(id)a0;
- (void)onVerifyResult:(id)a0;
- (id)getParam;
- (id)getCurrentURL;
- (void)realNameAuthCgi:(id)a0 didGetResponse:(id)a1;
- (void)realNameAuthCgi:(id)a0 didFailWithError:(id)a1;
- (void)prepareIncomeEncashCgi:(id)a0 didGetResponse:(id)a1;
- (void)prepareIncomeEncashCgi:(id)a0 didFailWithError:(id)a1;
- (void)encashIncomeCgi:(id)a0 didGetResponse:(id)a1;
- (void)encashIncomeCgi:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
