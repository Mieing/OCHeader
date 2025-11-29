@class NSString, NSDictionary;

@interface BDXBridgeLoadHotSpotDataMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionid;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *hotspotWord;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) long long type;

+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
