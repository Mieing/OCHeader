@class NSString, NSMutableDictionary, AWEAwemeModel, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface AWERelatedRecomendListDataController : AWEListDataController <AWEDCFeedDataChunkControllerProtocol, AWEDCFeedTidyModelOuterDataControllerProtocol, AWEDCFeedTidyModelInnerDataControllerProtocol, AWERelatedRecomendListDataControllerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *relatedRecomendDataQueue;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL isInitFetch;
@property (nonatomic) double requestTimeStamp;
@property (copy, nonatomic) id /* block */ initFetchCompletion;
@property (nonatomic) BOOL isPrefetching;
@property (copy, nonatomic) id /* block */ chunkResponseBlock;
@property (copy, nonatomic) id /* block */ chunkCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *relatedAwemeId;
@property (copy, nonatomic) NSString *relatedAwemeAuthorId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *relatedAuthorSecUid;
@property (nonatomic) BOOL dcPanelCacheEnable;
@property (nonatomic) BOOL enableInnerFlowTrackInfo;
@property (nonatomic) double cachedTimestamp;
@property (copy, nonatomic) id /* block */ requestWillBeginCallBack;
@property (copy) NSNumber *requestTime;
@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)loadMoreWithLogExtra:(id)a0 withCompletion:(id /* block */)a1;
- (void)prefetchChunkDataWithLogExtra:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeAwemeWithItemID:(id)a0;
- (void)requestFullAwemeWithTidyAweme:(id)a0 completion:(id /* block */)a1;
- (id)getQueryParamsWithTidyAweme:(id)a0;
- (id)getBodyParamsWithTidyAweme:(id)a0;
- (id)getPreLogIDWithTidyAweme:(id)a0;
- (id)getPreItemFromWithTidyAweme:(id)a0;
- (id)getPreItemIDsWithTidyAweme:(id)a0;
- (void)fetchChunkDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2 chunkCompletion:(id /* block */)a3;
- (void)loadMoreChunkDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2 chunkCompletion:(id /* block */)a3;
- (void)refreshChunkDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2 chunkCompletion:(id /* block */)a3;
- (void)initFetchInnerDataWithTidyAweme:(id)a0 outerDataController:(id)a1 completion:(id /* block */)a2;
- (void)requestFullAwemeWithTidyAweme:(id)a0 outerDataController:(id)a1 completion:(id /* block */)a2;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 withLogExtra:(id)a2 completion:(id /* block */)a3;
- (void)fetchChunkDataWithRequestParams:(id)a0 args:(id)a1 logExtra:(id)a2 prefetch:(BOOL)a3 completion:(id /* block */)a4 chunkCompletion:(id /* block */)a5;
- (id)commonParamsWithCount:(long long)a0 type:(long long)a1 logExtra:(id)a2;
- (id)chunkCommonBody;
- (void)fetchChunkDataWithURLParams:(id)a0 bodyParams:(id)a1 logExtra:(id)a2 completion:(id /* block */)a3 chunkCompletion:(id /* block */)a4;
- (id)chunkRequestConfig;
- (id)chunkCommonHeader;
- (void)applyTrackInfoWithAwemeList:(id)a0;
- (void)trackTitleToastShowSuccessForFollowWithRecItemNum:(unsigned long long)a0 isFromFollow:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;
- (id)requestUrl;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
