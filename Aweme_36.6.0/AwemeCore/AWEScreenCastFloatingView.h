@class UIImageView, NSString, CAShapeLayer;
@protocol AWEScreenCastFloatingViewDelegate;

@interface AWEScreenCastFloatingView : UIView <AWEScreenCastFloatingViewProtocol>

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) long long position;
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL useRevisionUI;
@property (weak, nonatomic) id<AWEScreenCastFloatingViewDelegate> delegate;
@property (nonatomic) double originAweRight;
@property (nonatomic) double originAweLeft;
@property (nonatomic) double originAweTop;
@property (nonatomic) BOOL iconGrey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideWithAnimated:(BOOL)a0;
- (void)showWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isRightSide;
- (void)rebuildConstrains;
- (void)handleButtonPan:(id)a0;
- (void)changeMoveState:(BOOL)a0;
- (void)ugPendantViewMoved:(id)a0;
- (void)configBorderLayers;
- (struct CGPoint { double x0; double x1; })calculateCenter;
- (void)showCastTip;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
