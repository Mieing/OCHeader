@class UIColor, NSTimer, UILabel, UIButton;

@interface BDPBubbleView : UIView {
    NSTimer *_hideTimer;
}

@property (nonatomic) long long arrowDirection;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } viewEdgeInsets;
@property (retain, nonatomic) UIColor *bubbleBackgroundColor;
@property (nonatomic) double bubbleCornerRadius;
@property (nonatomic) double closeTimeInterval;
@property (copy, nonatomic) id /* block */ touchInViewAction;
@property (copy, nonatomic) id /* block */ autoCloseAction;
@property (nonatomic) struct CGPoint { double x; double y; } triangleTopPoint;
@property (nonatomic) double triangleWidth;
@property (nonatomic) double triangleHeight;
@property (nonatomic) long long triangleEdge;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) struct CGSize { double width; double height; } tipsLabelMaxSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelEdgeInsets;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) struct CGSize { double width; double height; } closeBtnSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } closeBtnEdgeInsets;
@property (nonatomic) BOOL forbidTouch;

- (void)drawTriangle;
- (double)getRectY;
- (double)getViewX;
- (double)getViewY;
- (void)drawRectangle;
- (double)getTriangleX;
- (double)getTriangleY;
- (void)showFromView:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)dismissViewWithCompletion:(id /* block */)a0;

@end
