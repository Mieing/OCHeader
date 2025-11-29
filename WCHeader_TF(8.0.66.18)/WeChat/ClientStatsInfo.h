@class NSString;

@interface ClientStatsInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int exposeCount;
@property (retain, nonatomic) NSString *oob;
@property (nonatomic) unsigned long long firstExposeTime;
@property (nonatomic) unsigned long long receTime;
@property (nonatomic) BOOL hadSyncColdTime;
@property (nonatomic) unsigned long long lastExposeTimeStamp;
@property (nonatomic) unsigned long long lastReportTimeStamp;
@property (nonatomic) unsigned long long exposeInterval;
@property (nonatomic) unsigned long long lastExposeInterval;

+ (void)initialize;

- (void)setLastExposeInterval:(unsigned long long)a0;
- (unsigned long long)lastExposeInterval;
- (void)setExposeInterval:(unsigned long long)a0;
- (unsigned long long)exposeInterval;
- (void)setLastReportTimeStamp:(unsigned long long)a0;
- (unsigned long long)lastReportTimeStamp;
- (void)setLastExposeTimeStamp:(unsigned long long)a0;
- (unsigned long long)lastExposeTimeStamp;
- (void)setHadSyncColdTime:(BOOL)a0;
- (BOOL)hadSyncColdTime;
- (void)setReceTime:(unsigned long long)a0;
- (unsigned long long)receTime;
- (void)setFirstExposeTime:(unsigned long long)a0;
- (unsigned long long)firstExposeTime;
- (void)setOob:(id)a0;
- (id)oob;
- (void)setExposeCount:(unsigned int)a0;
- (unsigned int)exposeCount;

@end
