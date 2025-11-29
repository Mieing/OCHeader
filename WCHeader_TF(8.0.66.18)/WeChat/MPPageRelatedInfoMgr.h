@class MemoryMappedKV, MMTimer, NSString, NSMutableSet, NSMutableArray;

@interface MPPageRelatedInfoMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *relatedInfoSlotMMKV;
@property (retain, nonatomic) MemoryMappedKV *url2LastUpdateTimeSlotMMKV;
@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (nonatomic) unsigned int refreshIntervalSec;
@property (nonatomic) unsigned int maxRequestUrlCount;
@property (retain, nonatomic) NSMutableArray *currentTaskArr;
@property (retain, nonatomic) NSMutableArray *waitingUrlInfoQueue;
@property (retain, nonatomic) NSMutableSet *waitingPageIdentifierSet;
@property (retain) MMTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)MPPageIdentityWithUrlAndReturnNilIfNotHave:(id)a0;
- (id)getLocalMPPageRelatedInfoWithUrlInfo:(id)a0;
- (id)getAndCheckUpdateMPPageRelatedInfoWithUrlInfoArr:(id)a0;
- (void)clearAllRelatedInfo;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearAllData;
- (BOOL)checkUrlValid:(id)a0;
- (id)tryloadLocalRelatedInfo:(id)a0;
- (BOOL)isRelatedInfoExpired:(id)a0;
- (BOOL)isUrlRequestExpired:(id)a0;
- (BOOL)tryAddUrlInfoToWaitingQueue:(id)a0 relatedInfo:(id)a1;
- (void)fireTimerIfNeed;
- (void)stopTimer;
- (void)checkWaitingQueue;
- (BOOL)isExistInWaitingQueueOrRequestingQueue:(id)a0;
- (void)addUrlInfoToWaitingQueue:(id)a0 urlInfoIdentifier:(id)a1;
- (void)removeUrlInfoFromWaitingQueue:(id)a0 urlInfoIdentifier:(id)a1;
- (void)sendRequestToSvr:(id)a0;
- (void)saveRequestConfigToMMKV:(unsigned int)a0 maxRequestUrlCount:(unsigned int)a1;
- (void)handleRelatedInfoArrSuccess:(id)a0;
- (void).cxx_destruct;

@end
