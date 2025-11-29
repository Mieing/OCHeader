@class UILabel, MMWebImageView;

@interface MMECSimpleShopView : MMUIView

@property (retain, nonatomic) MMWebImageView *platformIconView;
@property (retain, nonatomic) MMWebImageView *brandIconView;
@property (retain, nonatomic) UILabel *label;

+ (double)preferHeight;

- (double)platformIconToLabel;
- (double)brandIconToLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubViews;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithInfo:(id)a0;
- (void).cxx_destruct;

@end
