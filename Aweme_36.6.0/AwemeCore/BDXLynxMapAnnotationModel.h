@class BDXLynxMapAnimateModel, NSString, BDXLynxMapContentStyleModel, NSURL, BDXLynxMapTextGroupModel, BDXLynxMapImageGroupModel;
@protocol BDXLynxMapCustomAnnotationAdapter;

@interface BDXLynxMapAnnotationModel : BDXLynxMapBridgeModel <MAAnnotation, MKAnnotation>

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) BDXLynxMapContentStyleModel *contentStyle;
@property (copy, nonatomic) NSString *imageURLString;
@property (copy, nonatomic) NSURL *imageURL;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double alpha;
@property (retain, nonatomic) BDXLynxMapTextGroupModel *textGroup;
@property (retain, nonatomic) BDXLynxMapImageGroupModel *imageGroup;
@property (retain, nonatomic) BDXLynxMapAnimateModel *animate;
@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (nonatomic) long long zIndex;
@property (nonatomic) float degrees;
@property (nonatomic) BOOL isUserLocation;
@property (nonatomic) BOOL isCustomAnnotation;
@property (weak, nonatomic) id<BDXLynxMapCustomAnnotationAdapter> customAnnotationAdapter;

+ (id)imageURLJSONTransformer;
+ (id)imageSizeJSONTransformer;
+ (id)centerOffsetJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
