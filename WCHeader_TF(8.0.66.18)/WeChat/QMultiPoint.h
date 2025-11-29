@class NSString;

@interface QMultiPoint : QShape <QOverlay> {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingRect;
}

@property (readonly, nonatomic) struct { double x0; double x1; } *points;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void)getCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (void)calculateBoundingMapRect;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(int)a1;

@end
