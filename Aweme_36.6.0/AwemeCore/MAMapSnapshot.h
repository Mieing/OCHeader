@class MapViewSnapshotConfig, NSMutableArray, MAMapView;

@interface MAMapSnapshot : NSObject {
    MAMapView *_mapview;
    MapViewSnapshotConfig *_mapViewSnapshotConfig;
}

@property (retain, nonatomic) NSMutableArray *resultArray;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (copy, nonatomic) id /* block */ captureResultBlock;
@property (readonly, nonatomic) struct CGSize { double width; double height; } minSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maxSize;

- (void)snapShot;
- (BOOL)capture:(struct CGSize { double x0; double x1; })a0 topLeft:(struct CLLocationCoordinate2D { double x0; double x1; })a1 topRight:(struct CLLocationCoordinate2D { double x0; double x1; })a2 complete:(id /* block */)a3;
- (id)makeThumbnailAnimation;
- (BOOL)captureBigPicture:(struct CGSize { double x0; double x1; })a0 topLeft:(struct CLLocationCoordinate2D { double x0; double x1; })a1 topRight:(struct CLLocationCoordinate2D { double x0; double x1; })a2 complete:(id /* block */)a3;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
