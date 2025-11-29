@interface AffNewLifeMmkvManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (BOOL)updateNewLifeConfig:(id)a0;
- (id)getNewLifeConfig;
- (BOOL)savePrepareAttr:(id)a0 flag:(unsigned long long)a1;
- (unsigned long long)getPrepareAttr:(id)a0 defValue:(unsigned long long)a1;
- (BOOL)setStringSync:(id)a0 key:(id)a1 value:(id)a2;
- (id)getStringSync:(id)a0 key:(id)a1 defValue:(id)a2;
- (BOOL)setInt32Sync:(id)a0 key:(id)a1 value:(int)a2;
- (int)getInt32Sync:(id)a0 key:(id)a1 defValue:(int)a2;
- (BOOL)setLongSync:(id)a0 key:(id)a1 value:(unsigned long long)a2;
- (unsigned long long)getLongSync:(id)a0 key:(id)a1 defValue:(unsigned long long)a2;
- (BOOL)setBoolSync:(id)a0 key:(id)a1 value:(BOOL)a2;
- (BOOL)getBoolSync:(id)a0 key:(id)a1 defValue:(BOOL)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
