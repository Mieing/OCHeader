@protocol FPLifecycleOwner, ACCComponentController, FPUIComponent, FPCoordinatorExecutor;

@interface FPComponentExtension : NSObject

@property (weak, nonatomic) id<FPUIComponent> component;
@property (readonly, nonatomic) id<FPCoordinatorExecutor> coordinatorExecutor;
@property (readonly, nonatomic) id<FPLifecycleOwner> lifecycleOwner;
@property (readonly, nonatomic) id<ACCComponentController> componentController;

+ (id)component:(id)a0 getOrCreateFeatureBizService:(Class)a1;
+ (id)component:(id)a0 getOrCreateBizServicePublicAPI:(id)a1;
+ (id)component:(id)a0 submodelReader:(id)a1;
+ (id)component:(id)a0 layoutAction:(id)a1;
+ (id)component:(id)a0 submodelRepoService:(id)a1;
+ (id)component:(id)a0 getIfExistsBizServicePublicAPI:(id)a1;
+ (id)component:(id)a0 getIfExistsFeatureBizService:(Class)a1;
+ (id)component:(id)a0 waitUntilReady:(id /* block */)a1 forIdentifier:(id)a2;

- (void).cxx_destruct;
- (id)initWithComponent:(id)a0;

@end
