@class UIColor, NSString, CALayer, UIView, YYLabel;
@protocol AWEDeliveryTextSelectableDelegate;

@interface AWEDeliveryTextSelectable : UIView

@property (weak, nonatomic) YYLabel *label;
@property (weak, nonatomic) CALayer *overlayer;
@property (weak, nonatomic) UIView *interacView;
@property (nonatomic) unsigned long long selectState;
@property (retain, nonatomic) UIColor *selectColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (weak, nonatomic) id<AWEDeliveryTextSelectableDelegate> delegate;
@property (retain, nonatomic) NSString *identifier;

+ (BOOL)isTextSelectableShowingWithIdentifier:(id)a0;
+ (void)resetCurrentTextSelectable;

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
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
