@class MKMapView;

@interface BDXMapKitPolylineRenderer : MKOverlayPathRenderer

@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) double prevZoomScale;

- (struct CGPath { } *)constructPath;
- (void).cxx_destruct;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;

@end
