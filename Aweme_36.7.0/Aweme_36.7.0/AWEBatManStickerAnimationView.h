@class UIImageView, UIButton, UILabel;

@interface AWEBatManStickerAnimationView : UIView

@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *maskButton;

- (void)setEntranceInfo:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupSubviews;

@end
