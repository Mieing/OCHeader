@class SafeMutableDictionary;

@interface ExptAppLogic : NSObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned int interval;
@property (retain, nonatomic) SafeMutableDictionary *hitList;
@property (nonatomic) unsigned int lastReportTime;
@property (nonatomic) unsigned int reportIntervalSec;
@property (nonatomic) BOOL needNoteHitInfo;

- (id)init;
- (void)dealloc;
- (void)hit:(id)a0;
- (void)getSvrExpt:(unsigned int)a0;
- (void)checkToGetSvrExpt;
- (void)checkToReportConfig;
- (void)resetLastGetTimeSec:(unsigned int)a0;
- (void)resetGetAppTime:(unsigned int)a0 and:(unsigned int)a1;
- (void)reportExptConfig;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleExptAppConfig:(id)a0;
- (void)handleReportExptApp:(id)a0;
- (id)respToLocalItem:(id)a0;
- (void)saveToMMkv:(id)a0 val:(id)a1;
- (id)getFromMMkv:(id)a0 def:(id)a1;
- (void)saveToMMkv:(id)a0 valInt:(unsigned int)a1;
- (unsigned int)getFromMmkv:(id)a0 defInt:(unsigned int)a1;
- (void)saveReportList;
- (id)getReportListForMMkv;
- (void)deleteOldMMkvReportList;
- (unsigned long long)getReportOpTimeMs;
- (void)saveReportOpTimeMs;
- (id)createReportList;
- (id)getExptAppDeviceType;
- (unsigned int)getIntervalSec;
- (unsigned int)getLastGetTimeSec;
- (id)getGlobalSequence;
- (BOOL)needLocalList;
- (id)getLocalExptList;
- (id)getCgiReportList;
- (BOOL)OnReceNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)setNextGetExptAppIsIncrement:(BOOL)a0;
- (BOOL)getNextGetExptAppIsIncrement;
- (void)noteLogStatIgnoreFreqLimitLogId;
- (void).cxx_destruct;

@end
