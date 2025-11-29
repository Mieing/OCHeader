@class NSString, AWESearchGlobalDoodleConfigModel, AWESearchMusicListenMusicModeInfo, AWESearchMusicSelectMusicModeInfo, NSDictionary, NSMutableArray, AWESearchDynamicPreLayoutManager, AWESearchDynamicResourceManager;
@protocol AWESearchMusicsManagerDelegate, AWEHttpTask;

@interface AWESearchMusicsManager : AWESearchBaseManager

@property (weak, nonatomic) id<AWEHttpTask> recommendTask;
@property (weak, nonatomic) id<AWEHttpTask> searchTask;
@property (retain, nonatomic) AWESearchDynamicPreLayoutManager *preLayoutManager;
@property (retain, nonatomic) AWESearchDynamicResourceManager *dynamicResourceManager;
@property (retain, nonatomic) NSMutableArray *musicsHeaderInfoArray;
@property (retain, nonatomic) NSMutableArray *mixedMusicsArray;
@property (copy, nonatomic) NSString *dateString;
@property (weak, nonatomic) id<AWESearchMusicsManagerDelegate> delegate;
@property (nonatomic) BOOL isAuthorSearch;
@property (nonatomic) BOOL isFilterSearch;
@property (nonatomic) long long renderType;
@property (nonatomic) long long tabSelected;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (copy, nonatomic) NSDictionary *searchExtraParams;
@property (retain, nonatomic) NSMutableArray *musicsArray;
@property (retain, nonatomic) AWESearchMusicListenMusicModeInfo *listenMusicModel;
@property (retain, nonatomic) AWESearchMusicSelectMusicModeInfo *selectMusicModel;
@property (copy, nonatomic) NSString *currentLogId;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) id /* block */ beforeBuildRequestBlock;

- (id)currentTimeStr;
- (void)p_handleRefreshServerTimeCost:(id)a0;
- (id)syncGetSearchQishuiMusicFormat;
- (BOOL)hasListenMusicsInfo;
- (BOOL)hasSelectMusicsInfo;
- (void)clearRenderInfo:(BOOL)a0;
- (void)setupCursor:(id)a0;
- (void)setupHasMore:(BOOL)a0;
- (id)getLogPassBack;
- (id)getCorrectModel;
- (id)getCursor;
- (id)getCorrectName;
- (BOOL)getHasMore;
- (void)registerPreprocessClass:(Class)a0;
- (long long)getItemCounts;
- (id)p_extractDynamicPatchListFromCardList:(id)a0;
- (BOOL)shouldIntercept:(id)a0;
- (id)transformModelWithSearchMusicResponse:(id)a0 cursor:(id)a1;
- (BOOL)refreshIntercept:(id)a0;
- (BOOL)loadmoreIntercept:(id)a0;
- (id)getSearchMusicList:(id)a0 cursor:(id)a1;
- (id)getMusicsHeaderInfoArray:(id)a0;
- (BOOL)shouldUseAnnieXWithdynamicPatchModel:(id)a0;
- (void)fetchMusicsWithKeyword:(id)a0 cursor:(id)a1 isPullToRefresh:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchRecommendMusicWithCursor:(id)a0 completion:(id /* block */)a1;
- (void)addNewMusicArray:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)searchMusicWithKeyword:(id)a0 isPullToRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)loadMoreMusic:(id /* block */)a0;
- (void)searchRecommendMusic:(id /* block */)a0;
- (void)loadMoreRecommendMusic:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)removeObject:(id)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)init;

@end
