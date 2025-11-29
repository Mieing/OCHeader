@class CJPaySendSMSResponse, CJPayCardUpdateModel, NSDictionary, CJPaySignSMSResponse, CJPayMemBankInfoModel;

@interface CJPayHalfCardUpdateVerifySMSViewController : CJPayHalfVerifySMSViewController

@property (retain, nonatomic) CJPaySignSMSResponse *signResponse;
@property (retain, nonatomic) CJPayMemBankInfoModel *bankCardInfo;
@property (retain, nonatomic) CJPayCardUpdateModel *cardUpdateModel;
@property (retain, nonatomic) CJPaySendSMSResponse *sendSMSResponse;
@property (copy, nonatomic) NSDictionary *ulBaseReqquestParam;
@property (copy, nonatomic) NSDictionary *sendSMSBizParam;
@property (copy, nonatomic) id /* block */ cardSignSuccessCompletion;
@property (copy, nonatomic) NSDictionary *context;

- (void)verifySMS;
- (id)p_buildVerifyParams;
- (void)gotoNextStep;
- (void)postSMSCode:(id /* block */)a0 failure:(id /* block */)a1;
- (void).cxx_destruct;

@end
