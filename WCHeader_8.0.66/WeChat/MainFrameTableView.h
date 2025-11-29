@class NSIndexPath, CADisplayLink;

@interface MainFrameTableView : MMMainTableView

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double animationPointsPerSecond;
@property (nonatomic) double finalContentOffset;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;

- (BOOL)tryDeleteRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;
- (BOOL)tryInsertRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;
- (BOOL)tryInsertRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1 completion:(id /* block */)a2;
- (void)forceScrollToOffset:(double)a0 duration:(double)a1 complete:(id /* block */)a2;
- (void)endAnimation;
- (void)displayLinkTick;
- (void)handleSelectAtIndexPath:(id)a0;
- (id)indexPathForSelectedRow;
- (void)selectRowAtIndexPath:(id)a0 cell:(id)a1 animated:(BOOL)a2 scrollPosition:(long long)a3;
- (void)selectRowAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(long long)a2;
- (void)deselectRowAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
