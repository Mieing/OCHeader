@class NSString, NSArray;

@interface AWESECBridgeDataMappingModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *namescope;
@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSArray *relatedAPIs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relatedAPIsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
