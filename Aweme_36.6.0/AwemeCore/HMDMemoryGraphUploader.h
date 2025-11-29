@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMDMemoryGraphUploader : NSObject <HMDURLProvider, HMDInspectorDiskSpaceDistribution> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _fileLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *uploadSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)removableFileDirectoryPath;
+ (void)cleanupIdentifier:(id)a0;
+ (id)memoryGraphProcessingPath;
+ (id)memoryGraphPreparedPath;
+ (id)checkEnvParamsWithIdentifier:(id)a0;
+ (id)memoryGraphRootPath;

- (id)URLHostProviderConfigHosts:(id)a0;
- (id)URLHostProviderInjectedHosts:(id)a0;
- (id)URLHostProviderDefaultHosts:(id)a0;
- (id)zipFileCounterDic;
- (void)increaseCounterWithIdentifier:(id)a0;
- (void)cleanCounterWithIdentifier:(id)a0;
- (BOOL)removeFileImmediately:(id)a0;
- (id)URLPathProviderURLPath:(id)a0;
- (void)uploadPreparedFiles;
- (void)uploadMemoryGraphIfNeeded;
- (void)deleteAndUploadMemoryGraphIfNeeded;
- (void)prepareOnProcessingDirectory;
- (void)cleanPreparedFiles;
- (BOOL)safeCreateZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1;
- (id)fetchPendingIdentifiers;
- (BOOL)deleteZipFileIfNeedWithIdentifier:(id)a0;
- (void)internal_uploadIdentifier:(id)a0 activateManner:(id)a1 finishBlock:(id /* block */)a2;
- (void)checkServerStateWithPrepareCount:(unsigned long long)a0 activateManner:(id)a1 finishBlock:(id /* block */)a2;
- (void)asyncCheckAndUpload;
- (void)asyncDeleteAndUpload;
- (void)uploadIdentifier:(id)a0 activateManner:(id)a1 needCheckServer:(BOOL)a2 finishBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldEncrypt;

@end
