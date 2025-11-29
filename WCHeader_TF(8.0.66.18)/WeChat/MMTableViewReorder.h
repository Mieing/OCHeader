@class UILongPressGestureRecognizer, UIPanGestureRecognizer, CADisplayLink, NSString, UIView, NSIndexPath, UITableView;
@protocol MMTableViewReorderDelegate;

@interface MMTableViewReorder : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) struct CGPoint { double x; double y; } currentPosition;
@property (retain, nonatomic) UIView *snapshotCell;
@property (nonatomic) BOOL isGettingCellSnapshot;
@property (retain, nonatomic) NSIndexPath *draggingIndexPath;
@property (retain, nonatomic) CADisplayLink *autoScrollTimer;
@property (nonatomic) double autoScrollStep;
@property (nonatomic) BOOL isAutoScrolling;
@property (nonatomic) BOOL isBottomToTop;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *singlePanGesture;
@property (weak, nonatomic) id<MMTableViewReorderDelegate> delegate;
@property (nonatomic) BOOL isLongPressTrigger;
@property (nonatomic) BOOL isSingleClickTrigger;
@property (nonatomic) double longPressTrigerDuration;
@property (nonatomic) BOOL isAutoScrollEnable;
@property (nonatomic) double autoScrollStartTopInset;
@property (nonatomic) double autoScrollStartBottomInset;
@property (nonatomic) double autoScrollSpeedPerSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (BOOL)isSpaceCell:(id)a0;
- (void)onLongPressGesture:(id)a0;
- (void)onPanGesture:(id)a0;
- (void)handleGestureState:(long long)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)onReorderBeginPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)onReorderChangePosition:(struct CGPoint { double x0; double x1; })a0;
- (void)onReorderEndPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)checkCellExchangeWithCurrentPos:(struct CGPoint { double x0; double x1; })a0;
- (id)calculateDestinationIndexForPos:(struct CGPoint { double x0; double x1; })a0;
- (void)startAutoScrollToTop:(BOOL)a0;
- (void)stopAutoScroll;
- (void)fireTableViewScroll;
- (void)updateSnapshotCellForIndexPath:(id)a0;
- (id)genSnapshotForIndexPath:(id)a0;
- (id)indexBefore:(id)a0;
- (id)indexAfter:(id)a0;
- (void).cxx_destruct;

@end
