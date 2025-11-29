@class NSString, NSFileHandle, NSLock, AWEPublishFileWriteHandle;

@interface AWEPublishFileReadHandle : NSObject

@property (weak, nonatomic) AWEPublishFileWriteHandle *writeHandle;
@property (retain, nonatomic) NSFileHandle *readHandle;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSLock *writeHandleLock;

- (int)fileHeadSize;
- (BOOL)writeFileClosed;
- (unsigned long long)fileEndOffset;
- (void)startMonitorWriteHandleWithExpectOffset:(long long)a0 semaphore:(id)a1;
- (void)stopMonitorWriteHandle;
- (id)initWithWriteHandle:(id)a0;
- (int)fileDescriptor;
- (BOOL)valid;
- (void).cxx_destruct;
- (BOOL)closeAndReturnError:(out id *)a0;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;

@end
