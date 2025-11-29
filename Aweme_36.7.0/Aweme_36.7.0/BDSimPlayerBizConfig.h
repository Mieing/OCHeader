@class NSString;
@protocol BDSimPlayerTrackingServiceImpl, BDSimAudioEffectConfiguring, BDSimBSConfiguring, BDSimPlayerBizVideoSRConfiguring, BDSimSuperResImpl;

@interface BDSimPlayerBizConfig : NSObject <BDSimPlayerBizConfiguring>

@property (retain, nonatomic) id<BDSimSuperResImpl> teenSuperResolutionManager;
@property (retain, nonatomic) id<BDSimSuperResImpl> superResolutionManager;
@property (retain, nonatomic) id<BDSimPlayerBizVideoSRConfiguring> bizVideoSRConfig;
@property (retain, nonatomic) id<BDSimAudioEffectConfiguring> bizAudioEffectConfig;
@property (retain, nonatomic) id<BDSimBSConfiguring> bizBSConfig;
@property (retain, nonatomic) id<BDSimPlayerTrackingServiceImpl> trackerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedAdvertHighQualityConfig;
+ (id)defaultConfig;

- (BOOL)enableMemoryWarningHandling;
- (BOOL)enableBitrateSelectionDev;
- (BOOL)enableDashAdapterSwitch;
- (BOOL)usePreloaded302Url;
- (BOOL)enableManualBitrateSelection;
- (BOOL)enableDashVideoAndAudioCacheReadDev;
- (BOOL)enableHDRBrightnessOpt;
- (BOOL)enableBitrateSelectionDevRecords;
- (id)advertAutoBitrateModel;
- (BOOL)enableVideoModelDescBS;
- (BOOL)enableFirstFeedCacheBSOpt;
- (BOOL)enableAkByBitrate;
- (BOOL)enableDashBitrateFix;
- (BOOL)enablePlayerVolumeInfoTrack;
- (BOOL)enableMvmafVqosDataUpload;
- (id)audioInfoTrackConfig;
- (BOOL)enablesVideoBlockWithSpeedAndBitrate;
- (BOOL)enablePlayerBmfSrWes;
- (double)bmfSrWesThreshold;
- (double)bmfSrWesWeight;
- (id)autoRangeOffsetConfig;
- (long long)rangeControlTimeForMp4;
- (long long)rangeControlTimeForDash;
- (long long)rangeControlTimeForMp3;
- (long long)rangeControlDefaultSizeMp3;
- (long long)rangeControlDefaultSize;
- (BOOL)enablePlayerAbr;
- (BOOL)hdrAutomaticIdentification;
- (BOOL)enableHDRFullModelAdaptation;
- (BOOL)enableVideoRequestMetricOptimization;
- (float)getHDRBrightnessThreshold;
- (BOOL)isEnableOnePlayMerge;
- (id)getPlayerSocketOptions;
- (id)getPlayerBlockOptions;
- (BOOL)playerHasGetPortraits;
- (void)parsePlayerSocketTimeoutInfo:(id)a0;
- (BOOL)downLoadTaskCount;
- (BOOL)enableTTPlayerDualCoreRear;
- (void).cxx_destruct;
- (id)init;

@end
