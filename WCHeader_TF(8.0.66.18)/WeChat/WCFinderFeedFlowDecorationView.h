@class CAGradientLayer, WCFinderFeedFlowDecorationViewLayoutAttributes;

@interface WCFinderFeedFlowDecorationView : UICollectionReusableView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) WCFinderFeedFlowDecorationViewLayoutAttributes *attr;

- (void)applyLayoutAttributes:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateGradientUI;
- (void).cxx_destruct;

@end
