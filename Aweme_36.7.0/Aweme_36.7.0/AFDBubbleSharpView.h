@class UIColor;

@interface AFDBubbleSharpView : UIView

@property (nonatomic) double sharpHeight;
@property (nonatomic) double sharpWidth;
@property (nonatomic) unsigned long long position;
@property (retain, nonatomic) UIColor *bubbleColor;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint1;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint2;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint3;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint4;

- (void)awe_themeDidChange:(long long)a0;
- (id)bubbleSharpBezierPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
