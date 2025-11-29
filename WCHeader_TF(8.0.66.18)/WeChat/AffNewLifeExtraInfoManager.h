@class NSMapTable;

@interface AffNewLifeExtraInfoManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
    NSMapTable *fetchJumpInfoCompleteEventMap;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)fetchExtraInfo:(id)a0;
- (void)saveLocalExtraInfo:(id)a0 feedId:(id)a1 scene:(int)a2;
- (void)subscribeFetchJumpInfoCompleteEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeFetchJumpInfoCompleteEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unSubscribeFetchJumpInfoCompleteEvent:(id)a0;
- (id)getLocalJumpInfo:(id)a0 scene:(int)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
