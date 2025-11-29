@class AWEEcomSearchWindowShopTag, AWEEcomSearchShopWindowCellModel, UIImageView, UILabel, UIView, AWEEcomSearchFlagShipShopTag;

@interface AWEEcomSearchShopWindowViewCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *rightJumpLabel;
@property (retain, nonatomic) UIView *descriptionView;
@property (retain, nonatomic) UIImageView *diamondShopTagImageView;
@property (retain, nonatomic) AWEEcomSearchFlagShipShopTag *flagShipTag;
@property (retain, nonatomic) AWEEcomSearchWindowShopTag *windowShopTag;
@property (retain, nonatomic) AWEEcomSearchShopWindowCellModel *cellModel;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)setExtraTrackParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;
- (void)willDisplay;
- (void)didSelectItem;

@end
