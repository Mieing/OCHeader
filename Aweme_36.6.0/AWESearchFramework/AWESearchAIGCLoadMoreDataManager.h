@class NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWESearchAIGCLoadMoreDataManager : NSObject

@property (retain, nonatomic) NSMutableArray *doubleVideoCmdArray;
@property (nonatomic) long long maxDisplayCount;
@property (nonatomic) BOOL doubleColumnSubCardHasMore;
@property (nonatomic) long long currentShowVideoCount;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *rootCardId;
@property (copy, nonatomic) NSString *keyWord;
@property (copy, nonatomic) NSString *cmdWaitId;
@property (copy, nonatomic) NSString *searchUniqueId;
@property (copy, nonatomic) NSString *doubleColumnSearchQuery;
@property (nonatomic) long long conversationRank;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSDictionary *logPb;
@property (retain, nonatomic) NSMutableArray *awemeIdList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoCmdQueue;
@property (retain, nonatomic) NSMutableArray *doubleVideoCacheNodes;

- (void)updateParams:(id)a0;
- (void)onAwemeDiggNotification:(id)a0;
- (void)cacheDoubleVideoCmdArray:(id)a0;
- (id)getDoubleVideoAwemeData;
- (void)handleLoadMoreWithWaitCmdCount:(long long)a0 perDisplayCount:(long long)a1 bindViewModel:(id)a2 completion:(id /* block */)a3;
- (void)insertDoubleVideoCmdArray:(id)a0;
- (void)updateAwemeIdList;
- (id)tryShowWithLocalData:(long long)a0;
- (void)removeInsertedVideoCmdArray:(id)a0;
- (id)buildBaseParam;
- (BOOL)needRequestDoubleColumn;
- (void)loadMoreWithCmdCount:(long long)a0 requestCompletion:(id /* block */)a1;
- (void)updateLocalModelWithResponse:(id)a0;
- (void)requestDoubleVideoLoadMoreWithParams:(id)a0 successCompletion:(id /* block */)a1 failureCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)updateOffset;

@end
