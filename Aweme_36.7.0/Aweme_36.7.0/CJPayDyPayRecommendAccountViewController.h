@class CJPayDyPayRecommendAccountHalfPageSwitchView, CJPayDyPayRecommendAccountHalfPageLoginView, CJPayMultifunctionalAttributeLabel, CJPayButton, CJPayDyPayRecommendAccountViewModel;

@interface CJPayDyPayRecommendAccountViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *currentUserLabel;
@property (retain, nonatomic) CJPayDyPayRecommendAccountHalfPageSwitchView *switchView;
@property (retain, nonatomic) CJPayDyPayRecommendAccountHalfPageLoginView *loginView;
@property (retain, nonatomic) CJPayButton *confirmBtn;
@property (retain, nonatomic) CJPayDyPayRecommendAccountViewModel *viewModel;
@property (copy, nonatomic) id /* block */ clickConfirmBtn;
@property (copy, nonatomic) id /* block */ trackBlock;

- (void)useCloseBackBtn;
- (BOOL)supportStdNaviBar;
- (void)p_clickConfirmBtn;
- (id)p_createCloseBarAction;
- (id)p_getCommonTrackerParams:(id)a0;
- (void)p_updateUIWithViewModel:(id)a0;
- (id)p_createCurrentUserLabelModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (double)containerHeight;
- (void)back;

@end
