@class UIScrollView, NSString, UIPanGestureRecognizer;
@protocol WCFinderFullScreenHorPanGestureDelegate;

@interface WCFinderFullScreenHorPanGesture : UIGestureRecognizer <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<WCFinderFullScreenHorPanGestureDelegate> m_delegate;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } touchBeginPoint;
@property (nonatomic) BOOL hasBeginDrag;
@property (nonatomic) BOOL enableDragDownToClose;
@property (nonatomic) BOOL shouldCloseWhenGestureEnd;
@property (nonatomic) struct CGPoint { double x; double y; } panGestureBeginPoint;
@property (nonatomic) struct CGPoint { double x; double y; } panGestureLastPosition;
@property (nonatomic) unsigned long long panGestureLastTimeStamp;
@property (nonatomic) double panGestureAnimationDuration;
@property (weak, nonatomic) UIScrollView *pagingScrollView;
@property (weak, nonatomic) UIScrollView *innerScrollView;
@property (nonatomic) BOOL enableDragToClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0 customDelegate:(id)a1;
- (void)setupGestures:(id)a0;
- (void)reset;
- (void)onSingleTap;
- (void)cancelPressEvents;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)onDragging:(id)a0;
- (void)handleDraggingChanged:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldCloseWhenGestureEndWithTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (double)distanceBetweenPointA:(struct CGPoint { double x0; double x1; })a0 pointB:(struct CGPoint { double x0; double x1; })a1;
- (double)durationFromCurPositionToTargetPointWithSpeed:(double)a0 dist:(double)a1;
- (void).cxx_destruct;

@end
