@class NSString, NSNumber;

@interface IESECXBridgeEcClearEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSNumber *isSticky;
@property (retain, nonatomic) NSNumber *timestampLower;
@property (retain, nonatomic) NSNumber *timestampUpper;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
