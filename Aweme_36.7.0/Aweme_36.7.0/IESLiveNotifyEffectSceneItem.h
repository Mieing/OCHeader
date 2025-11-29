@class NSString, NSArray, NSDictionary, IESLiveNotifyEffectFrequencyConfig;

@interface IESLiveNotifyEffectSceneItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) IESLiveNotifyEffectFrequencyConfig *frequencyConfig;
@property (nonatomic) long long maxWaitingTime;
@property (copy, nonatomic) NSArray *subScenes;
@property (nonatomic) long long maxShowTimes;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)frequencyConfigJSONTransformer;
+ (id)subScenesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
