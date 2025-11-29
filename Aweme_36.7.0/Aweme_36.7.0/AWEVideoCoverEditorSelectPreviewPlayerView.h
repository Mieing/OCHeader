@class UIImageView, CAShapeLayer, UIView, ACCGradientView;

@interface AWEVideoCoverEditorSelectPreviewPlayerView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *cutAreaLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cutAreaRect;
@property (retain, nonatomic) ACCGradientView *topContainerView;
@property (retain, nonatomic) ACCGradientView *bottomContainerView;
@property (nonatomic) double animationsTime;
@property (nonatomic) BOOL hiddenCutArea;

- (void)updateImage:(id)a0;
- (BOOL)isRefactorOpt;
- (void)setCutAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animate:(BOOL)a1 completion:(id /* block */)a2;
- (void)setImageViewHidden:(BOOL)a0;
- (void)setCutAreaStrokeColor:(id)a0;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
