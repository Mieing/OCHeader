@class NSString, NSNumber, NSDictionary;

@interface BDASifXBridgeSendLogMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *labelName;
@property (retain, nonatomic) NSNumber *extValue;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSDictionary *extJson;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
