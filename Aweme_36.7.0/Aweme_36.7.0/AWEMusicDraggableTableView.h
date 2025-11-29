@class NSNumber, NSString, CADisplayLink, UIView, NSIndexPath, UILongPressGestureRecognizer;

@interface AWEMusicDraggableTableView : UITableView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILongPressGestureRecognizer *longPressDragGestureRecognizer;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSIndexPath *initialIndexPath;
@property (retain, nonatomic) NSNumber *lastGestureLocationY;
@property (retain, nonatomic) UIView *cellSnapshot;
@property (nonatomic) BOOL cellIsAnimating;
@property (nonatomic) unsigned long long dragDirection;
@property (copy, nonatomic) id /* block */ shouldRecognizeLongPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)p_isPointInTop:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)p_isPointInBottom:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })p_preferredContentOffsetAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)p_exchangeCellTo:(id)a0;
- (void)onDisplayRefresh:(id)a0;
- (id)snapshotOfCell:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)longPressed:(id)a0;

@end
