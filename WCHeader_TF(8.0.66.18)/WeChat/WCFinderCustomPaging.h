@class NSIndexPath, UITableView;
@protocol WCFinderCustomPagingDelegate;

@interface WCFinderCustomPaging : NSObject

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (nonatomic) BOOL magicAdjustDecelerating;
@property (nonatomic) BOOL footerViewDisplayed;
@property (retain, nonatomic) NSIndexPath *beginDraggingIndexPath;
@property (weak, nonatomic) id<WCFinderCustomPagingDelegate> delegate;
@property (readonly, nonatomic) BOOL isAnimating;

- (id)initWithTableView:(id)a0;
- (void)tableViewWillBeginDragging;
- (BOOL)isTableViewFooterViewDisplayed;
- (void)tableViewWillEndDraggingWithVelocity:(struct CGPoint { double x0; double x1; })a0 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetFrameForSlideUp;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetFrameForSlideDown;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetFrameForSlideStop;
- (BOOL)_isSplitCellAtIdx:(long long)a0;
- (void)tableViewBeginDecelerating;
- (void)tableViewBeginDeceleratingWithSpeed:(double)a0;
- (void).cxx_destruct;

@end
