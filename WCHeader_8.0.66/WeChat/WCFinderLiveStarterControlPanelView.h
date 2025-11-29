@class NSMutableArray;

@interface WCFinderLiveStarterControlPanelView : UIScrollView

@property (retain, nonatomic) NSMutableArray *showArray;
@property (nonatomic) double gap;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemHeight;

- (void)addSubCell:(id)a0;
- (void)updateGap:(double)a0 itemWidth:(double)a1 itemHeight:(double)a2;
- (BOOL)updateItemCellWithTitle:(id)a0 hidden:(BOOL)a1;
- (void)layoutUI;
- (void).cxx_destruct;

@end
