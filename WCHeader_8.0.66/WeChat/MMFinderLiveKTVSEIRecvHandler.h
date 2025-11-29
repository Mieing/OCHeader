@class MMFinderLiveKTVSEIRecvSession, NSMutableArray, MMFinderLiveKTVReporter;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVSEIRecvHandler : NSObject

@property (retain, nonatomic) id<MMLiveUniqueTaskId> taskId;
@property (retain) MMFinderLiveKTVSEIRecvSession *currSession;
@property (retain, nonatomic) NSMutableArray *recentSeiRecvTimeIntervalRecords;
@property (retain, nonatomic) NSMutableArray *recentSeiRecvIntervalList;
@property (nonatomic) double lastSeiRecvTime;
@property (nonatomic) double recentSeiRecvInterval;
@property (nonatomic) unsigned long long currMaxRecvSeq;
@property (nonatomic) BOOL seiFreqStable;
@property (nonatomic) double currSessionStartTime;
@property (retain) MMFinderLiveKTVReporter *reporter;
@property (nonatomic) double lastUnStickTime;
@property (copy) id /* block */ recvSessionUpdateCallback;
@property (copy) id /* block */ checkNeedKTVInfoCallback;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultDatas;
- (void)checkRecvSessionUpdated:(id)a0;
- (BOOL)isRecvSeqContinuous:(unsigned long long)a0;
- (BOOL)isRecvSeqStick;
- (BOOL)isRecvSeqValid:(unsigned long long)a0;
- (BOOL)updateCurrMaxRecvSeq:(unsigned long long)a0;
- (void)updateRecentUnStickSeiTime;
- (void)onSyncRecv:(id)a0 continuous:(BOOL)a1 stick:(BOOL)a2;
- (void)clearDatas;
- (id)createRecvSessionWithKTVSeiData:(id)a0;
- (void)updateRecvSession:(id)a0;
- (void)clearLastSessionRecvDatas;
- (void)notifyRecvKTVSeiData:(id)a0 continuous:(BOOL)a1 stick:(BOOL)a2;
- (BOOL)checkNeedProcessKTVInfos:(id)a0;
- (id)ktvReporter;
- (void)recordRecvNewSeiKTVInfo;
- (void)checkSeiFreqStableIfNeed;
- (BOOL)isRecvTimeIntervalValid:(double)a0;
- (double)adjustRecvTimeIntervalIfNeed:(double)a0;
- (void)clearRecvTimeIntervalRecordsIfOverLimit;
- (void)clearSeiRecvTimeIntervalRecords;
- (unsigned long long)recentRecvTimeRecordCnt;
- (void)clearRecvTimeIntervalNoiseIfNeed;
- (void)analyzeRecentSeiRecvAverTimeInterval;
- (void)updateRecentSeiRecvIntervalIfNeed:(double)a0;
- (void)recordNewRecvInterval:(double)a0;
- (void)clearRecentRecvIntervalsIfOverLimit;
- (void)clearRecentRecvIntervals;
- (unsigned long long)recentRecvIntervalRecordCnt;
- (double)getAverRecentRecvInterval;
- (void).cxx_destruct;

@end
