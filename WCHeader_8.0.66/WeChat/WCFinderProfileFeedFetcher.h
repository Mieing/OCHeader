@class WCFinderStreamLoadingState, WCFinderUserPageParams, NSString, NSMutableArray, WCFinderProfileADPlugin;

@interface WCFinderProfileFeedFetcher : NSObject <WCFinderProfileDataFetcher>

@property (nonatomic) unsigned long long minTid;
@property (nonatomic) BOOL isLoadingFristPage;
@property (retain, nonatomic) NSMutableArray *waitFetchingBlock;
@property (retain, nonatomic) NSMutableArray *tempStorageUpFeeds;
@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (retain, nonatomic) WCFinderStreamLoadingState *pullingState;
@property (nonatomic) BOOL filterLiveFeed;
@property (nonatomic) BOOL dropFeedForFirstPageFetched;
@property (nonatomic) BOOL mininLocalPostingFeed;
@property (nonatomic) BOOL isAuthor;
@property (retain, nonatomic) WCFinderUserPageParams *params;
@property (retain, nonatomic) NSString *dataScene;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) unsigned long long firstPageRequestCount;
@property (retain, nonatomic) WCFinderProfileADPlugin *adPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)username;
- (void)loadCache:(id)a0;
- (void)fillDataItemFromHomeCGI:(id)a0 feedArray:(id)a1;
- (void)requestFristPage:(id)a0 complete:(id /* block */)a1;
- (void)requestNextPage:(id)a0 complete:(id /* block */)a1;
- (void)requestPointedPage:(id)a0 complete:(id /* block */)a1;
- (void)requestPrePage:(id)a0 originFeedArray:(id)a1 complete:(id /* block */)a2;
- (void)_upFetchPageData:(id)a0 originFeedArray:(id)a1 isFirst:(BOOL)a2 complete:(id /* block */)a3;
- (void)_fetchPageData:(id)a0 firstPage:(BOOL)a1 complete:(id /* block */)a2;
- (void)wakeWaitBlock;
- (id)userPageFetcher:(BOOL)a0 isFirstPage:(BOOL)a1;
- (id)_userPageFetcher:(BOOL)a0 isFirstPage:(BOOL)a1;
- (id)_userPagePullFetcher;
- (id)copy;
- (id)_mergePostingFeedWithDataItemArray:(id)a0;
- (void)profileRequestFirstPage:(id)a0 complete:(id /* block */)a1;
- (void)profileRequestNextPage:(id)a0 complete:(id /* block */)a1;
- (void)profileRequestPrePage:(id)a0 complete:(id /* block */)a1;
- (id)profileLoadingState;
- (id)profilePullingState;
- (void)fetchDiagnosisData:(id)a0;
- (void).cxx_destruct;

@end
