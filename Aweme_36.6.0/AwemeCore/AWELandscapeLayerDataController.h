@protocol AWEHttpTask;

@interface AWELandscapeLayerDataController : AWEBaseDataController

@property (weak, nonatomic) id<AWEHttpTask> currentTask;

- (id)fetchDataWithUserID:(id)a0 cursor:(id)a1 requestType:(long long)a2 forwardCount:(long long)a3 reverseCount:(long long)a4 isPreload:(BOOL)a5 itemType:(long long)a6 xiGuaUserId:(id)a7 completion:(id /* block */)a8;
- (id)filteredModelWithResponseModel:(id)a0;
- (void).cxx_destruct;

@end
