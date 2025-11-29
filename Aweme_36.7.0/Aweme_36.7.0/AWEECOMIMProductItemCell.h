@class UIImageView, BDPCDDynamicCardPriceView;

@interface AWEECOMIMProductItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImgView;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *priceView;
@property (retain, nonatomic) UIImageView *gradientView;

- (id)createImageWithMaskLayerColors:(id)a0 itemHeight:(double)a1;
- (void)bindItemData:(id)a0 bigMask:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
