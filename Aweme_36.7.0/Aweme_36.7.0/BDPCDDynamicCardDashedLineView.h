@class UIColor, NSArray;

@interface BDPCDDynamicCardDashedLineView : UIView

@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) BOOL horizontal;
@property (copy, nonatomic) NSArray *dashLengths;
@property (nonatomic) double phase;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
