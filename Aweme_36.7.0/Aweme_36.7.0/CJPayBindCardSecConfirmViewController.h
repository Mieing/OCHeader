@class NSString, CJPaySecondaryConfirmInfoModel, CJPayBindCardSecConfirmView;

@interface CJPayBindCardSecConfirmViewController : CJPayHalfPageBaseViewController <CJPayBaseLoadingProtocol, CJPayMarketingMsgViewDelegate>

@property (retain, nonatomic) CJPaySecondaryConfirmInfoModel *secConfirmModel;
@property (retain, nonatomic) CJPayBindCardSecConfirmView *confirmView;
@property (nonatomic) BOOL isSetupUIFinished;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ backCompletionBlock;
@property (copy, nonatomic) id /* block */ tipsIconClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)useCloseBackBtn;
- (BOOL)supportStdNaviBar;
- (void)p_onConfirmPayAction;
- (id)p_createCloseBarAction;
- (void)onTipsIconClicked;
- (id)initWithBindCardSecConfirmModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)containerHeight;
- (void)back;

@end
