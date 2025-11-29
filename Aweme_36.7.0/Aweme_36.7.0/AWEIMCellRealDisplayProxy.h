@class NSPointerArray;
@protocol AWEIMCellRealDisplayProxyDelegate;

@interface AWEIMCellRealDisplayProxy : NSObject

@property (retain, nonatomic) NSPointerArray *waitDisplayCells_up;
@property (retain, nonatomic) NSPointerArray *waitDisplayCells_down;
@property (nonatomic) double lastOffset;
@property (nonatomic) double visiableMaxY;
@property (nonatomic) double visiableMinY;
@property (weak, nonatomic) id<AWEIMCellRealDisplayProxyDelegate> delegate;

- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1;
- (void)tableView:(id)a0 contentDidOffset:(double)a1;
- (long long)p_cellRealVisiableStatus:(id)a0 inView:(id)a1;
- (void)clearWaitDisplayCell;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
