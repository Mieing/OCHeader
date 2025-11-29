@class UILabel, UIImageView, UIView;

@interface AWEFeedNearbyShopCardDishesCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageBackgroundView;

- (void)updateWithCardModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutUI;

@end
