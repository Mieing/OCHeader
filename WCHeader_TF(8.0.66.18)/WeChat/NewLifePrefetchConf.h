@interface NewLifePrefetchConf : WXPBGeneratedMessage

@property (nonatomic) unsigned int checkOutterPrefetchInterval;
@property (nonatomic) unsigned int clientPrefetchValidTime;
@property (nonatomic) unsigned int switchTabPrefetchInterval;
@property (nonatomic) unsigned int prefetchLastFeedCount;
@property (nonatomic) unsigned int checkNewlifeuserpagePrefetchInterval;
@property (nonatomic) unsigned int newlifeuserpagePrefetchValidTime;
@property (nonatomic) unsigned int reddotCheckOutterPrefetchInterval;
@property (nonatomic) unsigned int reddotClientPrefetchValidTime;

+ (void)initialize;

- (void)setReddotClientPrefetchValidTime:(unsigned int)a0;
- (unsigned int)reddotClientPrefetchValidTime;
- (void)setReddotCheckOutterPrefetchInterval:(unsigned int)a0;
- (unsigned int)reddotCheckOutterPrefetchInterval;
- (void)setNewlifeuserpagePrefetchValidTime:(unsigned int)a0;
- (unsigned int)newlifeuserpagePrefetchValidTime;
- (void)setCheckNewlifeuserpagePrefetchInterval:(unsigned int)a0;
- (unsigned int)checkNewlifeuserpagePrefetchInterval;
- (void)setPrefetchLastFeedCount:(unsigned int)a0;
- (unsigned int)prefetchLastFeedCount;
- (void)setSwitchTabPrefetchInterval:(unsigned int)a0;
- (unsigned int)switchTabPrefetchInterval;
- (void)setClientPrefetchValidTime:(unsigned int)a0;
- (unsigned int)clientPrefetchValidTime;
- (void)setCheckOutterPrefetchInterval:(unsigned int)a0;
- (unsigned int)checkOutterPrefetchInterval;

@end
