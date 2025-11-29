@class NSString, IESLLLiveAggLevelConfig, IESLLLiveComponentLevelConfig;

@interface IESLLLiveLevelConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLLiveComponentLevelConfig *componentLevelConfig;
@property (retain, nonatomic) IESLLLiveAggLevelConfig *aggLevelConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentLevelConfigJSONTransformer;
+ (id)aggLevelConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
