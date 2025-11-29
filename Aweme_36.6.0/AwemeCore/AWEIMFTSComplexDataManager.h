@class NSObject, NSString, AWEIMFTSComplexDataSyncManager, IESIMFTSDataManager, AWEIMFTSKeywordProcessor, NSDictionary, AWEIMFTSComplexDataCache;
@protocol AWEIMFTSTrackProtocol, OS_dispatch_queue;

@interface AWEIMFTSComplexDataManager : NSObject <IESIMFTSComplexDataInterface>

@property (retain, nonatomic) id<AWEIMFTSTrackProtocol> trackCenter;
@property (retain, nonatomic) IESIMFTSDataManager *dataManager;
@property (retain, nonatomic) AWEIMFTSComplexDataSyncManager *syncManager;
@property (retain, nonatomic) AWEIMFTSComplexDataCache *dataCache;
@property (retain, nonatomic) AWEIMFTSKeywordProcessor *keywordProcessor;
@property (copy, nonatomic) NSString *searchTaskId;
@property (copy, nonatomic) NSString *searchSingleTaskId;
@property (copy, nonatomic) NSDictionary *contentTypePriorityMap;
@property (readonly, nonatomic) NSDictionary *extTypePriorityMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setupForCurrentUser;
- (void)searchWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)executeCheckpointWithCompletion:(id /* block */)a0;
- (void)p_cancelTask:(id)a0;
- (id)textInfoForResult:(id)a0;
- (id)p_allUserResultOfList:(id)a0;
- (id)p_retrievalUserUidFromList:(id)a0;
- (id)p_filteredAbandonResultOfList:(id)a0 inTypes:(id)a1;
- (id)p_filteredDuplicateResultOfList:(id)a0;
- (id)p_sortedResultOfList:(id)a0;
- (void)p_calculateDisplayInfoOfFTSData:(id)a0 keyword:(id)a1;
- (long long)p_comparePriorityOfSubtypeA:(long long)a0 subtypeB:(long long)a1;
- (id)p_resultOfFTSData:(id)a0 keyword:(id)a1;
- (void)p_processSearchResults:(id)a0 dataList:(id)a1 keyword:(id)a2 limitPertType:(long long)a3 monitorArray:(id)a4 taskId:(id)a5 completion:(id /* block */)a6;
- (id)getAllResultsWithFTSDatas:(id)a0;
- (id)getResultOfFTSDatas:(id)a0 keyword:(id)a1;
- (id)sortUserResultDatas:(id)a0 keyword:(id)a1;
- (void)searchInConversation:(id)a0 withConfig:(id)a1 completion:(id /* block */)a2;
- (void)removeDynamicUID;
- (id)p_multiplyFliterAndSortData:(id)a0 inTypes:(id)a1 WithMonitorArray:(id)a2;
- (void)p_processSearchResults:(id)a0 dataList:(id)a1 keyword:(id)a2 limitPertType:(long long)a3 monitorArray:(id)a4 completion:(id /* block */)a5;
- (void)processFTSDatas:(id)a0 inTypes:(id)a1 keyword:(id)a2 monitorArray:(id)a3 completion:(id /* block */)a4;
- (void)processComplexResultWithSortedFTSDatas:(id)a0 userResults:(id)a1 keyword:(id)a2 limitPertType:(long long)a3 monitorArray:(id)a4 taskId:(id)a5 completion:(id /* block */)a6;
- (void)processSingleResultWithSortedFTSDatas:(id)a0 userResults:(id)a1 keyword:(id)a2 monitorArray:(id)a3 taskId:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)clear;

@end
