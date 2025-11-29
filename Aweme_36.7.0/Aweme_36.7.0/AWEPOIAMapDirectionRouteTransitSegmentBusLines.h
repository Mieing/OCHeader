@class NSArray, NSString;

@interface AWEPOIAMapDirectionRouteTransitSegmentBusLines : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *buslines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)buslinesJSONTransformer;

- (void).cxx_destruct;

@end
