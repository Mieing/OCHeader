@class NSDictionary, NSArray;

@interface AWEBDSimPlayerBizAudioEffectConfig : BDSimBizAudioEffectConfig {
    BOOL enableFeedAudioOptimize;
    BOOL enableGroupVoiceEnhance;
    BOOL playerAudioVolumeNewStrategyEnable;
    BOOL useCachedVideoModelMetaDict;
    double playerAudioEffectByServerLoudnessUpperThreshold;
    double playerAudioEffectByServerLoudnessLowerThreshold;
    NSDictionary *playerAudioEffectJSONConfig;
    long long playerAudioEffectSourceType;
    long long playerAudioEffectType;
    long long playerAudioPlayAbilityType;
    double playerAudioSmallPlayAbilityVolumeOffset;
    double playerVolumeBalanceTargetValue;
    double playerAudioLargePlayAbilityVolumeOffset;
    NSDictionary *playerAdVolumePredict;
    NSArray *playerEffectTypeArrayFilterItems;
}

- (void)setPlayerAudioEffectType:(long long)a0;
- (BOOL)useCachedVideoModelMetaDict;
- (double)playerVolumeBalanceTargetValue;
- (BOOL)enableFeedAudioOptimize;
- (BOOL)enableGroupVoiceEnhance;
- (double)playerAudioEffectByServerLoudnessUpperThreshold;
- (double)playerAudioEffectByServerLoudnessLowerThreshold;
- (id)playerAudioEffectJSONConfig;
- (long long)playerAudioEffectSourceType;
- (long long)playerAudioEffectType;
- (long long)playerAudioPlayAbilityType;
- (BOOL)enableVolumeBalanceStrategyLoudness;
- (double)playerAudioSmallPlayAbilityVolumeOffset;
- (BOOL)playerAudioVolumeNewStrategyEnable;
- (double)playerAudioLargePlayAbilityVolumeOffset;
- (id)playerEffectTypeArrayFilterItems;
- (id)playerAdVolumePredict;
- (void)setPlayerAudioEffectByServerLoudnessUpperThreshold:(double)a0;
- (void)setPlayerAudioEffectByServerLoudnessLowerThreshold:(double)a0;
- (void)setPlayerAudioEffectJSONConfig:(id)a0;
- (void)setPlayerAudioEffectSourceType:(long long)a0;
- (void)setPlayerAudioPlayAbilityType:(long long)a0;
- (void)setEnableFeedAudioOptimize:(BOOL)a0;
- (void)setEnableGroupVoiceEnhance:(BOOL)a0;
- (void)setPlayerAudioSmallPlayAbilityVolumeOffset:(double)a0;
- (void)setPlayerAudioVolumeNewStrategyEnable:(BOOL)a0;
- (void)setPlayerVolumeBalanceTargetValue:(double)a0;
- (void)setUseCachedVideoModelMetaDict:(BOOL)a0;
- (void)setPlayerAudioLargePlayAbilityVolumeOffset:(double)a0;
- (void)setPlayerAdVolumePredict:(id)a0;
- (void)setPlayerEffectTypeArrayFilterItems:(id)a0;
- (void).cxx_destruct;

@end
