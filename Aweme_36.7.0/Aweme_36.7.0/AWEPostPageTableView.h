@interface AWEPostPageTableView : UITableView

@property (nonatomic) struct CGPoint { double x; double y; } lockedContentOffset;
@property (nonatomic) BOOL animateLock;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
