@class NSString, NSNumber;

@interface BDXBridgeRelationshipAuthCallbackMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *authId;
@property (retain, nonatomic) NSNumber *errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *clientKey;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
