@class ConcurrentDictionary;

@interface FinderDataService : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
    ConcurrentDictionary *reportMsgReadCGIBlockDict;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)testHello;
- (void)configService:(id)a0 dbPath:(id)a1 prefetchDbDir:(id)a2;
- (void)reportMsgReadCGIAsync:(id)a0 sessionId:(id)a1 reportScene:(int)a2 completion:(id /* block */)a3;
- (void)reportMsgReadCGIAsync:(id)a0 sessionId:(id)a1 reportScene:(int)a2 on:(id)a3 completion:(id /* block */)a4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
