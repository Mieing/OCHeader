@class NSString, NSMutableDictionary, MMKV, NSMutableArray;

@interface AWERevisitVideoRecordProgressManager : NSObject <AWERevisitVideoRecordProgressManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *progressCacheDict;
@property (retain, nonatomic) NSMutableArray *hasShownFeedContinuePlayTipsScene;
@property (nonatomic) double lastWriteDiskTimestamp;
@property (nonatomic) BOOL enableToUpdate;
@property (copy, nonatomic) NSString *lastWriteId;
@property (retain, nonatomic) MMKV *progressKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableLog;
+ (BOOL)shouldRevisitVideoContinuePlay:(id)a0 referString:(id)a1;
+ (void)trackViedeoRelayPlayWithModel:(id)a0 enterFrom:(id)a1 relayType:(id)a2 tabName:(id)a3 relayTime:(double)a4;
+ (void)trackViedeoRelayPlayWithModel:(id)a0 enterFrom:(id)a1 relayType:(id)a2 tabName:(id)a3 relayTime:(double)a4 relayFrom:(id)a5;
+ (BOOL)hasShownContinuePlayTipsForReferString:(id)a0 enterFrom:(id)a1;
+ (id)storageKey;
+ (BOOL)shouldForceContinuePlay:(id)a0;
+ (BOOL)enableRecord;
+ (void)continuePlayLogWithInfo:(id)a0 model:(id)a1;
+ (BOOL)shouldRecordProgressWithAweType:(long long)a0 duration:(double)a1 playTime:(double)a2;
+ (BOOL)shouldRecordProgressWithAweType:(long long)a0;
+ (BOOL)shouldRecordProgressWithDuration:(double)a0;
+ (BOOL)shouldRecordProgressWithPlaytime:(double)a0;
+ (BOOL)enableAdaptSeekTimeOnWillPlay;
+ (double)minProgress;
+ (BOOL)isStrongHintStyle;
+ (BOOL)enableLocalStorage;
+ (BOOL)useMMKV;
+ (BOOL)shouldRecordProgressWithModel:(id)a0;
+ (BOOL)shouldContinuePlayWithVideoTime:(double)a0;
+ (BOOL)shouldContinuePlayWithPlayTime:(double)a0;
+ (double)recordFrequencyLimit;
+ (BOOL)localStorageOptimized;
+ (long long)maxRecordCount;
+ (BOOL)fixForceRelay;
+ (BOOL)onlyWriteShouldRecordWithAweType:(long long)a0;
+ (BOOL)onlyWriteShouldRecordWithDuration:(double)a0;
+ (BOOL)onlyWriteShouldRecordWithPlaytime:(double)a0;
+ (id)revisitVideoRecordProgressExp;
+ (id)revisitVideoRecordProgressOnlyWriteConfig;
+ (id)storageMMKVID;
+ (double)timeIntervalFromFeedModel:(id)a0 referString:(id)a1;
+ (double)lastModelTimeInterval:(id)a0;
+ (id)sharedInstance;
+ (double)minDuration;

- (void)recordIdentifer:(id)a0 model:(id)a1 playTime:(double)a2;
- (double)getLastModifiedPlayTimeWithModel:(id)a0;
- (double)getPlayTime:(id)a0;
- (double)getPlayTimeModifiedTime:(id)a0;
- (id)getContinuePlayProgressCacheWithItemID:(id)a0;
- (void)readRecordFromDisk;
- (void)onVideoPlayStart:(id)a0;
- (BOOL)shouldBlockRecordWithModel:(id)a0;
- (id)storageRecordId:(id)a0;
- (void)clearInValidRecord;
- (BOOL)shouldUpdateToDisk:(id)a0 playTime:(double)a1;
- (void)updateToDisk:(id)a0 key:(id)a1;
- (BOOL)shouldWriteProgressToDiskWhenModelIsOfflineCenter:(id)a0;
- (double)getPlayTimeModifiedTimeWithModel:(id)a0;
- (double)getSearchValidPlayTimeWithModel:(id)a0 referString:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
