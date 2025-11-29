@class NSString;

@interface BDXBridgeSetSessionInfoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id info;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
