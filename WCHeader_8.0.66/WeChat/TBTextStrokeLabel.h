@class UIColor;

@interface TBTextStrokeLabel : UILabel

@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;

+ (id)strokeLabelWithText:(id)a0 font:(id)a1;

- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
