@class NSString, AWELiveLocalLifeComponentIconAnimationStrategy, NSDictionary, AWEURLModel;

@interface AWELiveLocalLifeComponentIconAnimationInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *animationKey;
@property (retain, nonatomic) AWEURLModel *dynamicIconUrl;
@property (retain, nonatomic) AWELiveLocalLifeComponentIconAnimationStrategy *animationStrategy;
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
