@class CJPaySignSMSResponse, CJPaySendSMSResponse, NSArray, CJPayFullPageBaseViewController, NSString, NSDictionary, CJPayCommonProtocolView, CJPayMemBankInfoModel, CJPayHalfSignCardVerifySMSViewModel;
@protocol CJPayMemAgreementModel;

@interface CJPayHalfSignCardVerifySMSViewController : CJPayHalfVerifySMSViewController <CJPayBindCardPageProtocol>

@property (weak, nonatomic) CJPayFullPageBaseViewController *topVC;
@property (nonatomic) BOOL hasCloseWithSuccess;
@property (nonatomic) BOOL hasCaptchaInput;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPaySendSMSResponse *sendSMSResponse;
@property (retain, nonatomic) CJPaySignSMSResponse *signResponse;
@property (copy, nonatomic) NSDictionary *ulBaseReqquestParam;
@property (copy, nonatomic) NSDictionary *sendSMSBizParam;
@property (copy, nonatomic) id /* block */ signSuccessCompletion;
@property (retain, nonatomic) CJPayMemBankInfoModel *bankCardInfo;
@property (copy, nonatomic) NSArray *activityInfos;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *memAgreements;
@property (nonatomic) BOOL needShowProtocol;
@property (retain, nonatomic) CJPayHalfSignCardVerifySMSViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)associatedModelClass;

- (void)trackWithEventName:(id)a0 params:(id)a1;
- (void)updateErrorText:(id)a0;
- (void)createAssociatedModelWithParams:(id)a0;
- (void)verifySMS;
- (void)gotoNextStep;
- (void)postSMSCode:(id /* block */)a0 failure:(id /* block */)a1;
- (void)goToHelpVC;
- (void)p_showProtocol;
- (id)buildVerifyParams;
- (void)p_setPwdWithRespone:(id)a0;
- (void)p_completeSignProcessWithSignNo:(id)a0 token:(id)a1;
- (BOOL)p_isNeedCardInfo:(long long)a0;
- (void)closeBindCardProcessWithFail;
- (void)closeBindCardProcessWithResult:(BOOL)a0 signNo:(id)a1 token:(id)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)containerHeight;
- (void)back;

@end
