@class UIColor;

@interface BDPBackButton : UIButton

@property (nonatomic) long long type;
@property (nonatomic) struct CGSize { double width; double height; } scale;
@property (nonatomic) struct CGPoint { double x; double y; } translate;
@property (retain, nonatomic) UIColor *strokeColor;

- (void)drawRect24:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect28Black:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRectCustom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRectBase:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
