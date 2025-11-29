@interface IESLiveTableViewDelegate : IESLiveXDelegateProxy

@property (nonatomic) struct CGPoint { double x; double y; } downLocation;
@property (nonatomic) double startDragTimeInterval;

+ (id)proxyWithTarget:(id)a0;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;

@end
