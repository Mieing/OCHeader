@class LynxTemplateData, NSString, LynxTemplateBundle, NSMapTable, NSObject;
@protocol OS_dispatch_group, LynxLogicExecutor;

@interface LynxViewGroup : LynxBaseConfigurator {
    LynxTemplateBundle *_templateBundle;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _nextLynxViewId;
    NSMapTable *_viewMap;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _viewMapLock;
    NSObject<OS_dispatch_group> *_fetch_task;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) LynxTemplateData *globalProps;
@property (readonly, nonatomic) LynxTemplateBundle *templateBundle;
@property (retain, nonatomic) id<LynxLogicExecutor> logicExecutor;

- (void)setTemplateBundle:(id)a0;
- (id)getLynxViewById:(int)a0;
- (id)initWithUrl:(id)a0 templateBundle:(id)a1;
- (id)initWithUrl:(id)a0 templateFetcher:(id)a1;
- (void)fetchTemplate;
- (int)generateNextLynxViewID;
- (void)addLynxView:(int)a0 view:(id)a1;
- (id)init:(id)a0 templateBundle:(id)a1 templateFetcher:(id)a2;
- (BOOL)isTemplateBundleReady;
- (void)removeLynxView:(int)a0;
- (void).cxx_destruct;

@end
