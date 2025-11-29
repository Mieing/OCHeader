@class AWELifeCardHotView, UIImageView, UILabel, AWEConcernGoodsCardInsetsLabel, UIButton, UIView, UIColor, NSString, AWEBlurGradientView, AWEConcernGoodsCardPriceTagView, AWEGradientView, AWEFeedConcernGoodsLocationInfoView, AWEConcernGoodsLifeFeedSpu;

@interface AWEFeedConcernPOISingleImmersiveContentView : UIView

@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (retain, nonatomic) AWEBlurGradientView *maskBackgroundView;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UIView *goodsCardImageContainer;
@property (retain, nonatomic) UIImageView *goodsCardImageView;
@property (retain, nonatomic) AWEGradientView *hotSaleView;
@property (retain, nonatomic) UILabel *hotSaleLabel;
@property (retain, nonatomic) UIView *goodsInfoView;
@property (retain, nonatomic) AWEFeedConcernGoodsLocationInfoView *locationView;
@property (retain, nonatomic) UILabel *activityLabel;
@property (retain, nonatomic) UILabel *activePriceMarkLabel;
@property (retain, nonatomic) UILabel *activePriceLabel;
@property (retain, nonatomic) UILabel *activePriceSuffixLabel;
@property (retain, nonatomic) AWEConcernGoodsCardPriceTagView *originPriceTagView;
@property (retain, nonatomic) UILabel *originPriceMarkLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) AWEConcernGoodsCardInsetsLabel *tagLabel;
@property (retain, nonatomic) UIButton *gotoButton;
@property (copy, nonatomic) NSString *goodsCardDetailSchema;
@property (retain, nonatomic) AWEConcernGoodsLifeFeedSpu *goodsModel;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) AWELifeCardHotView *cardInfoHotView;
@property (copy, nonatomic) id /* block */ loadImageBlock;
@property (copy, nonatomic) id /* block */ merchantDetailBlock;
@property (copy, nonatomic) id /* block */ hotEventCallback;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)__buildUI;
- (void)gotoPOIGoodsDetail:(id /* block */)a0;
- (void)gotoPOIGrouponPage:(id /* block */)a0;
- (void)addHotEventBlock:(id /* block */)a0;
- (void)startCardAnimation;
- (void)reportHotPoint:(struct CGPoint { double x0; double x1; })a0 componetName:(id)a1;
- (id)hotPageName;
- (void)__addAction;
- (id)createHotSaleMaskLayer;
- (void)gotoPOIGoodsDetailAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
