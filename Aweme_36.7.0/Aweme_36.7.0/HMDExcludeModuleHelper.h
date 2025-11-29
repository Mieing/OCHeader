@class NSMutableArray;

@interface HMDExcludeModuleHelper : NSObject {
    id /* block */ _successCallback;
    id /* block */ _failureCallback;
    id /* block */ _timeoutCallback;
    NSMutableArray *_finishArray;
    NSMutableArray *_successArray;
    NSMutableArray *_failureArray;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mtx;
}

@property double timeout;
@property (readonly, getter=isStarted) BOOL started;
@property (readonly, getter=isFinshed) BOOL finished;

+ (id)excludeModuleForRuntimeClassName:(id)a0;
+ (BOOL)verifyExcludeModuleResultWithRuntimeClassName:(id)a0 res:(BOOL *)a1;

- (BOOL)detectExcludeSuccess_async;
- (id)initWithSuccess:(id /* block */)a0 failure:(id /* block */)a1 timeout:(id /* block */)a2;
- (void)addRuntimeClassName:(id)a0 forDependency:(unsigned long long)a1;
- (void)addClass:(Class)a0 forDependency:(unsigned long long)a1;
- (void)startDetection;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
