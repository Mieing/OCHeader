@class UIImageView, UILabel, UIView;

@interface AWEComposerBeautyResetModeCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) double iconWidth;

+ (id)identifier;

- (void)addSubviews;
- (void).cxx_destruct;
- (void)setIconImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAvailable:(BOOL)a0;

@end
