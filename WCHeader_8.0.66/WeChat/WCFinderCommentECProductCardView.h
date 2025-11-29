@class MMFinderLiveMultiPriceView, MMECProductShowBoxItemsView, UILabel, MMWebImageView, MMECSimpleShopView;

@interface WCFinderCommentECProductCardView : MMUIView

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMECProductShowBoxItemsView *showBoxItemsView;
@property (retain, nonatomic) MMFinderLiveMultiPriceView *priceView;
@property (retain, nonatomic) MMECSimpleShopView *shopView;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
+ (struct CGSize { double x0; double x1; })imageSize;
+ (double)imageToShopView;
+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initContainer;
- (void)initSubviews;
- (void)updateWithInfo:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
