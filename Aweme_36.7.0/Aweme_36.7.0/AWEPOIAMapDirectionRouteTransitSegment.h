@class AWEPOIAMapDirectionRoutePath, AWEPOIAMapDirectionRouteTransitSegmentBusLines, NSString;

@interface AWEPOIAMapDirectionRouteTransitSegment : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIAMapDirectionRoutePath *walking;
@property (retain, nonatomic) AWEPOIAMapDirectionRouteTransitSegmentBusLines *bus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
