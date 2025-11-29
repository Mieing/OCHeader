@class UIColor;

@interface BDPGameCenterIcon : BDPCodeDrawView

@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) unsigned long long type;

+ (id)iconViewWithBorderColor:(id)a0 strokeColor:(id)a1 fillColor:(id)a2;
+ (id)iconView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 borderColor:(id)a1 strokeColor:(id)a2 fillColor:(id)a3;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;

@end
