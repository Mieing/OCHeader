@class BDXBridgePdaAwemeRequestAwemeCacheConfig, NSString, NSDictionary, NSNumber;

@interface AWEXBridgePdaAwemeRequestMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL addCommonParams;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) id body;
@property (retain, nonatomic) NSNumber *useUIThread;
@property (retain, nonatomic) NSNumber *usePrefetch;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *header;
@property (retain, nonatomic) BDXBridgePdaAwemeRequestAwemeCacheConfig *awemeCacheConfig;
@property (copy, nonatomic) NSDictionary *responseCropConfig;
@property (nonatomic) long long bodyType;

+ (id)requiredKeyPaths;
+ (id)bodyTypeJSONTransformer;
+ (id)awemeCacheConfigJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
