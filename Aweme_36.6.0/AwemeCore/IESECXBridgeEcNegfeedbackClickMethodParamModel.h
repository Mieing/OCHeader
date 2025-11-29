@class NSNumber, NSString;

@interface IESECXBridgeEcNegfeedbackClickMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSNumber *itemType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)feedbackString;
- (void).cxx_destruct;

@end
