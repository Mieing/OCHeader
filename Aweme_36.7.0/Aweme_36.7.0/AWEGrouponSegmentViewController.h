@class AWEGrouponPageContext, AWEGrouponSegmentViewModel, AWEGrouponSegmentView;

@interface AWEGrouponSegmentViewController : UIViewController

@property (retain, nonatomic) AWEGrouponPageContext *pageContext;
@property (retain, nonatomic) AWEGrouponSegmentViewModel *viewModel;
@property (retain, nonatomic) AWEGrouponSegmentView *segmentView;

- (void)setupBinding;
- (id)initWithPageContext:(id)a0;
- (id)findTabViewWithTabID:(long long)a0;
- (long long)findTabIndexWithTabID:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
