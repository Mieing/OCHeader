@interface BDPMapRegion : BDPBasePluginModel

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } southwest;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } northeast;

@end
