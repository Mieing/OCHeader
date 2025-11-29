@class NSArray, QVectorHeatOverlayOption;

@interface QVectorHeatOverlay : QGLOverlay {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingRect;
}

@property (retain, nonatomic) QVectorHeatOverlayOption *option;
@property (nonatomic) BOOL toBuildData;
@property (nonatomic) double minIntensity;
@property (nonatomic) double maxIntensity;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } internalGeoReferencePoint;
@property (nonatomic) BOOL hasSetGeoPoint;
@property (copy, nonatomic) NSArray *nodes;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } geoReferencePoint;
@property (readonly, nonatomic) NSArray *colors;
@property (readonly, nonatomic) NSArray *startPoints;
@property (nonatomic) int type;
@property (readonly, nonatomic) double minHeight;
@property (readonly, nonatomic) double maxHeight;
@property (nonatomic) double size;
@property (nonatomic) double gap;
@property (nonatomic) BOOL enable3D;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;

- (id)initWithHeatNodes:(id)a0 option:(id)a1;
- (void)setDisplayLevel:(long long)a0;
- (void)setColors:(id)a0 startPoints:(id)a1;
- (void)setMinHeight:(double)a0 maxHeight:(double)a1;
- (void)setMinIntensity:(double)a0 maxIntensity:(double)a1;
- (void)setNeedsDisplay;
- (id)getAggregationUnit:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void *)createImpl;
- (void)destoryImpl;
- (id)getType;
- (void)calculateBoundingRect;
- (struct vector<tcmapkit::IAggregatable *, std::allocator<tcmapkit::IAggregatable *>> { struct IAggregatable **x0; struct IAggregatable **x1; struct __compressed_pair<tcmapkit::IAggregatable **, std::allocator<tcmapkit::IAggregatable *>> { struct IAggregatable **x0; } x2; })processNodeDataCopy;
- (void)buildHeatLayerData:(void *)a0 option:(id)a1;
- (struct { double x0; double x1; })getReferencePoint;
- (void)setColorRange:(void *)a0 option:(id)a1;
- (void)setHeightRange:(void *)a0 option:(id)a1;
- (void)setIntensityRange:(void *)a0 option:(id)a1;
- (void)setVisibleRange:(void *)a0 option:(id)a1;
- (void)validateInitHeightRange:(id)a0;
- (BOOL)checkIsDynamicIntensityRange:(double)a0 maxIntensity:(double)a1;
- (void)recordGLoverlayCount:(id)a0;
- (void).cxx_destruct;

@end
