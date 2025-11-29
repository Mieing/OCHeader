@class CAShapeLayer;

@interface AWEDetailCellTagLabel : UILabel

@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) unsigned long long style;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textEdgeInsets;

- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)show:(unsigned long long)a0;
- (void)changeStyle:(unsigned long long)a0;

@end
