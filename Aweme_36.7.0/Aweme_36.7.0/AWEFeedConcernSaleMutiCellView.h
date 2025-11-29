@class AWEFeedConcernGoodsTagsView, AWEConcernGoodsCardPriceTagView, UIImageView, UILabel, UIView, AWEGradientView;

@interface AWEFeedConcernSaleMutiCellView : UIView

@property (copy, nonatomic) id /* block */ tapBlock;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UILabel *hotSaleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEFeedConcernGoodsTagsView *sallTagsView;
@property (retain, nonatomic) UILabel *activityTextLabel;
@property (retain, nonatomic) UILabel *activePriceMarkLabel;
@property (retain, nonatomic) UILabel *activePriceLabel;
@property (retain, nonatomic) UILabel *activePriceSuffixLabel;
@property (retain, nonatomic) AWEConcernGoodsCardPriceTagView *originPriceTagView;
@property (retain, nonatomic) UILabel *originPriceMarkLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) UIView *tagContentView;
@property (retain, nonatomic) UIImageView *discountImageView;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) AWEGradientView *goShopGradientView;
@property (retain, nonatomic) UILabel *goShopLabel;

+ (id)createInfoHeaderViewWithModel:(id)a0 tapBlock:(id /* block */)a1;

- (void)__setupUI;
- (void)__buildUI;
- (void)__addAction;
- (void)__configWithFeedSpuModel:(id)a0;
- (void)hideOriginPriceIfNeeds;
- (void)hidePriceTagViewIfNeeds;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
