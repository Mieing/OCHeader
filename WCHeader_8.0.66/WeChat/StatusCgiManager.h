@class ConcurrentDictionary;

@interface StatusCgiManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
    ConcurrentDictionary *getSelfHistoryDataBlockDict;
    ConcurrentDictionary *getCustomIconRecommendDataBlockDict;
    ConcurrentDictionary *requestIconConfigListBlockDict;
    ConcurrentDictionary *commitPublishStatusTaskBlockDict;
    ConcurrentDictionary *deleteSelfStatusBlockDict;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getSelfHistoryDataAsync:(id)a0 completion:(id /* block */)a1;
- (void)getSelfHistoryDataAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)getCustomIconRecommendDataAsync:(id)a0 completion:(id /* block */)a1;
- (void)getCustomIconRecommendDataAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)requestIconConfigListAsync:(id)a0 completion:(id /* block */)a1;
- (void)requestIconConfigListAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)commitPublishStatusTaskAsync:(id)a0 completion:(id /* block */)a1;
- (void)commitPublishStatusTaskAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)deleteSelfStatusAsync:(id)a0 completion:(id /* block */)a1;
- (void)deleteSelfStatusAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
