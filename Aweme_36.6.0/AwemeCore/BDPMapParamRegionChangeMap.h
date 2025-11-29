@class BDPMapRegion;

@interface BDPMapParamRegionChangeMap : BDPBasePluginModel

@property (nonatomic) double rotate;
@property (nonatomic) double skew;
@property (nonatomic) double scale;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centerLocation;
@property (copy, nonatomic) BDPMapRegion *region;

- (void).cxx_destruct;

@end
