@interface AWEHPProfileSideBarNetworkManager : NSObject

@property (nonatomic) long long currentCombineSessionID;

- (void)requestSidebarAllModuleDataWithUserID:(id)a0 dataHash:(id)a1 triggerCompletion:(id /* block */)a2 requestCompletion:(id /* block */)a3;
- (void)p_requestLeftSidebarCombineWithUserID:(id)a0 dataHash:(id)a1 sessionID:(long long)a2 completion:(id /* block */)a3;
- (id)init;

@end
