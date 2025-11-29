@class NSString, NSNumber;

@interface BDXBridgeRegisterPoiFooterCardMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSNumber *cardPriority;
@property (copy, nonatomic) NSString *cardKey;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
