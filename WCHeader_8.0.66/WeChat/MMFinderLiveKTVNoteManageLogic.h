@class MMFinderLiveKTVSEIRecvSession, NSMutableArray, NSString;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVNoteManageLogic : NSObject <MMFinderLiveKTVSEISyncRecvExt>

@property (retain, nonatomic) id<MMLiveUniqueTaskId> taskId;
@property (retain, nonatomic) MMFinderLiveKTVSEIRecvSession *currRemoteSession;
@property (retain, nonatomic) NSMutableArray *recentNoteRecordList;
@property (nonatomic) int lastTargetIndex;
@property (nonatomic) double predictNoteDelayInterval;
@property (nonatomic) BOOL isNoteDelayIntervalUpdated;
@property (nonatomic) double lastNoteDelayIntervalUpdateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)preferNoteAdjustTimeInterval;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (id)tryGetSEINoteWithPosition:(int)a0 maxMistake:(int)a1;
- (void)onPredictNoteDelayIntervalUpdateAck;
- (void)updateRemoteSession:(id)a0;
- (void)clearLastSessionRemoteNotes;
- (void)addRecentRemoteNoteRecords:(id)a0;
- (void)clearRecentRemoteNoteRecords;
- (void)clearNoteRecordsIfOverLimit;
- (BOOL)isPosition:(int)a0 fitWithNote:(id)a1;
- (id)checkPosition:(int)a0 nearestWithLastNote:(id)a1 orNextNote:(id)a2;
- (BOOL)isPosition:(int)a0 mistakeWithNote:(id)a1 overLimit:(int)a2;
- (void)updateNoteDelayIntervalIfNeed:(double)a0;
- (void)updatePredictNoteDelayInterval:(double)a0;
- (double)maxNoteDelayInterval;
- (double)noteDelayIntervalUpdateMinInterval;
- (void)onLiveSEIKTVNoteListSyncRecv:(id)a0 session:(id)a1 taskId:(id)a2;
- (void)onLiveSEIKTVNoteListExpiredInSession:(id)a0 taskId:(id)a1;
- (void)onLiveSEIKTVRecvTimeIntervalUpdate:(double)a0 taskId:(id)a1;
- (void).cxx_destruct;

@end
