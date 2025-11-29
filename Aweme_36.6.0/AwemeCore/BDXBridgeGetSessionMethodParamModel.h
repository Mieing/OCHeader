@class NSString;

@interface BDXBridgeGetSessionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *rootId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *key;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
