@interface FinderOfflineModeConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned int configCacheFeedQueueSize;
@property (nonatomic) unsigned int configCacheDirSizeMbytes;
@property (nonatomic) unsigned int configDownloadBatchNumber;
@property (nonatomic) unsigned int configPreloadPercent;
@property (nonatomic) unsigned int strategyWaitMsLastMinute;
@property (nonatomic) unsigned int strategyNetworkRangeTimeSec;
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
- (void)setStrategyNetworkRangeTimeSec:(unsigned int)a0;
- (unsigned int)strategyNetworkRangeTimeSec;
- (void)setStrategyWaitMsLastMinute:(unsigned int)a0;
- (unsigned int)strategyWaitMsLastMinute;
- (void)setConfigPreloadPercent:(unsigned int)a0;
- (unsigned int)configPreloadPercent;
- (void)setConfigDownloadBatchNumber:(unsigned int)a0;
- (unsigned int)configDownloadBatchNumber;
- (void)setConfigCacheDirSizeMbytes:(unsigned int)a0;
- (unsigned int)configCacheDirSizeMbytes;
- (void)setConfigCacheFeedQueueSize:(unsigned int)a0;
- (unsigned int)configCacheFeedQueueSize;
- (void)setEnable:(BOOL)a0;
- (BOOL)enable;

@end
