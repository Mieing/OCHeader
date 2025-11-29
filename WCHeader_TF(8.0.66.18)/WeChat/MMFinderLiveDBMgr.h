@class NSString, WCTDatabase, WCTTable, NSObject;
@protocol OS_dispatch_queue;

@interface MMFinderLiveDBMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCTDatabase *db;
@property (retain, nonatomic) WCTTable *historyListTable;
@property (retain, nonatomic) WCTTable *liveTrialRecordTable;
@property (retain, nonatomic) WCTTable *replayWatchHistoryTable;
@property (retain, nonatomic) WCTTable *adVideoWatchStatusTable;
@property (retain, nonatomic) WCTTable *replayStopgapPreloadTable;
@property (retain, nonatomic) WCTTable *gestureTable;
@property (retain, nonatomic) WCTTable *noticePosterStylesTable;
@property (retain, nonatomic) WCTTable *stickersTable;
@property (retain, nonatomic) WCTTable *liveSnsAdLiveStreamInfoTable;
@property (retain, nonatomic) WCTTable *beautyResourcePackageRecordsTable;
@property (retain, nonatomic) WCTTable *questionAndAnswerMsgRecordsTable;
@property (retain, nonatomic) WCTTable *uhpLiveBadgesTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cleanQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_finderLiveCacheValidDate;
+ (BOOL)isLowEnd;

- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)addSearchContent:(id)a0;
- (id)getLocalSearchHistory;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)a0;
- (id)getLiveTrialRecord:(unsigned long long)a0;
- (void)updateLiveTrialRecord:(unsigned long long)a0 remainTime:(unsigned int)a1 trialEndTime:(unsigned int)a2 trialLimitTime:(unsigned int)a3;
- (id)getReplayWatchHistoryForLiveId:(unsigned long long)a0;
- (void)updateLiveReplayWatchHistoryRecordForLiveId:(unsigned long long)a0 lastExitTime:(unsigned int)a1;
- (BOOL)checkIsLiveAdWatched:(unsigned long long)a0 adId:(id)a1;
- (void)updateLiveAdWatchTs:(unsigned long long)a0 adId:(id)a1;
- (id)getReplayStopgapPreloadRecordForLiveId:(unsigned long long)a0;
- (void)updateReplayStopgapPreloadRecord:(id)a0;
- (id)getGestureRecords;
- (id)getGestureRecordWithId:(unsigned int)a0;
- (BOOL)updateGestureRecord:(id)a0;
- (BOOL)deleteGestureRecordWithId:(unsigned int)a0;
- (id)getNoticePosterStyles;
- (unsigned int)cachedNoticePosterStylesVersion;
- (BOOL)setNoticePosterStyles:(id)a0 version:(unsigned int)a1;
- (id)getStickerRecords;
- (BOOL)upsertStickerRecord:(id)a0;
- (BOOL)deleteStickerRecordWithInstanceId:(id)a0;
- (BOOL)clearStickerRecords;
- (BOOL)upsertUhpLiveBadgeInstance:(id)a0;
- (id)uhpLiveBadgeInstanceWithId:(id)a0;
- (id)getSnsAdLiveStreamInfoWithLiveId:(id)a0 exportId:(id)a1;
- (BOOL)updateSnsAdLiveStreamInfo:(id)a0;
- (id)beautyResourcePackageRecordWithId:(id)a0;
- (BOOL)upsertBeautyResourcePackageRecord:(id)a0;
- (void)beginDeletingStaleBeautyResourcePackageRecords;
- (id)getMsgRecordWithId:(id)a0;
- (BOOL)updateMsgRecord:(id)a0;
- (BOOL)deleteMsgRecordWithId:(id)a0;
- (BOOL)clearExpiredMsgRecords;
- (BOOL)clearMsgRecords;
- (void)openDB;
- (void)setupTable;
- (void)createLiveAdStatusTable;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)closeDB;
- (id)dbPath;
- (void)willRecoverDatabase;
- (void)cleanExpiredData;
- (void)cleanOthersTableRunPauseableTransaction;
- (void)_cleanOthersTableRunPauseableTransaction;
- (void)cleanExpiredFinderLiveSnsAdStreamLiveInfo;
- (void)cleanExpiredSearchHistory;
- (void).cxx_destruct;

@end
