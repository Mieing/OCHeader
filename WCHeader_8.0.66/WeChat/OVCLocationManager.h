@class CLGeocoder;

@interface OVCLocationManager : NSObject

@property (nonatomic) BOOL isReversingGeocodeLocation;
@property (readonly, nonatomic) CLGeocoder *geocoder;

- (id)init;
- (void)startLocatingWithLocations:(id)a0 timeoutInSeconds:(double)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
