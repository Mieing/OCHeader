@class NSString;

@interface BDPMapParamDidTapPOIMap : BDPBasePluginModel

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (copy, nonatomic) NSString *poiName;

- (void).cxx_destruct;

@end
