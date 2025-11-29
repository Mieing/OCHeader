@class NSString, WAFileDescriptorLogic, NSObject;
@protocol OS_dispatch_queue;

@interface WAFileSystemMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *m_workQueue;
    WAFileDescriptorLogic *m_fdLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)openFileWithLocalId:(id)a0 flag:(id)a1 appId:(id)a2 isSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)closeFileWithFileDescriptor:(id)a0 appId:(id)a1 isSync:(BOOL)a2 completion:(id /* block */)a3;
- (void)fstatFileWithFileDescriptor:(id)a0 appId:(id)a1 isSync:(BOOL)a2 completion:(id /* block */)a3;
- (void)readFileWithFileDescriptor:(id)a0 appId:(id)a1 length:(unsigned int)a2 position:(long long)a3 isSync:(BOOL)a4 completion:(id /* block */)a5;
- (void)writeFileWithFileDescriptor:(id)a0 appId:(id)a1 data:(id)a2 position:(long long)a3 isSync:(BOOL)a4 completion:(id /* block */)a5;
- (void)ftruncateWithFileDescriptor:(id)a0 appId:(id)a1 length:(unsigned int)a2 isSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)truncateWithLocalId:(id)a0 appId:(id)a1 length:(unsigned int)a2 isSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)closeFileWithAppId:(id)a0;
- (void)updateFileStatusWithPath:(id)a0 originFileSize:(unsigned long long)a1 appId:(id)a2;
- (void)onAppTaskTerminate:(id)a0;
- (void).cxx_destruct;

@end
