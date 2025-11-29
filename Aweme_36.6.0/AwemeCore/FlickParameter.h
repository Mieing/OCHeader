@interface FlickParameter : NSObject {
    float _duration;
    float _delta;
}

- (id)initFlick:(float)a0 decelerationRate:(float)a1 threshold:(float)a2 oppositeBoundary:(float)a3 positiveBoundary:(float)a4;
- (void)setContentOffset:(id)a0 destination:(struct CGPoint { double x0; double x1; })a1;
- (float)delta;

@end
