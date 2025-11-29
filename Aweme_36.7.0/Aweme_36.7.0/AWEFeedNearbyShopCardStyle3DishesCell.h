@class UIImageView, AWEGradientView, UIView, UILabel;

@interface AWEFeedNearbyShopCardStyle3DishesCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *layerLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) BOOL isStructModel;

- (void)updateWithCardModel:(id)a0 isStructModel:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)layoutUI;

@end
