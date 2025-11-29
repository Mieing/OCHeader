@class NSDictionary, UIImage, NSString;

@interface MAGltfOverlay : MABaseOverlay {
    struct MAMapRect { struct MAMapPoint { double x; double y; } origin; struct MAMapSize { double width; double height; } size; } _internalBoundingMapRect;
    NSString *_subtitle;
}

@property (retain, nonatomic) NSDictionary *uriResources;
@property (nonatomic) double rotationDegreeX;
@property (nonatomic) double rotationDegreeY;
@property (nonatomic) double rotationDegreeZ;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) double scale;
@property (nonatomic) BOOL draggEnable;
@property (nonatomic) BOOL touchEnable;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long currentAnimationIndex;
@property (nonatomic) double minZoom;
@property (nonatomic) double maxZoom;
@property (nonatomic, getter=isGlbFormat) BOOL glbFormat;

+ (id)glTFModelOverlayWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 glTFModelData:(id)a1 uriResources:(id)a2;

- (void)tapClick;
- (id)initGlTFModelOverlayWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 glTFModelData:(id)a1 uriResources:(id)a2;
- (void)parseGlTFModelData:(id)a0;
- (void)constructBoundingMapRect;
- (id)stretchImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)setRotationDegreeX:(double)a0 Y:(double)a1 Z:(double)a2;
- (id)generateInfoWindowFrom:(id)a0;
- (void)createCppOverlay;
- (id)subtitle;
- (void).cxx_destruct;
- (void)setAltitude:(double)a0;
- (void)setTitle:(id)a0;
- (void)setSubtitle:(id)a0;
- (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })boundingMapRect;
- (void)initProperties;

@end
