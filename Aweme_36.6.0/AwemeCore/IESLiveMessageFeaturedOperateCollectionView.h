@class CAGradientLayer;

@interface IESLiveMessageFeaturedOperateCollectionView : UICollectionView

@property (retain, nonatomic) CAGradientLayer *gradientMaskLayerLeft;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayerRight;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayerBoth;

- (BOOL)ieslive_isTouchInEmptyPlace:(id)a0;
- (void)resetGradientMaskLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
