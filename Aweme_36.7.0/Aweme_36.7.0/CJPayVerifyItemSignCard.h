@class NSString, CJPayHalfVerifySMSViewController, CJPayCardUpdateViewController;

@interface CJPayVerifyItemSignCard : CJPayVerifyItem

@property (nonatomic) BOOL isUpdatePhoneNumber;
@property (retain, nonatomic) CJPayCardUpdateViewController *cardUpdateViewController;
@property (retain, nonatomic) CJPayHalfVerifySMSViewController *verifySMSVC;
@property (copy, nonatomic) NSString *payFlowNo;
@property (copy, nonatomic) NSString *inputContent;

- (id)checkType;
- (void)handleVerifyResponse:(id)a0;
- (void)showState:(long long)a0;
- (id)getLatestCacheData;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (void)p_closeCardUpdateVCWithVC:(id)a0 completion:(id /* block */)a1;
- (void)p_requestVerifyWithBDPayCardSignResponse:(id)a0;
- (void)p_verifySMS;
- (void)signCardFailed:(id)a0;
- (id)createUpdateViewControllerWithResponse:(id)a0;
- (id)createVerifySMSVC;
- (void)p_signUp;
- (void).cxx_destruct;

@end
