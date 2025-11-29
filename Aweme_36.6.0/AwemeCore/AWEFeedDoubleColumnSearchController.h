@class UIView;

@interface AWEFeedDoubleColumnSearchController : AWEDCFeedBaseController

@property (retain, nonatomic) UIView *searchIconView;

+ (double)fontSize:(double)a0;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)updateAlphaWithOffset:(double)a0;
- (void)didTapSearchIcon;
- (void).cxx_destruct;
- (void)setupUI;
- (void)containerViewDidLoad;

@end
