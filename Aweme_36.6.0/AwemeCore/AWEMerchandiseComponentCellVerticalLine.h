@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, UIView;

@interface AWEMerchandiseComponentCellVerticalLine : AWEMerchandiseComponentBaseCell

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *component;

+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
