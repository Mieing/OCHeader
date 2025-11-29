@class CJPaySignOnlyQuerySignTemplateResponse, NSString, CJPayMemVerifyManager, CJPayDefaultChannelShowConfig, CJPaySignView;

@interface CJPaySignOnlyViewController : CJPayFullPageBaseViewController

@property (retain, nonatomic) CJPaySignView *contentView;
@property (retain, nonatomic) CJPayMemVerifyManager *memVerifyManager;
@property (nonatomic) BOOL isHadShowRetain;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectedShowConfig;
@property (nonatomic) BOOL isShownSecondaryConfirmPupup;
@property (retain, nonatomic) CJPaySignOnlyQuerySignTemplateResponse *querySignInfo;
@property (copy, nonatomic) NSString *returnURLStr;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *zg_app_id;
@property (copy, nonatomic) NSString *zg_merchant_id;
@property (nonatomic) long long signType;
@property (nonatomic) BOOL immediatelyClose;
@property (copy, nonatomic) id /* block */ completion;

- (id)p_buildCommonModel;
- (void)p_bindCard;
- (void)p_onConfirmPayAction;
- (void)p_closeCashierDeskAndJumpBackWithResult:(unsigned long long)a0;
- (void)p_alertRequestErrorWithMsg:(id)a0 clickAction:(id /* block */)a1;
- (void)p_requestQuerySignInfo;
- (unsigned long long)p_stateTypeWithSignStatus:(id)a0;
- (void)p_trackForPage:(id)a0 params:(id)a1;
- (BOOL)p_isNeedGoLynxBind;
- (void)p_openLynxBindCardAndSign;
- (void)p_sign;
- (BOOL)p_matchSecondaryConfirmScience;
- (void)p_showSecondaryConfirmWithConfirmBlock:(id /* block */)a0;
- (id)p_baseRequestParams;
- (void)p_gotoResultPageWithResponse:(id)a0 fromVC:(id)a1;
- (void)p_gotoPwdLockVCWithResponse:(id)a0 passwordVC:(id)a1;
- (unsigned long long)p_verifyType;
- (void)p_showRetainWithVC:(id)a0;
- (void)p_bindBytePayAccountWithVC:(id)a0 resultModel:(id)a1;
- (void)p_closeSignWithSignResult:(unsigned long long)a0;
- (void)p_gotoCardListVC;
- (void)p_signWithNoPwd;
- (void)p_updateDeductMethodWithShowConfig:(id)a0;
- (void)p_changePayMethodBtnClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)back;

@end
