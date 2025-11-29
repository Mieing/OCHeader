@class UIColor;

@interface IESECSlicePopoverContentView : UIView

@property (nonatomic) unsigned long long position;
@property (nonatomic) double sharpOffset;
@property (retain, nonatomic) UIColor *popoverColor;

+ (id)duxPopoverSharpBezierPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(unsigned long long)a1 sharpOffset:(double)a2 sharpSmooth:(BOOL)a3;

- (void).cxx_destruct;
- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
