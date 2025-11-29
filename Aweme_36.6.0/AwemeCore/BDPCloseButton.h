@class UIColor;

@interface BDPCloseButton : UIButton

@property (nonatomic) long long type;
@property (nonatomic) BOOL needCircle;
@property (nonatomic) struct CGPoint { double x; double y; } translate;
@property (retain, nonatomic) UIColor *xColor;
@property (retain, nonatomic) UIColor *circleColor;

- (void)drawRectType24Black:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRectType28Black:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRectType28White:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRectTypeCustom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRectType24White:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
