@class NSRecursiveLock, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WAFileDescriptorLogic : MMObject <WAAppTaskMgrExt> {
    NSMutableDictionary *m_dicAppId2DicFileWrap;
    NSObject<OS_dispatch_queue> *m_workQueue;
    NSRecursiveLock *m_genFdLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned int)openFileWithLocalId:(id)a0 flag:(id)a1 appId:(id)a2 retErrMsg:(id *)a3 retFd:(id *)a4;
- (id)getFileWrapWithOuterFileDescriptor:(id)a0 appId:(id)a1;
- (BOOL)addFileWrap:(id)a0 fd:(id)a1;
- (void)removeFileWrapWithFd:(id)a0 appId:(id)a1;
- (BOOL)isOpenedFileReachLimitWithAppId:(id)a0;
- (unsigned int)closeFileWithFileDescriptor:(id)a0 appId:(id)a1 retErrMsg:(id *)a2;
- (unsigned int)fstatFileWithFileDescriptor:(id)a0 appId:(id)a1 retErrMsg:(id *)a2 stat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a3;
- (unsigned int)readFileWithFileDescriptor:(id)a0 appId:(id)a1 length:(unsigned int)a2 position:(long long)a3 retErrMsg:(id *)a4 retData:(id *)a5;
- (unsigned int)writeFileWithFileDescriptor:(id)a0 appId:(id)a1 data:(id)a2 position:(long long)a3 retErrMsg:(id *)a4;
- (void)closeFileWithAppId:(id)a0;
- (unsigned int)ftruncateWithFileDescriptor:(id)a0 appId:(id)a1 length:(unsigned int)a2 retErrMsg:(id *)a3;
- (unsigned int)truncateWithLocalId:(id)a0 appId:(id)a1 length:(unsigned int)a2 retErrMsg:(id *)a3;
- (id)getFilePathWithOuterFileDescriptor:(id)a0 appId:(id)a1;
- (id)genFdWithAppId:(id)a0;
- (int)getFlagWithString:(id)a0;
- (void).cxx_destruct;

@end
