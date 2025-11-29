@class NSNumber, NSDictionary;

@interface BDXBridgeCommentOpenEvaluationCardMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *openType;
@property (copy, nonatomic) NSDictionary *configInfo;
@property (copy, nonatomic) NSDictionary *data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
