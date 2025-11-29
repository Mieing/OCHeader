@class NSString, NSMutableDictionary;

@interface NewABTestKeyMgr : MMUserService <MMServiceProtocol, INewABTestLogicExt>

@property (retain, nonatomic) NSMutableDictionary *cachedABTestItems;
@property (nonatomic) BOOL bABTestCacheLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)getTestValueWithoutReportForKey:(id)a0;
- (id)getTestValueWithAutoReportForKey:(id)a0;
- (id)getTestValueWithKey:(id)a0 reportABTestRunning:(BOOL)a1;
- (void)filterExpsUsingBlock:(id /* block */)a0;
- (id)getExpItemsArray;
- (void)reportABTestRunning:(id)a0;
- (BOOL)tryLoadNewABTestCache;
- (id)pathForNewABTestCache;
- (BOOL)saveNewABTestCache;
- (void)handleNewABTestList:(id)a0;
- (void)mergeNewABTestItemFromSvr:(id)a0;
- (void)getABTestItemsForRequest:(id)a0;
- (void)onGetABTestExpKeyItems:(id)a0 expiredExpids:(id)a1 isAutoGet:(BOOL)a2;
- (void).cxx_destruct;

@end
