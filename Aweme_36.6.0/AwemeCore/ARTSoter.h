@class NSMutableDictionary, NSDictionary, ARTMemory, NSMutableArray;

@interface ARTSoter : NSObject {
    struct { BOOL did_mem_warning; } appRunInfo;
    struct RWLock { struct shared_timed_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } __mut_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __gate1_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __gate2_; unsigned int __state_; } __base; } shared_mtx_; } _settingsRWLock;
    struct RWLock { struct shared_timed_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } __mut_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __gate1_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __gate2_; unsigned int __state_; } __base; } shared_mtx_; } _cfgRWLock;
    struct RWLock { struct shared_timed_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } __mut_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __gate1_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __gate2_; unsigned int __state_; } __base; } shared_mtx_; } _observersRWLock;
}

@property (retain, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) ARTMemory *memoryObject;
@property (retain, nonatomic) NSMutableDictionary *projectCfgMap;
@property (retain, nonatomic) NSMutableArray *observers;

+ (id)version;
+ (id)shared;

- (id)businessCfg:(id)a0;
- (void)_updateBizConfig;
- (void)handleDidEnterForeground:(id)a0;
- (void)handleDidReceiveMemoryWarning:(id)a0;
- (void)registerTTNetObserverIfPossible;
- (void)notifyToInitWithSettings:(id)a0;
- (void)notifyToUpdateSettings:(id)a0;
- (void)runBusiness:(id)a0 completion:(id /* block */)a1;
- (void)notifyToRunBusiness:(id)a0 withSettings:(id)a1;
- (BOOL)_queryModelWithBusinessCfg:(id)a0 forced:(BOOL)a1;
- (void)runBusiness:(id)a0 withInput:(id)a1 completion:(id /* block */)a2;
- (void)registerBusinessCfg:(id)a0;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (void)addObserver:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)setup;
- (BOOL)isRunnable:(id)a0;

@end
