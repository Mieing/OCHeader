@class NSString;

@interface WCFinderTipsShowClientStatsInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *tipsUuid;
@property (nonatomic) unsigned int exposeCount;
@property (copy, nonatomic) NSString *oob;
@property (nonatomic) unsigned long long firstExposeTime;
@property (nonatomic) unsigned long long receTime;
@property (nonatomic) BOOL hadSyncColdTime;
@property (nonatomic) unsigned long long lastExposeTimeStamp;
@property (nonatomic) unsigned long long lastEndExposeTimeStamp;
@property (nonatomic) unsigned long long lastReportTimeStamp;
@property (nonatomic) unsigned long long exposeInterval;
@property (nonatomic) unsigned long long lastReportExposeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_exposeCount;
+ (void)PBArrayAdd_oob;
+ (void)PBArrayAdd_firstExposeTime;
+ (void)PBArrayAdd_receTime;
+ (void)PBArrayAdd_hadSyncColdTime;
+ (void)PBArrayAdd_lastExposeTimeStamp;
+ (void)PBArrayAdd_lastReportTimeStamp;
+ (void)PBArrayAdd_exposeInterval;
+ (void)PBArrayAdd_lastEndExposeTimeStamp;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_lastReportExposeInterval;
+ (void)initialize;
+ (id)clientStatsInfo:(id)a0 bindTipsUuid:(id)a1;

- (id)getPBPropertyTable;
- (id)init;
- (id)generateFinderClientStatsInfo;
- (long long)timeIntervalByLastEndExposeTs;
- (long long)getReportExposeInterval;
- (long long)getLastExposeTimeIntervalBy:(unsigned long long)a0;
- (void).cxx_destruct;

@end
