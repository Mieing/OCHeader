@class NSString, NSDictionary, AWEPadPolymericChannelManager, AWEPLVPageContext;

@interface AWEPadPolymericChannelDataController : AWEListDataController

@property (retain, nonatomic) NSString *pageKey;
@property (nonatomic) BOOL hasPreLoadData;
@property (nonatomic) BOOL preLoadRequestOnAir;
@property (retain, nonatomic) NSDictionary *filterMap;
@property (retain, nonatomic) AWEPadPolymericChannelManager *channelManger;
@property (nonatomic) long long offset;
@property (nonatomic) long long requestCount;
@property (copy, nonatomic) NSString *sectionId;
@property (copy, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) AWEPLVPageContext *pageContext;
@property (nonatomic) BOOL enableCache;
@property (copy, nonatomic) id /* block */ onBeginBuildBock;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)cacheStorage;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)filterParams;
- (void)fetchTopicSectionDataWithOffset:(long long)a0 count:(long long)a1 cacheResponse:(BOOL)a2 completion:(id /* block */)a3 preLoad:(BOOL)a4 action:(id)a5;
- (void)fetchTopicSectionDataWithOffset:(long long)a0 count:(long long)a1 cacheResponse:(BOOL)a2 completion:(id /* block */)a3 preLoad:(BOOL)a4 action:(id)a5 needOptimize:(BOOL)a6;
- (void)refreshPolymericWithCompletion:(id /* block */)a0;
- (void)loadMorePolymericWithCompletion:(id /* block */)a0;
- (void)fetchFeedSectionDataWithOffset:(long long)a0 count:(long long)a1 isLoadMore:(BOOL)a2 completion:(id /* block */)a3;
- (void)configViewModelContext:(id)a0 withChannelModel:(id)a1;
- (void)cacheResponseModel:(id)a0 pageKey:(id)a1 completion:(id /* block */)a2;
- (void)filterSectionData:(id)a0 withFilterMap:(id)a1 completion:(id /* block */)a2;
- (id)emptyCell;
- (id)initWithPageKey:(id)a0;
- (void)initFetchWithCompletion:(id /* block */)a0 preLoad:(BOOL)a1;
- (void)initFetchWithCompletion:(id /* block */)a0 needOptimize:(BOOL)a1;
- (void)simplePostWithUrl:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)filterSectionData:(id)a0 withFilterMap:(id)a1;
- (id)discardedArchPageKeySet;
- (void)loadCacheWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
