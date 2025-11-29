@interface DVEButton : UIButton

@property (nonatomic) double dve_space;
@property (nonatomic) long long dve_layoutType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insetResponseEdge;

- (void)layoutSubviewsByTypeLeft;
- (void)layoutSubviewsByTypeRight;
- (void)layoutSubviewsByTypeBottom;
- (void)layoutSubviewsByTypeTop;
- (void)dve_layoutWithType:(long long)a0 space:(double)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
