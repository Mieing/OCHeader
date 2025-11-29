@class DUXLottieView, NSString, UILabel, UIView, UIPanGestureRecognizer;

@interface AWEClueStoreGuideAnimationView : UIView <LOTAnimationDelegate>

@property (nonatomic) long long type;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) DUXLottieView *lottieView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIPanGestureRecognizer *verticalPan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPanGestureRecognizer;
- (id)getDUXLottieName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 dismissBlock:(id /* block */)a2;
- (void)setupSubview;
- (void)dismiss;
- (void).cxx_destruct;
- (id)title;
- (void)handlePanGesture:(id)a0;
- (void)setupLayout;

@end
