@interface AffNewLifeSyncManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)dispatchHandleCmdItem:(id)a0 syncScene:(int)a1;
- (void)doSync:(int)a0 cgiBizId:(int)a1 reliableNotifyBuff:(id)a2 syncScene:(int)a3;
- (void)doSyncWithConfig:(int)a0 cgiBizId:(int)a1 syncScene:(int)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
