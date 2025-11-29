@class NSDictionary;

@interface IESLiveLiveRunAiServiceParamModel : IESLiveBridgeModel

@property (nonatomic) long long action;
@property (copy, nonatomic) NSDictionary *params;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
