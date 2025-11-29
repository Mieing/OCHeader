@protocol BDSimBSTrackingProtocol, BDSimBSConditionTransProtocol;

@interface AWEBDSimBSBizConfig : BDSimBSBizConfig {
    id<BDSimBSTrackingProtocol> bsTrackingProtocol;
    id<BDSimBSConditionTransProtocol> bsConditionTransProtocol;
}

+ (id)sharedInstance;

- (double)maxVideoDuration;
- (id)getFeedCacheBsModelWith:(id)a0;
- (Class)bsModelTransformer;
- (long long)checkingPlaylistLen;
- (long long)firstFeedCntThreshold;
- (BOOL)ladderSelectionPredictType;
- (double)maxBandwidthUsageFactor;
- (double)maxFdBandwidthUsageFactor;
- (double)maxFdInternetSpeedKBps;
- (double)maxNfdInternetSpeedKBps;
- (double)maxReservedDurationMs;
- (double)minBandwidthUsageFactor;
- (double)minFdBandwidthUsageFactor;
- (double)minFdInternetSpeedKBps;
- (double)minNfdInternetSpeedKBps;
- (BOOL)playListWiseBitrateSelectFixSwitch;
- (long long)recordPlaylistCheckingLen;
- (double)safeCacheDurationMs;
- (id)bsTrackingProtocol;
- (id)bsConditionTransProtocol;
- (double)getPlayedDurationFromModel:(id)a0;
- (BOOL)enableTracking;
- (void)onTrackingEvent:(id)a0;
- (void)setBsTrackingProtocol:(id)a0;
- (void)setBsConditionTransProtocol:(id)a0;
- (void).cxx_destruct;

@end
