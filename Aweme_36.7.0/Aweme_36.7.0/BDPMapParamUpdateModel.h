@class BDPMapMarkersChangeModel, BDPMapViewModel;

@interface BDPMapParamUpdateModel : BDPBasePluginModel

@property (retain, nonatomic) BDPMapViewModel *mapViewModel;
@property (nonatomic) BOOL needUpdateFrame;
@property (nonatomic) BOOL needUpdateLocation;
@property (nonatomic) BOOL locationAnimated;
@property (nonatomic) BOOL needUpdateScale;
@property (nonatomic) BOOL scaleAnimated;
@property (nonatomic) BOOL needUpdateSkew;
@property (nonatomic) BOOL needUpdateRotate;
@property (nonatomic) BOOL needConsiderRecoginer;
@property (nonatomic) BOOL needUpdateMarker;
@property (nonatomic) BOOL needUpdateMarkerUsingModel;
@property (nonatomic) BOOL needUpdateCircle;
@property (nonatomic) BOOL needUpdatePolyline;
@property (nonatomic) BOOL needUpdateIncludePoints;
@property (nonatomic) BOOL needUpdatePolygons;
@property (copy, nonatomic) BDPMapMarkersChangeModel *markerChangedModel;

- (id)initWithOldMapViewModel:(id)a0 newDictionary:(id)a1;
- (void)checkIFNeedUseUpdateMarkerModel:(id)a0;
- (void).cxx_destruct;

@end
