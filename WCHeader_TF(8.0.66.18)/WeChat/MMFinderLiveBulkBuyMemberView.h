@class UILabel, MMWebImageView;

@interface MMFinderLiveBulkBuyMemberView : UIView

@property (nonatomic) BOOL withLiveDynamicFont;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *listedPriceLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withLiveDynamicFont:(BOOL)a1;
- (void)updateWithBulkBuyMember:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
