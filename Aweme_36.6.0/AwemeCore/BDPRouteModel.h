@class NSArray;

@interface BDPRouteModel : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } origin;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } destination;
@property (retain, nonatomic) NSArray *paths;

+ (id)modelContainerPropertyGenericClass;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
