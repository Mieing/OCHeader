@class NSString, IESLLLiveURLModel, NSDictionary, IESLLLiveComponentIconAnimationStrategy;

@interface IESLLLiveComponentIconAnimationInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *animationKey;
@property (retain, nonatomic) IESLLLiveURLModel *dynamicIconUrl;
@property (retain, nonatomic) IESLLLiveComponentIconAnimationStrategy *animationStrategy;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dynamicIconUrlJSONTransformer;
+ (id)animationStrategyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
