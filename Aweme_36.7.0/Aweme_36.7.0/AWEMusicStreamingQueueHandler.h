@class NSString, NSPointerArray, NSMutableSet, AWEMusicPlayerQueue, NSMutableArray, NSArray;
@protocol AWEMusicStreamingQueueDelegate;

@interface AWEMusicStreamingQueueHandler : NSObject <AWEMusicPlayerQueueDelegate, AWEMusicPreferencesDelegate>

@property (retain, nonatomic) NSMutableArray *p_originalList;
@property (retain, nonatomic) NSPointerArray *listeners;
@property (weak, nonatomic) id<AWEMusicStreamingQueueDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *uuidSet;
@property (weak, nonatomic) AWEMusicPlayerQueue *queueModel;
@property (retain, nonatomic) NSString *queueName;
@property (nonatomic) unsigned long long tailCountForLoadMore;
@property (nonatomic) BOOL isRequestingMoreMusic;
@property (readonly, nonatomic) NSArray *originalList;
@property (retain, nonatomic) NSMutableArray *filteredOrigIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendModels:(id)a0;
- (void)removeModel:(id)a0;
- (id)convertType:(id)a0;
- (void)queueDidUpdatePlayList:(id)a0;
- (void)queue:(id)a0 didChangeLoopModeFromLoopMode:(unsigned long long)a1;
- (void)queueDidChangeCurrentPlayIndex:(id)a0;
- (BOOL)isModelInQueue:(id)a0;
- (BOOL)hasForceInsert;
- (void)filterModelsWithModels:(id)a0 handler:(id /* block */)a1;
- (void)resetWithModels:(id)a0 currentModel:(id)a1;
- (void)loadMoreResponseBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)loadMoreCompletion:(id /* block */)a0;
- (void)removeOriginalModel:(id)a0;
- (void)addOriginalModel:(id)a0;
- (id)titleForPlayer;
- (id)subTitleForPlayer;
- (void)loadMoreIfNeed;
- (id)initWithQueueModel:(id)a0 delegate:(id)a1;
- (void)preferencesQueueLoopModeChanged;
- (void)reactLoadMoreFeedWithResponseCount:(long long)a0 responseFilteredCount:(long long)a1;
- (BOOL)needRecordLoopMode;
- (void)changeEnableCycleToFirst:(BOOL)a0;
- (void)noticeListerChangedOriginalModels:(id)a0;
- (void)modelsChangeOfOperation:(unsigned long long)a0;
- (id)filterModels:(id)a0;
- (void)resetOriginalModels:(id)a0;
- (void)addUuidSet:(id)a0;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;
- (BOOL)hasMore;
- (void)setup;

@end
