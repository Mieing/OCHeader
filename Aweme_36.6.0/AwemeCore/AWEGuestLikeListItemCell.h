@class UIImageView, UILabel, AWEGradientView;

@interface AWEGuestLikeListItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) UIImageView *albumIconView;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
