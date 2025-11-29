@class NSString, AWELiveLocalLifeComponentLevelConfig, AWELiveLocalLifeAggLevelConfig;

@interface AWELiveLocalLifeLevelConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELiveLocalLifeComponentLevelConfig *componentLevelConfig;
@property (retain, nonatomic) AWELiveLocalLifeAggLevelConfig *aggLevelConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentLevelConfigJSONTransformer;
+ (id)aggLevelConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
