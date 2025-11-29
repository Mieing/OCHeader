@interface AWEPaySwiftImpl.CCMWorkerManager : NSObject <AWEPaySwiftImpl.CCMScriptModuleDelegate, ErrorCallback, MessageCallback> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_worker;
    void /* unknown type, empty encoding */ completion;
}

- (void)callbackResultWithId:(long long)a0 result:(id)a1;
- (void)callbackErrorWithId:(long long)a0 errCode:(long long)a1 result:(id)a2;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleError:(id)a0;

@end
