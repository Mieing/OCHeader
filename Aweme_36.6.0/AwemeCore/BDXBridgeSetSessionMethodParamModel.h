@class NSString, NSDictionary;

@interface BDXBridgeSetSessionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *rootId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *parentSessionId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSDictionary *value;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
