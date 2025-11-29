@class AWENearbyGrouponSegmentViewModel, AWENearbyGrouponSegmentView, AWENearbyPageContext;

@interface AWENearbyGrouponSegmentViewController : UIViewController

@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (retain, nonatomic) AWENearbyGrouponSegmentViewModel *viewModel;
@property (retain, nonatomic) AWENearbyGrouponSegmentView *segmentView;

- (void)setupBinding;
- (id)initWithPageContext:(id)a0;
- (id)findTabViewWithTabID:(long long)a0;
- (long long)findTabIndexWithTabID:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
