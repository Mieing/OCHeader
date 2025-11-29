@class NSString;

@interface BDXBridgeGetLiveSettingsKeys : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long type;

+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
