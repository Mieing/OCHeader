@class MMFinderLiveGoodsSerialNumberView, UILabel, MMWebImageView;

@interface MMFinderLiveAnchorBulkBuyCellLeftCardView : UIView

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) MMFinderLiveGoodsSerialNumberView *serialNumberView;
@property (retain, nonatomic) UILabel *progressLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithBulkBuy:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
