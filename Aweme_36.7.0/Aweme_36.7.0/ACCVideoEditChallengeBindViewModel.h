@class NSMutableDictionary, RACSubject, NSMutableSet, RACSignal, NSMutableArray, NSString;
@protocol ACCVideoConfigProtocol;

@interface ACCVideoEditChallengeBindViewModel : ACCEditViewModel <ACCVideoEditChallengeBindService>

@property (retain, nonatomic) NSMutableDictionary *moduleChallengeBindMaping;
@property (retain, nonatomic) NSMutableArray *removeAllEditIgnoreList;
@property (retain, nonatomic) NSMutableDictionary *challengeNameCache;
@property (retain, nonatomic) NSMutableSet *fetchingChallengeIds;
@property (retain, nonatomic) RACSubject *challengeDetailFetchedSubject;
@property (retain, nonatomic) RACSubject *willBatchUpdateSubject;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (nonatomic) long long currentOrderIndex;
@property (nonatomic) BOOL didCleared;
@property (nonatomic) BOOL didSetup;
@property (nonatomic) BOOL readyToSync;
@property (nonatomic) BOOL batchUpdating;
@property (nonatomic) BOOL alwaysSynchoronizeTitleImmediately;
@property (nonatomic) BOOL shouldSynchoronizeTitleWhenAppear;
@property (readonly, nonatomic) RACSignal *willBatchUpdateSignal;
@property (readonly, nonatomic) RACSignal *challengeDetailFetchedSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (id)currentBindChallengeNames;
- (void)onRemovedAllEdits;
- (void)syncToTitleImmediately;
- (void)onGotoPublish;
- (void)onDataClearForBackup;
- (id)currentBindChallegeSetsWithModuleKey:(id)a0;
- (id)cachedChallengeNameWithId:(id)a0;
- (void)preFetchChallengeDetailWithChallengeId:(id)a0;
- (void)updateCurrentBindChallenges:(id)a0 moduleKey:(id)a1;
- (void)updateCurrentBindChallengeWithId:(id)a0 moduleKey:(id)a1;
- (void)addToIgnoreListWhenRemoveAllEditWithModuleKey:(id)a0;
- (void)p_updateMissionChallenges;
- (void)p_updatePropsChallenges;
- (void)p_updateSearchClueChallenges;
- (void)p_updateMVChallenges;
- (void)p_updateCutsameChallenges;
- (void)p_updateCommerceDuetChallenges;
- (void)p_updateDeeplinkCarryChallenges;
- (void)p_updateFlashMobChallenges;
- (void)p_updateAIMemoriesChallenges;
- (void)p_updateTextReadingChallenges;
- (void)p_updateAIGCLoraUGCChallenges;
- (void)updateExtraModulesChallenges:(id)a0 moduleKey:(id)a1;
- (void)updateExtraModulesChallengeIfNeed;
- (void)updateCurrentBindChallenges:(id)a0 moduleKey:(id)a1 isExtraModule:(BOOL)a2 isRecoverMode:(BOOL)a3;
- (void)p_addCacheFromChallenges:(id)a0;
- (void)p_fetchChallengeDetailsIfNeedWithChallenges:(id)a0 needDoSyncWhenFinished:(BOOL)a1;
- (void)syncToTitleIfNeed;
- (void)p_recoverChallengeBindFromDraft;
- (id)p_currentBindChallenges;
- (id)p_currentNeedDeleteChallengeNames;
- (void)p_syncCurrentBindChallengeInfosToDraft;
- (void)p_fetchChallengeDetailIfNeedWithChallenge:(id)a0 needDoSyncWhenFinished:(BOOL)a1;
- (void)addChallengeCacheWithName:(id)a0 challengeId:(id)a1;
- (void)p_performFillDetailFromTarget:(id)a0 needDoSyncWhenFinished:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;
- (void)setup;
- (void)onAppear;

@end
