@class NSString, NSArray;

@interface AWEPOIAMapDirectionRoute : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *destination;
@property (copy, nonatomic) NSArray *paths;
@property (copy, nonatomic) NSArray *transits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)pathsJSONTransformer;
+ (id)transitsJSONTransformer;

- (void).cxx_destruct;

@end
