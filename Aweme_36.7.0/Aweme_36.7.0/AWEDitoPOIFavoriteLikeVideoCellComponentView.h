@class AWEGradientView, UIImageView, UIView, AWEDitoPOIFavoriteLikeVideoCellComponentViewModel, UILabel;

@interface AWEDitoPOIFavoriteLikeVideoCellComponentView : DitoComponentView

@property (weak, nonatomic) AWEDitoPOIFavoriteLikeVideoCellComponentViewModel *viewModel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UIView *rightItemsContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *subTextContainer;
@property (retain, nonatomic) UILabel *categoryLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *districtLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIView *spuContainer;
@property (retain, nonatomic) UIImageView *spuHeadImageView;
@property (retain, nonatomic) UILabel *spuNameLabel;
@property (retain, nonatomic) UILabel *spuPriceLabel;
@property (retain, nonatomic) UIView *descContainer;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEGradientView *descGradientView;
@property (retain, nonatomic) UILabel *leftQuotationLabel;
@property (retain, nonatomic) UILabel *rightQuotationLabel;
@property (retain, nonatomic) UILabel *likeTimeLabel;

+ (id)rankAndRecommendLabelFont;
+ (id)subTextFont;
+ (double)commonInset;
+ (double)imageWidth;

- (void)updateViewModel:(id)a0;
- (void)coverTapped:(id)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)themeDidChange;

@end
