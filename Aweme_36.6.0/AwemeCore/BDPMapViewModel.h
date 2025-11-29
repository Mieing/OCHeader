@class NSArray, BDPMapIncludePointsModel, NSString, BDPMapPointModel;

@interface BDPMapViewModel : BDPBasePluginModel

@property (copy, nonatomic) BDPMapPointModel *point;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double scale;
@property (nonatomic) double minScale;
@property (nonatomic) double maxScale;
@property (nonatomic) double rotate;
@property (nonatomic) double skew;
@property (copy, nonatomic) NSArray *markers;
@property (copy, nonatomic) NSArray *circles;
@property (copy, nonatomic) NSArray *polyline;
@property (copy, nonatomic) NSArray *polygons;
@property (copy, nonatomic) BDPMapIncludePointsModel *includePoints;
@property (nonatomic) BOOL showLocation;
@property (nonatomic) BOOL showCompass;
@property (nonatomic) BOOL showScale;
@property (nonatomic) BOOL enableOverlooking;
@property (nonatomic) BOOL enableRotate;
@property (nonatomic) BOOL enable3D;
@property (nonatomic) BOOL enableZoom;
@property (nonatomic) BOOL enableSatellite;
@property (nonatomic) BOOL enableTraffic;
@property (nonatomic) BOOL enablePoi;
@property (nonatomic) BOOL enableBuilding;
@property (nonatomic) BOOL enableScroll;
@property (copy, nonatomic) NSString *data;

+ (id)modelContainerPropertyGenericClass;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end
