@interface OfflineModeStrategy : WXPBGeneratedMessage

@property (nonatomic) unsigned long long insertFeedId;
@property (nonatomic) unsigned int notInsertReason;
@property (nonatomic) unsigned int strategyWaitMsLastMinute;
@property (nonatomic) unsigned int strategyNetworkSpeedKbitps;
@property (nonatomic) unsigned int strategyCgiConnectTimeMs;
@property (nonatomic) unsigned int strategyCdnConnectTimeMs;
@property (nonatomic) unsigned int strategyNextFeedPreloadStage;
@property (nonatomic) unsigned long long strategyInsertFeedAlreadyDownloadSizeKbytes;
@property (nonatomic) unsigned int strategyInsertFeedAlreadyDownloadPercent;

+ (void)initialize;

- (void)setStrategyInsertFeedAlreadyDownloadPercent:(unsigned int)a0;
- (unsigned int)strategyInsertFeedAlreadyDownloadPercent;
- (void)setStrategyInsertFeedAlreadyDownloadSizeKbytes:(unsigned long long)a0;
- (unsigned long long)strategyInsertFeedAlreadyDownloadSizeKbytes;
- (void)setStrategyNextFeedPreloadStage:(unsigned int)a0;
- (unsigned int)strategyNextFeedPreloadStage;
- (void)setStrategyCdnConnectTimeMs:(unsigned int)a0;
- (unsigned int)strategyCdnConnectTimeMs;
- (void)setStrategyCgiConnectTimeMs:(unsigned int)a0;
- (unsigned int)strategyCgiConnectTimeMs;
- (void)setStrategyNetworkSpeedKbitps:(unsigned int)a0;
- (unsigned int)strategyNetworkSpeedKbitps;
- (void)setStrategyWaitMsLastMinute:(unsigned int)a0;
- (unsigned int)strategyWaitMsLastMinute;
- (void)setNotInsertReason:(unsigned int)a0;
- (unsigned int)notInsertReason;
- (void)setInsertFeedId:(unsigned long long)a0;
- (unsigned long long)insertFeedId;

@end
