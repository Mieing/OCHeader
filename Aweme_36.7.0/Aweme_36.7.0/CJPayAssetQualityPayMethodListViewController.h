@class NSMutableArray, NSArray, NSString, UIScrollView, CJPayAssetQualityPayMethodListManager, UIView;

@interface CJPayAssetQualityPayMethodListViewController : CJPayHalfPageBaseViewController

@property (weak, nonatomic) CJPayAssetQualityPayMethodListManager *manager;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) NSArray *methodGroupModels;
@property (retain, nonatomic) NSMutableArray *methodGroupViews;
@property (nonatomic) double pageHeight;
@property (nonatomic) BOOL isCombineMode;
@property (copy, nonatomic) NSString *naviBarTitle;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ trackBlock;

- (void)refreshPayMethodSelectStatus:(id)a0;
- (void)p_trackerViewDidLoad;
- (void)p_trackerWithEventName:(id)a0 params:(id)a1;
- (void)p_setupMethodGroupViewsWithSuperview:(id)a0;
- (void)didSelectPayMethod:(id)a0 loadingView:(id)a1;
- (void)p_trackerClickConfig:(id)a0 preSelectedConfig:(id)a1;
- (void)updateContentViewWithMethodGroupModels:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (void)viewDidLoad;
- (double)containerHeight;
- (void)back;

@end
