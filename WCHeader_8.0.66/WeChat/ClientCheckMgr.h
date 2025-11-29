@class NSString, NSLock, NSMutableSet;

@interface ClientCheckMgr : MMRootService <IMsgExt, MMKernelExt, MMServiceProtocol> {
    NSLock *_lock;
    NSMutableSet *_setImageList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (void)onAuthOK;
- (void)test;
- (id)getImageList;
- (void)registerAddImageCallBack;
- (void)checkConsistency:(id)a0;
- (void)reportFileConsistency:(id)a0 fileName:(id)a1 offset:(unsigned int)a2 bufferSize:(unsigned int)a3 seq:(unsigned int)a4;
- (void)checkHook:(id)a0;
- (void)checkHookWithSeq:(unsigned int)a0;
- (void)reportAppList:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)addImage:(const char *)a0;
- (id)arrToString:(id)a0;
- (id)runningProcesses;
- (id)expandFilePath:(id)a0;
- (void).cxx_destruct;

@end
