@class NSString;

@interface BDXBridgeJoinGroupMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *openID;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
