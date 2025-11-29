@class UIColor;

@interface WCUILabelStrikeThrough : UILabel

@property (nonatomic) int xOffset;
@property (nonatomic) int yOffset;
@property (nonatomic) int widthOffset;
@property (nonatomic) int stroke;
@property (retain, nonatomic) UIColor *strokeColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 xOffset:(int)a1 yOffset:(int)a2 widthOffset:(int)a3 stroke:(int)a4 strokeColor:(id)a5;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
