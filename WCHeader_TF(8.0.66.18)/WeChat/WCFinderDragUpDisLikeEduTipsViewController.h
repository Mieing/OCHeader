@class PAGView;

@interface WCFinderDragUpDisLikeEduTipsViewController : MMPageSheetBaseViewController

@property (retain, nonatomic) PAGView *pagView;

- (double)pageSheetContentHeight;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)setupSubView;
- (id)getSuitablePagFile;
- (void)traitCollectionDidChange:(id)a0;
- (void)onClickDoneBtn;
- (void).cxx_destruct;

@end
