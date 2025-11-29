@class NSDictionary, AWEEvaluationTaskModel, NSString;

@interface AWEEvaluationResultModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *responseMetadata;
@property (copy, nonatomic) AWEEvaluationTaskModel *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
