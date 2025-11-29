@class UIImageView, LOTAnimationView, UILabel, UIButton;

@interface AWENearbyLocationPermissionView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (nonatomic) double lottieRio;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *doneBtn;
@property (copy, nonatomic) id /* block */ actionBlk;
@property (copy, nonatomic) id /* block */ cancelBlk;

+ (void)showWithTitle:(id)a0 desc:(id)a1 image:(id)a2 actionBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
+ (void)showWithTitle:(id)a0 desc:(id)a1 lottie:(id)a2 actionBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;

- (void)closeBtnClicked:(id)a0;
- (void)p_dismiss;
- (void)p_show;
- (void)doneBtnClicked:(id)a0;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)panGesture:(id)a0;

@end
