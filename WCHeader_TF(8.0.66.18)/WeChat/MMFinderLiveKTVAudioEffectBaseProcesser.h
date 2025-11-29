@class NSSet, LiveKTVAudioEffectProcessInitParam, NSRecursiveLock;
@protocol MMFinderLiveKTVProcesserDelegate;

@interface MMFinderLiveKTVAudioEffectBaseProcesser : NSObject

@property (nonatomic) BOOL initSucc;
@property (nonatomic) BOOL isStart;
@property (retain, nonatomic) LiveKTVAudioEffectProcessInitParam *settingParam;
@property (nonatomic) unsigned long long settingReverbType;
@property (retain, nonatomic) NSRecursiveLock *audioProcesserLock;
@property (weak, nonatomic) id<MMFinderLiveKTVProcesserDelegate> processerDelegate;
@property (readonly, nonatomic) NSSet *supportedReverbTypes;

- (id)initWithParam:(id)a0;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)configAudioEffectCacheSettings;
- (BOOL)isFrameUnitParamLegal:(id)a0;
- (int)getSampleSize:(int)a0 sampleRate:(int)a1 format:(unsigned long long)a2 frameDuration:(int)a3;
- (int)getOutSampleSizeFromInSampleSize:(int)a0 channelCnt:(int)a1;
- (void)updateOptimizeReverbSetting;
- (id)audioSettingCache;
- (BOOL)checkNeedIgnoreFrameProcess:(id)a0;
- (BOOL)startAudioProcesser;
- (BOOL)stopAudioProcesser;
- (BOOL)process:(id)a0;
- (void)setOptimizeReverbType:(unsigned long long)a0;
- (unsigned long long)optimizeReverbType;
- (BOOL)updateSettingParam:(id)a0;
- (void).cxx_destruct;

@end
