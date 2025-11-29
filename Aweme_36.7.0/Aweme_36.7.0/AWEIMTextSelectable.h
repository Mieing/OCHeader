@class UITapGestureRecognizer, NSString, UILongPressGestureRecognizer, UIColor, CALayer, UIView, YYLabel;
@protocol AWEIMTextSelectableDelegate;

@interface AWEIMTextSelectable : UIView <AWEIMSelectableLabelProtocol, UIGestureRecognizerDelegate>

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) YYLabel *label;
@property (weak, nonatomic) CALayer *overlayer;
@property (weak, nonatomic) UIView *interacView;
@property (nonatomic) unsigned long long selectState;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (nonatomic) BOOL interactionOptEnable;
@property (retain, nonatomic) UIColor *selectColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectableRange;
@property (weak, nonatomic) id<AWEIMTextSelectableDelegate> delegate;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL enableHitTestReturnInteracView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTextSelectableShowingWithIdentifier:(id)a0;
+ (void)resetCurrentTextSelectable;
+ (BOOL)isAnyTextSelectableShownOnScreen;

- (void)handleTapGes:(id)a0;
- (BOOL)isShownOnScreen;
- (void)upgradeSelectableToLabel:(id)a0 containerView:(id)a1;
- (void)selectFullRange;
- (void)handleLongPressGes:(id)a0;
- (void)resetWithHitPoint:(struct CGPoint { double x0; double x1; })a0 pointInView:(id)a1;
- (BOOL)p_isGrabberContainingPoint:(struct CGPoint { double x0; double x1; })a0 pointInView:(id)a1 isFrontGrabber:(BOOL)a2;
- (void)p_draw;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_grabberRectForFront:(BOOL)a0;
- (double)p_middleXBetweenFrontX:(double)a0 endX:(double)a1;
- (void)p_setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)upgradeSelectableToLabel:(id)a0 containerView:(id)a1 rootView:(id)a2;
- (BOOL)isLongTextLabel:(id)a0;
- (void)endLongPressGes;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)reset;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
