@class NSString;

@interface BDXBridgeAddSearchIdleTaskMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *uniqueKey;
@property (nonatomic) long long priority;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
