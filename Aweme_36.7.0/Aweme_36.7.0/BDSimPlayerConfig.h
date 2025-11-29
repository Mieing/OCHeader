@class NSString;
@protocol BDSimPlayerBizConfiguring;

@interface BDSimPlayerConfig : NSObject <BDSimPlayerConfiguring>

@property (retain, nonatomic) id<BDSimPlayerBizConfiguring> onceBizConfigV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)preloadAfterInitRefresh;
+ (BOOL)preloadAfterLoadMore;
+ (long long)enablePrivateVideosTTPlayer;
+ (BOOL)enableVRVideosTTPlayer;
+ (BOOL)enableMemoryWarningHandling;
+ (id)preloadConfig;
+ (BOOL)preloadWhenPlayFinish;
+ (BOOL)playerStopWhenLeave;
+ (BOOL)enableAudioInfoTrack;
+ (double)playerStopWhenLeaveStopDelayTime;
+ (BOOL)playerStopWhenEnterBackground;
+ (double)playerStopWhenEnterBackgroundDelayTime;
+ (BOOL)bitrateSelectOnce;
+ (BOOL)bitrateUseUpdateConfig;
+ (BOOL)videoBufferThresholdV2Enable;
+ (long long)videoBufferShowThreshold;
+ (BOOL)bitrateChangeOptimize;
+ (long long)videoBufferThreshold;
+ (double)adjustSystemVolumeInfoReportInterval;
+ (BOOL)enableTrackVolumeChangeInfoEarphoneState;
+ (id)audioInfoTrackConfig;
+ (long long)videoStartBufferShowThreshold;
+ (long long)currentPlaybackTimeinterval;
+ (BOOL)enableTrackVideoPlayQualityEarphoneState;
+ (BOOL)enableTrackVideoPlayEndEarphoneState;
+ (BOOL)enableTrackPlayTimeEarphoneState;
+ (BOOL)enableTrackVideoPlayPauseEarphoneState;
+ (BOOL)bitrateSelectAudioOnce;
+ (double)getHDRBrightnessOffset:(id)a0 brightness:(double)a1;
+ (id)getVideoTypeStrategy:(id)a0;
+ (double)getBrightnessOffset:(id)a0 currentBrightness:(double)a1;
+ (void)setHDRBrightnessStrategy:(id)a0;
+ (id)sharedInstanceWithBizConfig:(id)a0;
+ (BOOL)enableMultidimensionalBitrateCurve;
+ (id)getAWEHDRBrightnessConfig;
+ (long long)playerTypeWithCommonModel:(id)a0;
+ (long long)playerTypeWithAdType;
+ (long long)playerTypeWithModel:(id)a0;
+ (BOOL)videoPlayDurationFix;
+ (id)defaultConfig;

- (void)setupWithConfig:(id)a0;
- (BOOL)enableBytevc1Decode;
- (BOOL)enablePlayerCheckHijack;
- (BOOL)enableHardDecode;
- (BOOL)ttplayerMemoryOptimize;
- (id)bizConfig;
- (BOOL)loadControlOpen;
- (BOOL)db_distinguishRebuffering;
- (BOOL)enablePlayOnlyCheckDash;
- (void)configPreloadStrategy;
- (id)bizConfigV2;
- (BOOL)shouldSetPostPrepare;
- (BOOL)getAWEIsEnableVPRGBToYUVOnceHandle;
- (id)playerPostPrepareMsgConfig;
- (void)setupWithConfigV2:(id)a0;
- (id)networkConnectMethod;
- (long long)playerCacheDuration;
- (BOOL)enableMonitorPlayerNetworkStatus;
- (double)getUnifyVolumTargetLoudness;
- (BOOL)enableAsyncPlayerPrepare;
- (long long)networkType;
- (void).cxx_destruct;
- (BOOL)isNetworkConnected;

@end
