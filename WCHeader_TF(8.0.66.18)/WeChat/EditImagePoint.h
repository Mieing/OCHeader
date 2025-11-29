@class UIColor;

@interface EditImagePoint : NSObject {
    struct CGPoint { double x; double y; } _point;
    UIColor *_color;
    double _angle;
}

- (id)initWithCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCGPoint:(struct CGPoint { double x0; double x1; })a0 withColor:(id)a1 withRotation:(double)a2;
- (struct CGPoint { double x0; double x1; })getCGPoint;
- (id)getColor;
- (double)getAngle;
- (void).cxx_destruct;

@end
