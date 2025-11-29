@class AWEAwemeDetailTableViewCell, AWEAwemeModel;

@interface AWESearchVideoFeedTableViewController : AWEAwemeDetailTableViewController

@property (retain, nonatomic) AWEAwemeModel *lastModel;
@property (retain, nonatomic) AWEAwemeDetailTableViewCell *currentDetailCell;
@property (nonatomic) long long currentCellIndex;
@property (nonatomic) BOOL currentShouldShowMask;

- (void)onScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)createDefaultConfig;
- (void)shakeOnChangeCollection;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)addObservers;

@end
