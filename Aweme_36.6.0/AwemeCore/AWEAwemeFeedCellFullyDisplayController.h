@class NSMutableSet;

@interface AWEAwemeFeedCellFullyDisplayController : AWEAwemeFeedBaseController

@property (retain, nonatomic) NSMutableSet *fullyDisplayedIndexes;

- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)checkAndNotifyFullyDisplayedCellIfNeeded:(id)a0;
- (BOOL)isCellFullyVisibleAtIndexPath:(id)a0;
- (void)notifyCellFullyDisappear:(id)a0 atIndexPath:(id)a1;
- (void)notifyCellFullyDisplay:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (id)cellAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
