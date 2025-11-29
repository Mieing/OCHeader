@class CAGradientLayer, UIImageView, UIView, UILabel;

@interface ACCAIGCUGCFusionCreationToolsShotcutCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *tipsLabel;

+ (id)reuseIdentifier;

- (void)onThemeChanged;
- (void)p_setupViews;
- (void)bindService;
- (void)updateWithModel:(id)a0 image:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
