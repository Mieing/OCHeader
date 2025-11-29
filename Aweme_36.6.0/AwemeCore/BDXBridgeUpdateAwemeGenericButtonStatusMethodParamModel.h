@class NSString, NSNumber;

@interface BDXBridgeUpdateAwemeGenericButtonStatusMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSNumber *status;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
