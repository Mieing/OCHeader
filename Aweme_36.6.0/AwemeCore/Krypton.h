@class NSMutableDictionary;

@interface Krypton : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rw_lock_;
}

@property (retain, nonatomic) NSMutableDictionary *logFunctions;

+ (long long)EnsureTaskRunnerForCurrentThread;
+ (id)shareInstance;

- (void)registerFontLazyProvider:(id)a0;
- (void)registerLoggerWithKey:(id)a0 function:(id /* block */)a1;
- (id)logFunctionsArray;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;
- (void)appWillTerminate:(id)a0;

@end
