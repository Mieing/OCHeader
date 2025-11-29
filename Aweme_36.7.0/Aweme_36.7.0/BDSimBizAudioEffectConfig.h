@class NSDictionary, NSArray, NSString;

@interface BDSimBizAudioEffectConfig : NSObject <BDSimAudioEffectConfiguring>

@property (nonatomic) long long playerAudioEffectSourceType;
@property (nonatomic) long long playerAudioEffectType;
@property (nonatomic) long long playerAudioPlayAbilityType;
@property (nonatomic) BOOL enableFeedAudioOptimize;
@property (nonatomic) BOOL useCachedVideoModelMetaDict;
@property (nonatomic) BOOL enableGroupVoiceEnhance;
@property (nonatomic) BOOL playerAudioVolumeNewStrategyEnable;
@property (nonatomic) BOOL enableVolumeBalanceStrategyLoudness;
@property (nonatomic) double playerAudioEffectByServerLoudnessUpperThreshold;
@property (nonatomic) double playerAudioEffectByServerLoudnessLowerThreshold;
@property (nonatomic) double playerVolumeBalanceTargetValue;
@property (nonatomic) double playerAudioLargePlayAbilityVolumeOffset;
@property (nonatomic) double playerAudioSmallPlayAbilityVolumeOffset;
@property (retain, nonatomic) NSDictionary *playerAudioEffectJSONConfig;
@property (retain, nonatomic) NSDictionary *playerAdVolumePredict;
@property (copy, nonatomic) NSArray *playerEffectTypeArrayFilterItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
