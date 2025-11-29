@class UIView;

@interface AWEMerchandiseComponentCellSelectBoard : AWEMerchandiseComponentBaseCell

@property (retain, nonatomic) UIView *indicatorView;

+ (BOOL)isSelectWithModel:(id)a0 filterManager:(id)a1;
+ (id)identifier;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
