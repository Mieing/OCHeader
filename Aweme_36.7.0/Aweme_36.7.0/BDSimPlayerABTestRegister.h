@interface BDSimPlayerABTestRegister : NSObject

+ (double)playerAudioEffectPregain;
+ (double)playerAudioEffectThreshold;
+ (double)playerAudioEffectRatio;
+ (double)playerAudioEffectPredelay;
+ (id)preloadConfig;
+ (double)preloadStartPercent;
+ (BOOL)loadControlOpen;
+ (id)loadControlConfig;
+ (BOOL)db_latestSpeedStrategy;
+ (double)db_speedThreshold;
+ (long long)db_strategyType;
+ (double)db_durationInitial;
+ (double)db_factor;
+ (double)db_durationMax;
+ (double)db_videoBuffer;
+ (double)db_audioBuffer;
+ (BOOL)db_averageSpeedStrategy;
+ (double)db_trackDemuxQueueDuration;
+ (BOOL)db_distinguishRebuffering;
+ (double)db_durationPreloaded;
+ (double)db_durationNonPreloaded;
+ (BOOL)db_minBufferTimeEnable;
+ (double)db_minBufferTime;
+ (BOOL)enableTTPlayerExtraView;
+ (id)vrProcessorVRInfo;
+ (BOOL)enableOptVideoCallbackTimer:(id)a0;
+ (id)playerAudioEffect;
+ (id)commerceVideoPlayerTimerConfig;
+ (BOOL)enableCleanBoundaryEvents;
+ (BOOL)enableCheckUpperBoundaryCase;

@end
