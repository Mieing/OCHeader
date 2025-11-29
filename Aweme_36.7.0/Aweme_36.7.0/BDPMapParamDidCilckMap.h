@interface BDPMapParamDidCilckMap : BDPBasePluginModel

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (nonatomic) struct CGPoint { double x; double y; } point;

@end
