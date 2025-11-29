@class UIView, NSString, AWEConcernGoodsLifeFeedSpu, NSArray, UIImageView, UIButton, AWEFeedConcernGoodsTagsView, AWEBlurGradientView, AWEConcernGoodsCardInsetsLabel, UILabel;

@interface AWEFeedConcernPOISinglePromotionGoodsContentView : UIView {
    NSArray *_saleMutiCellViews;
    UIView *_viewOtherView;
    id /* block */ _loadImageBlock;
}

@property (retain, nonatomic) UIImageView *goodsCardImageView;
@property (retain, nonatomic) UIImageView *maskBackgroundView;
@property (retain, nonatomic) AWEBlurGradientView *groundGlassView;
@property (retain, nonatomic) AWEConcernGoodsCardInsetsLabel *hotSaleLabel;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (retain, nonatomic) AWEFeedConcernGoodsTagsView *sallTagsView;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UIImageView *saleLineImageView;
@property (retain, nonatomic) UILabel *activityPriceLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) UIButton *gotoButton;
@property (copy, nonatomic) id /* block */ merchantDetailBlock;
@property (copy, nonatomic) NSString *goodsCardDetailSchema;
@property (retain, nonatomic) AWEConcernGoodsLifeFeedSpu *goodsModel;
@property (copy, nonatomic) id /* block */ hotEventCallback;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)__buildUI;
- (void)gotoPOIGoodsDetail:(id /* block */)a0;
- (void)gotoPOIGrouponPage:(id /* block */)a0;
- (void)addHotEventBlock:(id /* block */)a0;
- (id)saleMutiCellViews;
- (id)viewOtherView;
- (void)setLoadImageBlock:(id /* block */)a0;
- (id)hotPageName;
- (void)__addAction;
- (id /* block */)loadImageBlock;
- (void)gotoPOIGoodsDetailAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
