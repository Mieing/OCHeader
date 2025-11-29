@class UIImage, NSString;

@interface MAObjModelOverlay : MAShape <MAOverlay> {
    struct MAMapRect { struct MAMapPoint { double x; double y; } origin; struct MAMapSize { double width; double height; } size; } _internalBoundingMapRect;
}

@property (retain, nonatomic) UIImage *textureImage;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) double rotationDegree;
@property (nonatomic) double sideLength;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objModelOverlayWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 objModelData:(id)a1 textureImage:(id)a2;

- (void)constructBoundingMapRect;
- (void)createCppOverlay;
- (id)initObjModelOverlayWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 objModelData:(id)a1 textureImage:(id)a2;
- (void)parseObjModelData:(id)a0;
- (void).cxx_destruct;
- (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })boundingMapRect;
- (void)initProperties;

@end
