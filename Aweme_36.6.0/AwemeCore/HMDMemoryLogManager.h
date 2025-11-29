@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMDMemoryLogManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *uploadSemaphore;

+ (id)memoryLogProcessingPath:(BOOL)a0;
+ (id)memoryLogPreparedPath:(BOOL)a0;
+ (id)oomDirectory:(BOOL)a0;
+ (void)deleteMemoryInfo:(id)a0 isExtension:(BOOL)a1;

- (void)uploadPreparedFiles:(BOOL)a0;
- (void)uploadMemoryInfo:(id)a0 sessionID:(id)a1 isExtension:(BOOL)a2;
- (void)updateMemoryLogUploadCountForSessionID:(id)a0 filePath:(id)a1 forceClearData:(BOOL)a2;
- (id)memoryLogUploadFailCountDict;
- (void)cleanupIdentifier:(id)a0;
- (void)uploadMemoryInfo:(BOOL)a0;
- (BOOL)shouldUploadMemoryLog;
- (void)deleteLastMemoryInfo:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
