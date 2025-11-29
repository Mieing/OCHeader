@class LOTAnimationView, UIImageView, UILabel;
@protocol AWECommentPanelCellConfigurationProtocol;

@interface AWECommentActionView : UIControl

@property (nonatomic) long long type;
@property (retain, nonatomic) id<AWECommentPanelCellConfigurationProtocol> config;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) LOTAnimationView *animationBackView;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;

- (void)onUIThemeChange;
- (void)setupLike;
- (void)setupDislike;
- (void)setupReply;
- (void)showOriginAnimeWithSelected:(BOOL)a0 completion:(id /* block */)a1;
- (void)setupUIWithType:(long long)a0 withConfig:(id)a1;
- (void)showLottieAnimeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)animationName;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
