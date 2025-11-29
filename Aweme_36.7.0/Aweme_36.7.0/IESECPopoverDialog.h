@class IESECPopoverBubbleView, UIColor, UIView;

@interface IESECPopoverDialog : UIView

@property (nonatomic) BOOL display;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (retain, nonatomic) IESECPopoverBubbleView *bubbleView;
@property (nonatomic) struct CGPoint { double x; double y; } tailPosition;
@property (nonatomic) long long direction;
@property (retain, nonatomic) UIView *targetView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double radius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) UIColor *bubbleBackgroundColor;
@property (nonatomic) double tailOffset;
@property (nonatomic) double targetSpace;
@property (nonatomic) BOOL blankGestureThrough;
@property (nonatomic) BOOL blankGestureDismiss;
@property (nonatomic) BOOL targetGestureThrough;
@property (nonatomic) BOOL showShadow;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)updateTargetPoint;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)updateConfig;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;
- (void)handleTap:(id)a0;
- (void)refreshConstraints;

@end
