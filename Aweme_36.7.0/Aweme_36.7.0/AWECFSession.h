@class NSMutableDictionary, AWECFEradicates, NSMutableSet, AWECFButtercups, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, BDQBDelegate;

@interface AWECFSession : NSObject {
    long long _usingEngine;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _vmLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _initialLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _loadSuccessLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _loadedlazyModulesLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskSetLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchListQueue;
@property (nonatomic) BOOL willStartFetchList;
@property (nonatomic) BOOL didStartSDK;
@property (retain, nonatomic) NSMutableDictionary *betterInfo;
@property (retain, nonatomic) NSMutableArray *loadedlazyModules;
@property (retain, nonatomic) NSMutableArray *loadedlazyDylibs;
@property (retain, nonatomic) NSMutableSet *taskSet;
@property (retain, nonatomic) id<BDQBDelegate> delegate;
@property (retain, nonatomic) AWECFEradicates *conf;
@property (retain, nonatomic) AWECFButtercups *refreshStrategy;

+ (void)loadLazyModuleWithName:(id)a0;
+ (void)fetchQuaterbacks;
+ (void)startWithConfiguration:(id)a0 delegate:(id)a1;
+ (void)clearAllLocalQuaterback;
+ (void)bd_sizeForChildContentContainer;
+ (void)fetchServerData;
+ (void)loadFileAtPath:(id)a0 config:(id)a1;
+ (void)loadZipFileAtPath:(id)a0;
+ (id)bd_requestData:(id /* block */)a0;
+ (id)loadedlazyModules;
+ (id)loadedlazydylibs;
+ (BOOL)fetchServerDataIfNeed;
+ (id)statusMap:(id)a0;
+ (void)_loadModuleAtPath:(id)a0;
+ (void *)lookupFunctionByName:(id)a0 inModuleNamed:(id)a1 moduleVersion:(int)a2;
+ (BOOL)registerCustomHookFunctionForSegment:(id)a0 section:(id)a1 handler:(id /* block */)a2;
+ (void)startTest;
+ (id)sharedMain;
+ (void)loadFileAtPath:(id)a0;
+ (BOOL)handleOpenURL:(id)a0;

- (id)queryVersionFromData:(id)a0;
- (void)moduleData:(id)a0 willLoadWithError:(id)a1;
- (BOOL)bd_systemLayoutFittingSizeDidChangeForChildContentContainer;
- (void)bd_sizeForChildContentContainer;
- (void)bd_viewWillTransitionToSize:(id)a0 bd_willTransitionToTraitCollection:(id /* block */)a1;
- (id)bd_requestData:(id /* block */)a0;
- (void)didFinishFetchQuaterbackList:(id)a0;
- (void)lockInitial;
- (void)unlockInitial;
- (void)bd_preferredContentSizeDidChangeForChildContentContainer:(long long)a0;
- (BOOL)needLoadLocalQuaterbacks;
- (void)loadLocalAllModules;
- (BOOL)isBradyRunning;
- (void)lockVM;
- (void)engineLog:(const char *)a0;
- (void)engineExceptionHandler:(id)a0;
- (void)engineLoadModuleError:(id)a0 moduleName:(id)a1 moduleVersion:(int)a2 duration:(long long)a3;
- (void)unlockVM;
- (void)lockLazyModules;
- (void)unlockLazyModules;
- (void)loadDYCLazyDylibModule:(id)a0 bd_willTransitionToTraitCollection:(id /* block */)a1;
- (void)_loadDYCModule:(id)a0 bd_willTransitionToTraitCollection:(id /* block */)a1;
- (void)lockTaskSet;
- (void)unlockTaskSet;
- (id)allLoadedQuaterbacks;
- (BOOL)isEngineRunning;
- (BOOL)isJSContextRunning;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
