@interface MapViewSnapshotConfig : NSObject {
    struct CGSize { double width; double height; } _viewSize;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _center;
    double _zoomLevel;
    double _rotationDegree;
    double _cameraDegree;
}

- (void)restore:(id)a0;
- (void)store:(id)a0;

@end
