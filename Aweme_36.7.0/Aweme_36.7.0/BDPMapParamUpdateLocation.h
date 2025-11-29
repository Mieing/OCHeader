@interface BDPMapParamUpdateLocation : BDPBasePluginModel

@property (nonatomic) BOOL useUserLocation;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (nonatomic) BOOL animated;

@end
