@class NSString, UIImageView, CAShapeLayer, UILabel, UIView, MASConstraint;

@interface ACCScanObjectTagView : UIView <ACCScanObjectTagViewStudioProxy>

@property (nonatomic) unsigned long long tagDirection;
@property (retain, nonatomic) UIView *roundedRectView;
@property (retain, nonatomic) UIView *roundedDotView;
@property (retain, nonatomic) UIView *roundedAnimationView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) CAShapeLayer *roundedRectLayer;
@property (retain, nonatomic) CAShapeLayer *maskRadiusLayer;
@property (retain, nonatomic) CAShapeLayer *roundedDotLayer;
@property (retain, nonatomic) CAShapeLayer *roundedDarkLayer;
@property (retain, nonatomic) CAShapeLayer *roundedAnimationLayer;
@property (retain, nonatomic) MASConstraint *dotLeftConstraint;
@property (retain, nonatomic) MASConstraint *dotRightConstraint;
@property (retain, nonatomic) MASConstraint *dotTopConstraint;
@property (retain, nonatomic) MASConstraint *dotBottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithAnimation;
- (void)updateWithText:(id)a0 image:(id)a1;
- (void)updateObjectCenter:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)startBreathWithAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
