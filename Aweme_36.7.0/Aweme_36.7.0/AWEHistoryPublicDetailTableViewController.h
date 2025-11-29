@interface AWEHistoryPublicDetailTableViewController : AWEAwemeDetailTableViewController

- (void)onScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)noMoreDataDescription;
- (id)createDefaultConfig;

@end
