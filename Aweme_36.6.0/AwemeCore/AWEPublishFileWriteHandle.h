@class NSString, NSFileHandle, NSLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEPublishFileWriteHandle : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long fileEndOffset;
@property (retain, nonatomic) NSFileHandle *writeHandle;
@property (retain, nonatomic) NSLock *monitorLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sema;
@property (nonatomic) long long expectedOffset;
@property (nonatomic) int fileHeadSize;

+ (id)createFilePathWithFolder:(id)a0;

- (BOOL)startMonitorWithExpectedOffset:(long long)a0 semaphore:(id)a1;
- (void)stopMonitorOffset;
- (BOOL)storeFileEndOffsetAndCloseWithReturnError:(out id *)a0;
- (void)logFileInfo;
- (void).cxx_destruct;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (id)initWithFilePath:(id)a0;
- (void)dealloc;
- (BOOL)closed;
- (void)clean;

@end
