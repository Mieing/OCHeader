@interface StatusXmlParseManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)dealModTextXml:(id)a0;
- (id)dealNewModifyStatusXml:(id)a0;
- (id)dealStatusLikeMsgXml:(id)a0 fromUsername:(id)a1;
- (id)dealStatusCommentMsgXml:(id)a0;
- (id)createStatusInfoByHistory:(id)a0;
- (id)dealCgiStatusModelData:(id)a0 userName:(id)a1;
- (id)getHashUserNameByParseLikeMsgXml:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
