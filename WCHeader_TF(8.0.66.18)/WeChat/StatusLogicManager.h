@interface StatusLogicManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)updateIconConfigList:(id)a0;
- (id)getIcon:(id)a0;
- (id)getTopicGroupListData:(id)a0;
- (id)getStatusName:(id)a0;
- (id)findValidStatusIconAction:(id)a0;
- (id)getStatusItemIconDescDataWithReq:(id)a0;
- (void)updateClusterPresentType:(id)a0;
- (id)getStatusPublishIconGroupWithReq:(id)a0;
- (id)genStatusFeedMediaLocalFilePath:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
