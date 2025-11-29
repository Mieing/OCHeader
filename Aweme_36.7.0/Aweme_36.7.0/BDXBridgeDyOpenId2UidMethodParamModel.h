@class NSString, NSArray;

@interface BDXBridgeDyOpenId2UidMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *clientKey;
@property (retain, nonatomic) NSArray *openIds;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
