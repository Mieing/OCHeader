@protocol BDSimAudioEffectConfiguring, BDSimBSConfiguring, BDSimPlayerBizVideoSRConfiguring, BDSimSuperResImpl;

@interface AWEBDSimPlayerBizConfig : BDSimPlayerBizConfig {
    id<BDSimSuperResImpl> _superResolutionManager;
}

@property (retain, nonatomic) id<BDSimPlayerBizVideoSRConfiguring> bizVideoSRConfig;
@property (retain, nonatomic) id<BDSimAudioEffectConfiguring> bizAudioEffectConfig;
@property (retain, nonatomic) id<BDSimBSConfiguring> bizBSConfig;

- (BOOL)enableMemoryWarningHandling;
- (id)trackerService;
- (BOOL)enableBitrateSelectionDev;
- (BOOL)enableDashAdapterSwitch;
- (BOOL)usePreloaded302Url;
- (BOOL)enableManualBitrateSelection;
- (BOOL)enableDashVideoAndAudioCacheReadDev;
- (BOOL)enableHDRBrightnessOpt;
- (BOOL)enableBitrateSelectionDevRecords;
- (id)advertAutoBitrateModel;
- (BOOL)enableVideoModelDescBS;
- (id)superResolutionManager;
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
- (id)teenSuperResolutionManager;
- (float)getHDRBrightnessThreshold;
- (BOOL)isEnableOnePlayMerge;
- (id)getPlayerSocketOptions;
- (id)getPlayerBlockOptions;
- (BOOL)playerHasGetPortraits;
- (void)parsePlayerSocketTimeoutInfo:(id)a0;
- (BOOL)downLoadTaskCount;
- (BOOL)enableTTPlayerDualCoreRear;
- (void)setSuperResolutionManager:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
