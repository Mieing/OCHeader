@class UIView, NSString, IESECWinGoodsTitleLabel, IESECWinVideoDurationView, UIImageView, IESECWinVideoRecommendView, CAGradientLayer, IESECWinGoodsSmallPhotoView;
@protocol IESECWinVideoCellProtocol;

@interface IESECWinVideoCell : UICollectionViewCell <IGListBindable>

@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) IESECWinVideoDurationView *durationView;
@property (retain, nonatomic) IESECWinVideoRecommendView *recommendView;
@property (retain, nonatomic) IESECWinGoodsSmallPhotoView *goodsPhotoView;
@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) IESECWinGoodsTitleLabel *productDescription;
@property (weak, nonatomic) id<IESECWinVideoCellProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObject:(id)a0;
- (void)goodsPhotoViewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpConstraints;

@end
