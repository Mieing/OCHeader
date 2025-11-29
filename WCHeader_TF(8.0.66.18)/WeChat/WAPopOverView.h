@class UIImageView, MMUIViewController, UIView, WAPopOverTaskBarView, WAPopOverTaskBarlogic;

@interface WAPopOverView : MMUIView

@property (retain, nonatomic) UIView *interateView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WAPopOverTaskBarView *taskBarView;
@property (retain, nonatomic) WAPopOverTaskBarlogic *logic;
@property (weak, nonatomic) UIView *parentView;
@property (nonatomic) BOOL isDismissForbidAnimation;
@property (weak, nonatomic) MMUIViewController *containerVC;
@property (nonatomic) struct CGSize { double width; double height; } preferedContentSize;
@property (nonatomic) BOOL constraitByContainer;
@property (nonatomic) long long containerViewOrientation;

+ (double)getPopOverWidth;

- (id)initWithWAPopOverTaskLogic:(id)a0;
- (void)dealloc;
- (void)showInView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (double)getPopOverWidthConstriatByContainer;
- (void)dismissWithAnimation;
- (void)initContainerView;
- (void)initArrowImageView;
- (void)initInterateView;
- (void)didRotate:(id)a0;
- (void).cxx_destruct;

@end
