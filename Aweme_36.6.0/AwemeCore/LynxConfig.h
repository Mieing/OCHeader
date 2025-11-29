@class NSMutableDictionary, LynxComponentScopeRegistry;
@protocol LynxTemplateProvider;

@interface LynxConfig : NSObject {
    struct shared_ptr<lynx::piper::ModuleFactoryDarwin> { struct ModuleFactoryDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } _moduleFactoryPtr;
}

@property (readonly, nonatomic) id<LynxTemplateProvider> templateProvider;
@property (retain, nonatomic) LynxComponentScopeRegistry *componentRegistry;
@property (retain, nonatomic) NSMutableDictionary *contextDict;

+ (id)globalConfig;
+ (void)prepareGlobalConfig:(id)a0;

- (void)registerUI:(Class)a0 withName:(id)a1;
- (void)registerModule:(Class)a0 param:(id)a1;
- (void)registerContext:(id)a0 sessionInfo:(id /* block */)a1;
- (void)registerMethodAuth:(id /* block */)a0;
- (void)registerShadowNode:(Class)a0 withName:(id)a1;
- (struct shared_ptr<lynx::piper::ModuleFactoryDarwin> { struct ModuleFactoryDarwin *x0; struct __shared_weak_count *x1; })moduleFactoryPtr;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithProvider:(id)a0;
- (void)registerModule:(Class)a0;

@end
