@class UIImageView;

@interface AWEPOIShoppingCartCommodityView : NSObject

@property (retain, nonatomic) UIImageView *commodityImageView;

- (void)startAnimationWithContainerView:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 finishPoint:(struct CGPoint { double x0; double x1; })a2 controlPoint:(struct CGPoint { double x0; double x1; })a3 imageUrl:(id)a4 imageViewSize:(struct CGSize { double x0; double x1; })a5 animationDuration:(double)a6;
- (void)cancelAnimationWithContainerView:(id)a0;
- (void)preloadImageWithImageUrl:(id)a0;
- (void).cxx_destruct;

@end
