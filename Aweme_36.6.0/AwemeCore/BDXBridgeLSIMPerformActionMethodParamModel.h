@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeLSIMPerformActionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSNumber *onlyCheckSupportedActions;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) long long action;

+ (id)requiredKeyPaths;
+ (id)actionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
