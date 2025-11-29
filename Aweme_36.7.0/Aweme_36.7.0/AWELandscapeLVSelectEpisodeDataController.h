@class BFTask, NSString, NSArray, AWEAwemeModel, AWEListDataController, AWEUserModel, AWELongVideoPlusMetaResponse, NSMutableArray, AWELongVideoAlbumModel, NSNumber;
@protocol AWEHttpTask, AWELVSelectEpisodeDataControllerProtocol;

@interface AWELandscapeLVSelectEpisodeDataController : NSObject <AWELandscapeSpiltScreenDataControllerProtocol>

@property (retain, nonatomic) AWEListDataController<AWELVSelectEpisodeDataControllerProtocol> *dataController;
@property (copy, nonatomic) NSString *currentAwemeID;
@property (copy, nonatomic) NSString *currentAlbumID;
@property (copy, nonatomic) NSString *currentEpisodeID;
@property (copy, nonatomic) NSString *currentSeriesID;
@property (retain, nonatomic) NSNumber *currentCursor;
@property (nonatomic) long long episodePageType;
@property (retain, nonatomic) AWELongVideoAlbumModel *currentAlbumModel;
@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) AWELongVideoPlusMetaResponse *metaResponseModel;
@property (retain, nonatomic) BFTask *fetchMetaInfoTask;
@property (retain, nonatomic) NSMutableArray *videoArray;
@property (retain, nonatomic) NSMutableArray *videoPanelArray;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWEUserModel *currentUserModel;
@property (nonatomic) BOOL forwardHasMore;
@property (nonatomic) BOOL reverseHasMore;
@property (nonatomic) BOOL firstFetchSuccess;
@property (retain, nonatomic) id<AWEHttpTask> preloadTask;
@property (nonatomic) BOOL isPreloadingFirstFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestForwardModel:(id /* block */)a0;
- (BOOL)canRequestToReverse;
- (id)fetchDataWithUserID:(id)a0 cursor:(id)a1 requestType:(long long)a2 forwardCount:(long long)a3 reverseCount:(long long)a4 isPreload:(BOOL)a5 itemType:(long long)a6 xiGuaUserId:(id)a7 completion:(id /* block */)a8;
- (BOOL)canRequestToForward;
- (void)requestReverseModel:(id /* block */)a0;
- (void)fetchMetaInfoWithCompletionBlock:(id /* block */)a0;
- (void)updateAwemeListWithRequestType:(long long)a0 completionBlock:(id /* block */)a1;
- (void)forceReloadWithMinCursor:(long long)a0 WithCompletionBlock:(id /* block */)a1;
- (void)updateDataControllerWithAwemeModel:(id)a0;
- (void)updateDataControllerWithAlbumID:(id)a0;
- (void)fetchEpisodeAwemeWithSelectedRank:(long long)a0 completionBlock:(id /* block */)a1;
- (void)updateEpisodeListWithRequestType:(long long)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
