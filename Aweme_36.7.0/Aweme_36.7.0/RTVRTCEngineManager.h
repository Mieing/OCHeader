@class NSObject;
@protocol OS_dispatch_semaphore;

@interface RTVRTCEngineManager : NSObject

@property long long engineCount;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property BOOL isAsyncDealloc;

+ (void)asyncDestroy;
+ (id)createEngine:(id)a0 delegate:(id)a1;
+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
