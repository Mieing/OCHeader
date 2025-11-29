@protocol BDSimBSConfiguring, BDSimPlayerBizConfiguring;

@interface BDSimBSBandwidthCalculator : NSObject

@property (readonly, nonatomic) BOOL ladderSelectionPredictType;
@property (readonly, nonatomic) double safeCacheDuration;
@property (readonly, nonatomic) double maxReservedDurationMs;
@property (readonly, nonatomic) long long targetCount;
@property (nonatomic) long long firstFeedCntThreshold;
@property (readonly, nonatomic) double maxVideoDuration;
@property (nonatomic) double curVideoDuration;
@property (nonatomic) BOOL enableParamFix;
@property (readonly, nonatomic) long long recordCount;
@property (weak, nonatomic) id<BDSimBSConfiguring> bizBSConfig;
@property (weak, nonatomic) id<BDSimPlayerBizConfiguring> bizConfig;

+ (id)sharedInstance;

- (void)fillbitrateSelectRecordWithModel:(id)a0 bitrate:(long long)a1 offset:(long long)a2;
- (double)bandWidthCalculatorByModels:(id)a0 fromIndex:(long long)a1 bitrateModel:(id)a2 selectingModel:(id)a3;
- (double)getPlayedDurationFromModel:(id)a0;
- (void)initBSFactorCalculateModel:(id)a0 BSModel:(id)a1 lastCacheExist:(BOOL)a2;
- (id)getPlayListValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
