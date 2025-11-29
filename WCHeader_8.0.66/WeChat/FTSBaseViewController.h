@class UIView, FTSContext, WCTimeLineFooterView;

@interface FTSBaseViewController : WCSearchViewController

@property (retain, nonatomic) FTSContext *context;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) UIView *emptyFooterView;

- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)onNavigationCancelItemClick;
- (id)getFTSContext;
- (void)startSearchFrom:(id)a0 searchBar:(id)a1;
- (void).cxx_destruct;

@end
