@class BDPMapPolylineModel;

@interface BDPMapkitMapArrowPolylineRenderer : MKPolylineRenderer

@property (copy, nonatomic) BDPMapPolylineModel *polylineModel;

- (void)drawArrowFrom:(struct { double x0; double x1; })a0 to:(struct { double x0; double x1; })a1 inContext:(struct CGContext { } *)a2 zoomScale:(double)a3 visibleMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a4;
- (void)drawSingleArrowAt:(struct CGPoint { double x0; double x1; })a0 angle:(double)a1 inContext:(struct CGContext { } *)a2 arrowSize:(double)a3 zoomScale:(double)a4;
- (void).cxx_destruct;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;

@end
