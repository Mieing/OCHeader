@class NSString, BDPStarkRuntime, NSRecursiveLock;

@interface BDPStarkRuntimePreloadObject : NSObject <BDPRuntimePreloadObjectProtocol>

@property BOOL isPreloading;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) BDPStarkRuntime *runtime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)releaseRuntime;
+ (id)getRuntime:(id)a0;
+ (void)preloadRuntime:(id)a0 completion:(id /* block */)a1;
+ (id)sharedObject;

- (void)releaseRuntime;
- (id)getRuntime:(id)a0;
- (void)preloadRuntime:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
