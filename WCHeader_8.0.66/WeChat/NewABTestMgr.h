@class NSString, NSMutableArray;

@interface NewABTestMgr : MMUserService <INewABTestLogicExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *aryABTestList;
@property (nonatomic) unsigned int uiNextUpdateTime;
@property (nonatomic) BOOL bABTestCacheLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getABTestAry;
- (id)getABTestItemWithLayerId:(id)a0;
- (id)getValueForKey:(id)a0 withLayerId:(id)a1;
- (id)getABTestListWithBizId:(id)a0;
- (void)reportABTestRunning:(id)a0;
- (void)reportABTestLog:(id)a0 expId:(id)a1 logId:(unsigned int)a2 logExt:(id)a3;
- (id)pathForNewABTestCache;
- (BOOL)tryLoadNewABTestCache;
- (void)filterExpireExp;
- (BOOL)saveNewABTestCache;
- (void)mergeNewABTestItemFromSvr:(id)a0;
- (void)handleNewABTestList:(id)a0;
- (void)onServiceInit;
- (void)getABTestItemsForRequest:(id)a0;
- (void)onGetABTestItems:(id)a0 expiredExpids:(id)a1 isAutoGet:(BOOL)a2;
- (id)getExpItemsArray;
- (void).cxx_destruct;

@end
