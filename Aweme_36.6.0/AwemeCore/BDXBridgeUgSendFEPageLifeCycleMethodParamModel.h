@class NSString, NSDictionary;

@interface BDXBridgeUgSendFEPageLifeCycleMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long status;

+ (id)requiredKeyPaths;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
