@class AWELandscapeLayerDataController, NSString, AWEAwemeModel, NSMutableArray, AWEUserModel;
@protocol AWEHttpTask;

@interface AWELandScapePostDataController : NSObject <AWELandscapeSpiltScreenDataControllerProtocol>

@property (retain, nonatomic) AWELandscapeLayerDataController *dataController;
@property (nonatomic) BOOL isRequestLeft;
@property (nonatomic) BOOL isRequestRight;
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
- (void)updateByResponseModel:(id)a0 currentModel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
