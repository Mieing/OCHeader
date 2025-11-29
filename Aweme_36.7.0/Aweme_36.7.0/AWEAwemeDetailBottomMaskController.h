@class UIImageView;

@interface AWEAwemeDetailBottomMaskController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) UIImageView *maskImageView;

- (void)userChangedFrom:(id)a0 to:(id)a1;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (id)watermarkManager;
- (void)viewDidLoadAfterTableviewSetup;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)addNotifications;
- (void)setupMaskImageView;
- (void)bindEvents;
- (void)updateMaskViewPositionIfNeed;
- (void)changeTopMaskImage:(id)a0;
- (double)maskViewHeight;
- (void).cxx_destruct;
- (void)dealloc;

@end
