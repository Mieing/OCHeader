@interface MMLiveBeautyResourceFetcherRootAction : MMLiveFlowLinearDelegatingActionBase

@property (nonatomic) unsigned long long pendingTaskCount;

+ (id)createInstance;

- (void)fetchBeautyResourcesInPackages:(id)a0 completionBlock:(id /* block */)a1;
- (void)fetchBeautyResourcesInDescriptor:(id)a0 completionBlock:(id /* block */)a1;
- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (id)resourcePackageWithBackendModel:(id)a0;

@end
