@class UIImageView, UILabel;

@interface AWERecommendThumbsView : UIView

@property (retain, nonatomic) UIImageView *thumbsImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *fakeTextLabelImageView;

- (void)setupConstraint;
- (void)setMagnifyFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useFrame:(BOOL)a1 initAlpha:(double)a2;
- (void)setupUI:(BOOL)a0 initAlpha:(double)a1;
- (void)setupInitFrame;
- (double)getTotalWidthIsInitStatus:(BOOL)a0;
- (void)updateWithImageViewSize:(struct CGSize { double x0; double x1; })a0 textLabelFontClass:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
