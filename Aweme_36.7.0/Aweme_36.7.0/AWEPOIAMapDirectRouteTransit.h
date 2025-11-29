@class NSString, NSArray;

@interface AWEPOIAMapDirectRouteTransit : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) NSArray *segments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)segmentsJSONTransformer;

- (void).cxx_destruct;

@end
