@class CJPayChooseDyPayMethodManager, NSArray, NSString, UIScrollView, UIView, CJPayChoosePayMethodGroupView;

@interface CJPayChooseDyPayMethodViewController : CJPayHalfPageBaseViewController <CJPayBaseLoadingProtocol>

@property (weak, nonatomic) CJPayChooseDyPayMethodManager *manager;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) CJPayChoosePayMethodGroupView *paymentToolGroupView;
@property (retain, nonatomic) CJPayChoosePayMethodGroupView *financeChannelGroupView;
@property (retain, nonatomic) NSArray *payMethodsGroupModel;
@property (nonatomic) double height;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshPayMethodSelectStatus:(id)a0;
- (void)p_trackerViewDidLoad;
- (void)p_trackerWithEventName:(id)a0 params:(id)a1;
- (void)didSelectPayMethod:(id)a0 loadingView:(id)a1;
- (void)p_superBack;
- (id)p_buildChannelActivityInfo:(id)a0;
- (void)p_activateCreditAndPay:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_isNeedRefreshPayMethodSelectedWithShowConfig:(id)a0;
- (void)p_creditAmountComparisonWithAmount:(long long)a0 successDesc:(id)a1 completion:(id /* block */)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (double)containerHeight;
- (void)back;

@end
