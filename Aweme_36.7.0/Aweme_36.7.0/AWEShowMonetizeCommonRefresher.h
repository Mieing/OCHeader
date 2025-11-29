@class NSString;
@protocol AWEFeedPreloadManagerProtocol;

@interface AWEShowMonetizeCommonRefresher : NSObject <AWEShowMonetizeRefresherProtocol>

@property (retain, nonatomic) id<AWEFeedPreloadManagerProtocol> preloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestAwemeItemWithID:(id)a0 completion:(id /* block */)a1;
- (void)requestAwemeItemsWithIDs:(id)a0 completion:(id /* block */)a1;
- (id)customRequestParamsWithInfo:(id)a0;
- (void)refreshMonetizeContentWithAwemes:(id)a0 info:(id)a1 forMonetizeSceneContainers:(id)a2;
- (void)refreshMonetizeContentWithInfo:(id)a0;
- (void)trackMonetizeLinkResultWithErrorCode:(long long)a0 errorMsg:(id)a1 subErrorCode:(long long)a2 awemeParams:(id)a3 info:(id)a4 monetizeSceneContainer:(id)a5 extraParams:(id)a6;
- (void)trackMonetizeNodeWithName:(id)a0 awemeParams:(id)a1 info:(id)a2 monetizeSceneContainer:(id)a3 extraParams:(id)a4;
- (void)trackMonetizeNodeWithName:(id)a0 aweme:(id)a1 info:(id)a2 monetizeSceneContainer:(id)a3 extraParams:(id)a4;
- (void)trackMonetizeLinkResultWithErrorCode:(long long)a0 errorMsg:(id)a1 subErrorCode:(long long)a2 aweme:(id)a3 info:(id)a4 monetizeSceneContainer:(id)a5 extraParams:(id)a6;
- (void)trackMonetizeWithCurrentMonetizeSceneContainer:(id)a0 info:(id)a1 extraParams:(id)a2 trackHandler:(id /* block */)a3;
- (id)getExtraNormalPriorityItemIDsWithInfo:(id)a0 refreshedMonetizeData:(id)a1;
- (void)trackRefreshResultWithInfo:(id)a0 awemes:(id)a1 error:(id)a2 logID:(id)a3 monetizeSceneContainer:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
