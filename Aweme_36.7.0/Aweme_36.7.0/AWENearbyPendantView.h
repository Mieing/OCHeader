@class UITapGestureRecognizer, LOTAnimationView, YYAnimatedImageView, UIView, UIButton;
@protocol AWENearbyPendantViewDelegate;

@interface AWENearbyPendantView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) LOTAnimationView *lotAnimationView;
@property (retain, nonatomic) YYAnimatedImageView *imageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id<AWENearbyPendantViewDelegate> delegate;

- (void)__buildUI;
- (void)__layoutUI;
- (void)__configUI;
- (void)__close:(id)a0;
- (void)__tap:(id)a0;
- (void)removeSubViewContent;
- (void)__reBuildLottieAnimationViewWithFilePath:(id)a0;
- (void)__reBuildImageViewWithURLmodel:(id)a0;
- (void)setUpLotAnimationViewWithFilePath:(id)a0;
- (void)setUpImageViewWithURLModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
