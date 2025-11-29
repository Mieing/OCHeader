@interface AffNewLifeFeedJumpInfoSummaryManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (BOOL)config:(id)a0 uin:(id)a1 clientVersion:(int)a2 isStandalone:(BOOL)a3 isDebug:(BOOL)a4 resetData:(BOOL)a5 adOpen:(BOOL)a6;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
