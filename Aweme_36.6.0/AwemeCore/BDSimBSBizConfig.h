@class NSString;
@protocol BDSimBSTrackingProtocol, BDSimBSConditionTransProtocol;

@interface BDSimBSBizConfig : NSObject <BDSimBSConfiguring, BDSimBSTrackingProtocol>

@property (weak, nonatomic) id<BDSimBSConditionTransProtocol> bsConditionTransProtocol;
@property (weak, nonatomic) id<BDSimBSTrackingProtocol> bsTrackingProtocol;
@property (retain, nonatomic) Class bsModelTransformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)maxVideoDuration;
- (id)getFeedCacheBsModelWith:(id)a0;
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
- (double)getPlayedDurationFromModel:(id)a0;
- (void).cxx_destruct;

@end
