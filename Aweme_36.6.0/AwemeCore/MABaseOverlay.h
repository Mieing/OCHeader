@class NSString, MAMapView;

@interface MABaseOverlay : NSObject <MAOverlay> {
    int _zIndex;
    int _wIndex;
    MAMapView *_fatherMap;
}

@property (nonatomic) struct IOverlay { void /* function */ **x0; } *cppOverlay;
@property (nonatomic) long long overlayLevel;
@property (nonatomic) int zIndex;
@property (nonatomic) int wIndex;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) struct MAMapRect { struct MAMapPoint { double x; double y; } origin; struct MAMapSize { double width; double height; } size; } boundingMapRect;
@property (nonatomic) double altitude;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createCppOverlay;
- (void)willAddToMap:(id)a0;
- (void)willRemoveFromMap:(id)a0;
- (void)destroyCppOverlay;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
