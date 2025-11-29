@class YYLabel, LOTAnimationView, UIImageView;

@interface AWEPlayInteractionVideoAbstractColletionViewCell : UICollectionViewCell

@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (nonatomic) BOOL isLongText;

+ (id)identifier;

- (void)configUI;
- (void)updateWithAttString:(id)a0 truncationToken:(id)a1 isLongText:(BOOL)a2 path:(id)a3;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
