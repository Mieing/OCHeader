@class BDPRuntimeGame, NSString, NSRecursiveLock;

@interface BDPGameRuntimePreloadObject : NSObject <BDPRuntimePreloadObjectProtocol>

@property BOOL isPreloading;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) BDPRuntimeGame *runtime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)releaseRuntime;
+ (id)getRuntime:(id)a0;
+ (void)preloadRuntime:(id)a0 completion:(id /* block */)a1;
+ (id)getRuntimeForPreDefine;
+ (id)sharedObject;

- (void)releaseRuntime;
- (id)getRuntime:(id)a0 type:(long long)a1;
- (void)preloadRuntime:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)getRuntimeForPreDefineWithType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
