@class UIScrollView, CADisplayLink;

@interface MJScrollViewAutoScroller : NSObject

@property (nonatomic) BOOL isAutoScrolling;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastAutoScrollTimestamp;
@property (nonatomic) struct CGPoint { double x; double y; } lastTouchPoint;
@property (nonatomic) struct CGPoint { double x; double y; } originalTouchPoint;
@property (nonatomic) double minimumMoveDistance;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } autoScrollEdgeInsets;
@property (nonatomic) double minScrollVelocity;
@property (nonatomic) double maxScrollVelocity;
@property (readonly, nonatomic) UIScrollView *scrollView;

- (id)initWithScrollView:(id)a0;
- (void)start;
- (void)stop;
- (void)startDisplayLinkIfNeeded;
- (void)invalidateDisplayLinkIfNeeded;
- (void)handleDisplayLink:(id)a0;
- (void)updateWithTouchPointInScrollViewContainer:(struct CGPoint { double x0; double x1; })a0;
- (double)autoScrollVelocity;
- (void).cxx_destruct;

@end
