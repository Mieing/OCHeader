@class NSString, NSMutableSet, NSRecursiveLock;

@interface WebNetComMgr : MMRootService <MMServiceProtocol> {
    struct shared_ptr<WebNetCallBack> { struct WebNetCallBack *__ptr_; struct __shared_weak_count *__cntrl_; } m_spCallback;
    NSMutableSet *m_TaskCallbackSet;
    NSRecursiveLock *m_CallbackLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (int)StartURLDownloadTask:(id)a0 withUrl:(id)a1 withSavePath:(id)a2 withIPList:(id)a3 withIsGzip:(BOOL)a4 withFileType:(int)a5;
- (int)StartURLDownloadTask:(id)a0 withUrl:(id)a1 withSavePath:(id)a2 withIsGzip:(BOOL)a3 withFileType:(int)a4 withResolveHostPriority:(int)a5 withResolveHostFlag:(unsigned int)a6;
- (void)RegisterTaskCallBack:(id)a0;
- (void)UnRegisterTaskCallBack:(id)a0;
- (void)OnProgressChanged:(id)a0 completedLength:(unsigned long long)a1 totalLength:(unsigned long long)a2;
- (void)OnUploadCompleted:(id)a0 response:(id)a1;
- (void)OnDownloadCompleted:(id)a0 response:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
