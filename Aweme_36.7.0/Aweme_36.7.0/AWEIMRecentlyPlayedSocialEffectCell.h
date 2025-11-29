@class UIImageView, UILabel, UIView;

@interface AWEIMRecentlyPlayedSocialEffectCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *containerView;

- (void)configCellWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
