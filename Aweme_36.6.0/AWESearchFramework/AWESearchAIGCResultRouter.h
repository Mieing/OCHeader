@interface AWESearchAIGCResultRouter : NSObject

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)routerForResultViewControllerClass;
+ (BOOL)enableAIGCPreRequestOptimize;
+ (void)preRequestWithParams:(id)a0 resetRouterParams:(id)a1 isLogin:(BOOL)a2;
+ (void)invokeAIGCPanelContainerByAdd:(id)a0 aigcVC:(id)a1;
+ (void)invokeAIGCPanelContainer:(id)a0 aigcVC:(id)a1;
+ (void)checkNavigationControllerContainVC:(id)a0 navgationVC:(id)a1;
+ (void)configTransitionType:(id)a0;
+ (void)configDeepThinkWithRouterParams:(id)a0;
+ (BOOL)isSameQueryRepeatEntryWithResultRouterParams:(id)a0;
+ (BOOL)enableSearchAIFeatureUpload;
+ (id)clientAIFeatureSequence;
+ (id)debug_diffParams;
+ (long long)uploadAIFeatureCountMax;
+ (BOOL)isHasLocalHistoryStorageWithResultRouterParams:(id)a0;
+ (void)customTransition:(id)a0 previousParams:(id)a1;
+ (BOOL)keepAliveEnabled;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;

@end
