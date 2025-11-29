@class CJPayBDCreateOrderResponse, NSString, CJPaySecondaryConfirmInfoModel, CJPaySkipPwdConfirmHalfPageView, CJPayBaseVerifyManager;

@interface CJPaySkipPwdConfirmHalfPageViewController : CJPayHalfPageBaseViewController <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) CJPaySkipPwdConfirmHalfPageView *confirmView;
@property (retain, nonatomic) CJPaySecondaryConfirmInfoModel *confirmInfo;
@property (nonatomic) BOOL isSetupUIFinished;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createOrderResponse;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ checkboxClickBlock;
@property (copy, nonatomic) id /* block */ backCompletionBlock;
@property (weak, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportStdNaviBar;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)p_onConfirmPayAction;
- (id)p_trackPopTypeStr;
- (void)p_trackBtmEvent:(id)a0 eventName:(id)a1 params:(id)a2;
- (void)p_checkBoxTapped;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (double)containerHeight;
- (void)back;

@end
