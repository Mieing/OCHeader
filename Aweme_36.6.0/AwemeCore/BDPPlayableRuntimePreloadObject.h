@interface BDPPlayableRuntimePreloadObject : BDPGameRuntimePreloadObject

+ (void)bootstrapLoad;
+ (id)getRuntime:(id)a0;
+ (void)preloadRuntime:(id)a0 completion:(id /* block */)a1;
+ (id)getRuntimeForPreDefine;

@end
