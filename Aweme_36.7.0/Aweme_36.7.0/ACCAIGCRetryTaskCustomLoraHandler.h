@interface ACCAIGCRetryTaskCustomLoraHandler : ACCAIGCRetryTaskBaseHandler

+ (unsigned long long)retryType;
+ (void)checkAndBuildRetryPublishViewModelAndStartWithInfo:(id)a0 scene:(unsigned long long)a1;
+ (void)checkRetryInfoAndStartRetryProcess:(id)a0 publishViewModel:(id)a1;
+ (id)initiateNewRepositoryFromOldRepository:(id)a0;
+ (void)modifyUserInputIfNeededWithPublishViewModel:(id)a0 info:(id)a1 completion:(id /* block */)a2;
+ (void)fetchImageAndSaveToLocalTmpPath:(id)a0 completion:(id /* block */)a1;
+ (void)createLoraInfoAndRouteToCustomLoraPage:(id)a0;

@end
