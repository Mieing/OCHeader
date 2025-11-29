@class NSArray;

@interface BDPMapMarkersChangeModel : BDPBasePluginModel

@property (copy, nonatomic) NSArray *insertMarkers;
@property (copy, nonatomic) NSArray *unchangedMarkersKeys;

- (void).cxx_destruct;

@end
