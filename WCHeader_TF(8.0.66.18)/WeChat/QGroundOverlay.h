@class UIImage;

@interface QGroundOverlay : QGLOverlay {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingRect;
}

@property (retain, nonatomic) UIImage *icon;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;

+ (id)groundOverlayWithBounds:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct CLLocationCoordinate2D { double x0; double x1; } x1; })a0 icon:(id)a1;
+ (id)groundOverlayWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1 anchor:(struct CGPoint { double x0; double x1; })a2 icon:(id)a3;
+ (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct CLLocationCoordinate2D { double x0; double x1; } x1; })calcaulateBounds:(struct CGPoint { double x0; double x1; })a0 icon:(id)a1 position:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a2 zoomLevel:(double *)a3;

- (id)initWithBounds:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct CLLocationCoordinate2D { double x0; double x1; } x1; })a0 icon:(id)a1;
- (void)makeDirty;
- (void)setOpacity:(double)a0;
- (void)setGroundOverlayWithBounds:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct CLLocationCoordinate2D { double x0; double x1; } x1; })a0 icon:(id)a1;
- (void)setGroundOverlayWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1 anchor:(struct CGPoint { double x0; double x1; })a2 icon:(id)a3;
- (void)doUpdateBitmapForImpl:(void *)a0;
- (void *)createImpl;
- (void)destoryImpl;
- (BOOL)validateDisplayLevelParam:(long long)a0;
- (void)recordGLoverlayCount:(id)a0;
- (void).cxx_destruct;

@end
