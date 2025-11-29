@interface AWELeftSideBarNetworkManager : NSObject

@property (nonatomic) double lastDynamicRequestTimeInterval;
@property (nonatomic) BOOL dynamicDataRequesting;
@property (nonatomic) long long currentDynamicRequestSessionID;
@property (nonatomic) double lastCombineRequestTimeInterval;
@property (nonatomic) BOOL combineDataRequesting;
@property (nonatomic) long long currentCombineSessionID;

- (double)leftSidebarCombineDataRequestInterval;
- (void)p_requestLeftSidebarCombineWithUserID:(id)a0 dataHash:(id)a1 sessionID:(long long)a2 triggerScene:(id)a3 businessID:(id)a4 completion:(id /* block */)a5;
- (double)leftSidebarDynamicDataRequestInterval;
- (void)requestLeftSidebarAllModuleDataWithUserID:(id)a0 dataHash:(id)a1 needFrequency:(BOOL)a2 triggerScene:(id)a3 businessID:(id)a4 triggerCompletion:(id /* block */)a5 requestCompletion:(id /* block */)a6;
- (void)requestLeftSidebarDynamicModuleDataWithBusinessIDList:(id)a0 extraParamDict:(id)a1 triggerCompletion:(id /* block */)a2 requestCompletion:(id /* block */)a3;
- (id)init;

@end
