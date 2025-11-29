@class UIImageView, LOTAnimationView, UILabel, AWEAwemeModel;

@interface AWEAdAvatarPendantView : UIView

@property (retain, nonatomic) UILabel *pendantText;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) LOTAnimationView *pendantIcon;
@property (retain, nonatomic) AWEAwemeModel *aweme;

- (id)initWithAwemeModel:(id)a0;
- (void)startAnimationWithLayer:(id)a0 beginOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
