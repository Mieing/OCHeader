@class NSSet, NSMutableDictionary;

@interface BDASControl : BDASView

@property (nonatomic, getter=isTracking) BOOL tracking;
@property (nonatomic, getter=isTouchInside) BOOL touchInside;
@property (retain, nonatomic) NSMutableDictionary *controlEventDispatchTable;
@property (readonly, nonatomic) unsigned long long state;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) long long contentVerticalAlignment;
@property (nonatomic) long long contentHorizontalAlignment;
@property (readonly, nonatomic) NSSet *allTargets;
@property (readonly, nonatomic) unsigned long long allControlEvents;

+ (void)initialize;

- (void)sendActionsForControlEvents:(unsigned long long)a0 withEvent:(id)a1;
- (void)_cancelTrackingWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)removeTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)sendActionsForControlEvents:(unsigned long long)a0;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (id)actionsForTarget:(id)a0 forControlEvent:(unsigned long long)a1;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;

@end
