@interface IESECGoodsPaddingLabel : UILabel

@property (nonatomic) BOOL isDraw;
@property (nonatomic) struct CGSize { double width; double height; } padding;

- (id)initWithDraw:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
