@class AWEBlurGradientView, UIImageView, AWEConcernGoodsCardBlurCommentView, NSString, AWEConcernGoodsLifeFeedSpu;

@interface AWEImmersiveImageView : UIView

@property (retain, nonatomic) AWEConcernGoodsCardBlurCommentView *commentView;
@property (retain, nonatomic) AWEBlurGradientView *goodsImageSkeletonView;
@property (retain, nonatomic) UIImageView *goodsImageLoadFailedImageView;
@property (retain, nonatomic) UIImageView *topCoveredImageView;
@property (retain, nonatomic) AWEBlurGradientView *topCoveredPlaceholderView;
@property (retain, nonatomic) UIImageView *midCoveredImageView;
@property (retain, nonatomic) AWEBlurGradientView *midCoveredPlaceholderView;
@property (copy, nonatomic) NSString *goodsCardDetailSchema;
@property (retain, nonatomic) AWEConcernGoodsLifeFeedSpu *goodsModel;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ merchantDetailBlock;

- (void)__setupUI;
- (void)__buildUI;
- (void)startCardAnimation;
- (void)configWithCardModel:(id)a0 goodsImageLoadCompletion:(id /* block */)a1 topCoverImageLoadCompletion:(id /* block */)a2 midCoverImageLoadCompletion:(id /* block */)a3;
- (void)setUpSkeletonView;
- (void)setUpImmersiveEffectWithCardModel:(id)a0 topCoverImageLoadCompletion:(id /* block */)a1 midCoverImageLoadCompletion:(id /* block */)a2;
- (id)createGradientImageView;
- (void)setUpTopMaskViewWithCardModel:(id)a0 topCoverImageLoadCompletion:(id /* block */)a1;
- (void)setUpMidMaskViewWithCardModel:(id)a0 midCoverImageLoadCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
