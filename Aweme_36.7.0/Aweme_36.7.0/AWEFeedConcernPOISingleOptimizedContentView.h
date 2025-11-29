@class UIImageView, AWEConcernGoodsCardBlurCommentView, UILabel, AWEConcernGoodsCardInsetsLabel, UIButton, UIView, NSString, AWEBlurGradientView, AWEConcernGoodsCardPriceTagView, AWEAwemeConcernGoodsCardModel, NSArray, AWEFeedConcernGoodsLocationInfoView, AWELifeCardHotView;

@interface AWEFeedConcernPOISingleOptimizedContentView : UIView

@property (retain, nonatomic) UIView *goodsCardImageHolderView;
@property (retain, nonatomic) UIImageView *goodsCardImageView;
@property (retain, nonatomic) UIImageView *goodsImageLoadFailedImageView;
@property (retain, nonatomic) AWEConcernGoodsCardBlurCommentView *commentView;
@property (retain, nonatomic) AWEBlurGradientView *groundGlassView;
@property (retain, nonatomic) AWEBlurGradientView *horizonGradientView;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (retain, nonatomic) AWEFeedConcernGoodsLocationInfoView *locationView;
@property (retain, nonatomic) UILabel *activityLabel;
@property (retain, nonatomic) UILabel *activePriceMarkLabel;
@property (retain, nonatomic) UILabel *activePriceLabel;
@property (retain, nonatomic) UILabel *activePriceSuffixLabel;
@property (retain, nonatomic) AWEConcernGoodsCardPriceTagView *originPriceTagView;
@property (retain, nonatomic) UILabel *originPriceMarkLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) AWEConcernGoodsCardInsetsLabel *tagLabel;
@property (retain, nonatomic) UILabel *hotSaleLabel;
@property (retain, nonatomic) UIButton *gotoButton;
@property (copy, nonatomic) id /* block */ loadImageBlock;
@property (copy, nonatomic) NSArray *saleMutiCellViews;
@property (retain, nonatomic) UIView *viewOtherView;
@property (retain, nonatomic) AWELifeCardHotView *cardHotView;
@property (copy, nonatomic) id /* block */ merchantDetailBlock;
@property (copy, nonatomic) NSString *goodsCardDetailSchema;
@property (retain, nonatomic) AWEAwemeConcernGoodsCardModel *goodsModel;
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
- (void)gotoPOIGoodsDetailAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
