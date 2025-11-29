@class AWESearchAIGCChunkModel, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWESearchAIGCCacheCmdService : NSObject

@property (retain, nonatomic) NSMutableDictionary *preCacheCmdDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) AWESearchAIGCChunkModel *chunkModel;
@property (retain, nonatomic) NSMutableDictionary *doubleColumnHasMoreRelevantSubCard;
@property (retain, nonatomic) NSMutableDictionary *offsetDictionary;
@property (retain, nonatomic) NSMutableDictionary *awemeIdListDictionary;
@property (retain, nonatomic) NSMutableDictionary *loadMoreCacheDoubleVideoDictionary;

+ (BOOL)isReplaceDoubleVideoDummyCmd:(id)a0;
+ (BOOL)isDoubleVideoCmd:(id)a0;
+ (BOOL)isDoubleVideoLoadMoreCmd:(id)a0;

- (void)updateOffset:(id)a0;
- (void)processAndCacheCommands:(id)a0;
- (void)findAndProcessValidCommandsWithCompletion:(id /* block */)a0;
- (id)sseCommandEndInsertCmdArray:(id)a0;
- (void)insertOtherCommands:(id)a0 loadMoreCmd:(id)a1;
- (void)processSingleCmd:(id)a0;
- (void)updateDoubleColumnHasMore:(id)a0;
- (void)updateAwemeIdList:(id)a0;
- (void)cacheLoadMoreDoubleVideoCmdArray:(id)a0 cmdWaitId:(id)a1;
- (void)clearCmdModel:(id)a0;
- (BOOL)isCacheModelReadyForProcessing:(id)a0;
- (id)buildOtherVideoCommandsFromCacheModel:(id)a0;
- (id)buildMainVideoCommandsFromCacheModel:(id)a0;
- (void)invokeCompletionOnMainThread:(id /* block */)a0 withCommands:(id)a1;
- (void)handleSSECmd:(id)a0 chunkModel:(id)a1 completion:(id /* block */)a2;
- (void)fetchLoadMoreCacheDoubleVideoCmdArray:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllNeedInsertCommands:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
