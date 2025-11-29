@class NSString, NSDictionary, IESLiveNotifyEffectFrequencyConfig;

@interface IESLiveNotifyEffectSubSceneItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) IESLiveNotifyEffectFrequencyConfig *frequencyConfig;
@property (nonatomic) long long maxShowTimes;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)frequencyConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
