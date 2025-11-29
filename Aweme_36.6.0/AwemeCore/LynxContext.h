@class NSString, NSMutableDictionary, LynxUIOwner, LynxUIIntersectionObserverManager;
@protocol LUIBodyView;

@interface LynxContext : NSObject {
    struct shared_ptr<lynx::shell::JSProxyDarwin> { struct JSProxyDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } proxy_;
    struct shared_ptr<lynx::shell::LynxLayoutProxyDarwin> { struct LynxLayoutProxyDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } layout_proxy_;
}

@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) NSMutableDictionary *extentionModules;
@property (weak, nonatomic) LynxUIOwner *uiOwner;
@property (weak, nonatomic) LynxUIIntersectionObserverManager *intersectionManager;
@property (weak, nonatomic) id<LUIBodyView> containerView;
@property (nonatomic) int instanceId;
@property (nonatomic) BOOL hasCustomGenericFetcher;
@property (nonatomic) BOOL hasCustomMediaFetcher;
@property (nonatomic) BOOL hasCustomTemplateFetcher;

+ (void)lynxLazyLoad;

- (id)getLynxView;
- (void)sendGlobalEvent:(id)a0 withParams:(id)a1;
- (void)runOnTasmThread:(id /* block */)a0;
- (id)getJSModule:(id)a0;
- (void)setJSProxy:(const void *)a0;
- (void)BDLynxBridge_dealloc;
- (void)reportLynxError:(id)a0;
- (void)setLayoutProxy:(const void *)a0;
- (id)getLynxRuntimeId;
- (void)reportModuleCustomError:(id)a0;
- (void)runOnJSThread:(id /* block */)a0;
- (void)runOnLayoutThread:(id /* block */)a0;
- (void)setExtensionModule:(id)a0 forKey:(id)a1;
- (id)getExtensionModuleByKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainerView:(id)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
