@interface AWEAwemeSearchCommonDetailController : AWEAwemeNewDetailBaseController

@property (nonatomic) BOOL hasShowedVideoNote;

- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)showCommentPanelFromSearch;
- (BOOL)openVideoSummaryInflow;
- (BOOL)enableConfigCommentSearchCardTrackParams;
- (void)modifySearchCommentTrackParamsWithModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)currentInteractionController;
- (id)currentModel;

@end
