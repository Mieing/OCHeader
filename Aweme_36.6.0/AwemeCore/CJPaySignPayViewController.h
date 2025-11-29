@class CJPaySignPayQuerySignInfoResponse, NSString, CJPayCreateOrderResponse, CJPayDefaultChannelShowConfig, CJPaySignView;

@interface CJPaySignPayViewController : CJPayFullPageBaseViewController <CJPayAPIDelegate>

@property (retain, nonatomic) CJPaySignView *contentView;
@property (retain, nonatomic) CJPayCreateOrderResponse *orderResponse;
@property (copy, nonatomic) NSString *zg_app_id;
@property (copy, nonatomic) NSString *zg_merchant_id;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectedShowConfig;
@property (nonatomic) BOOL isShownSecondaryConfirmPupup;
@property (retain, nonatomic) CJPaySignPayQuerySignInfoResponse *querySignInfo;
@property (copy, nonatomic) NSString *returnURLStr;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) long long signType;
@property (nonatomic) BOOL immediatelyClose;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onResponse:(id)a0;
- (id)p_buildCommonModel;
- (void)p_bindCard;
- (void)p_onConfirmPayAction;
- (void)p_closeCashierDeskAndJumpBackWithResult:(unsigned long long)a0;
- (void)p_alertRequestErrorWithMsg:(id)a0 clickAction:(id /* block */)a1;
- (void)p_openCashDesk;
- (void)p_requestQuerySignInfo;
- (void)p_trackForPage:(id)a0 params:(id)a1;
- (BOOL)p_matchSecondaryConfirmScience;
- (void)p_showSecondaryConfirmWithConfirmBlock:(id /* block */)a0;
- (void)p_gotoCardListVC;
- (void)p_updateDeductMethodWithShowConfig:(id)a0;
- (void)p_trackerEvent:(id)a0 params:(id)a1;
- (void)p_configCashRegisterVCWithBizParams:(id)a0;
- (id)p_mergeCommonParamsWithDict:(id)a0 response:(id)a1;
- (BOOL)p_isFromOuterPay;
- (id)p_outerAppId;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)back;

@end
