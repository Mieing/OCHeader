@class NSString, AWELoginStrategySceneExtraInfo, AWELoginStrategySceneFrequencyControl, AWELoginStrategySceneFailRemit;

@interface AWELoginStrategySceneModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELoginStrategySceneFrequencyControl *frequencyControl;
@property (retain, nonatomic) AWELoginStrategySceneFailRemit *failRemitStrategy;
@property (retain, nonatomic) AWELoginStrategySceneExtraInfo *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraInfoJSONTransformer;
+ (id)frequencyControlJSONTransformer;
+ (id)failRemitStrategyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)forceLoginGuideShape;
- (unsigned long long)forceLoginUserType;
- (void).cxx_destruct;

@end
