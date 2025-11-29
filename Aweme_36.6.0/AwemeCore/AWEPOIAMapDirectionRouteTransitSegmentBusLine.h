@class NSString, AWEPOIAMapDirectionRouteTransitSegmentBusLineStop;

@interface AWEPOIAMapDirectionRouteTransitSegmentBusLine : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIAMapDirectionRouteTransitSegmentBusLineStop *departureStop;
@property (retain, nonatomic) AWEPOIAMapDirectionRouteTransitSegmentBusLineStop *arrivalStop;
@property (copy, nonatomic) NSString *polyline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
