@class IESManifestManager, IESEffectAlgorithmModel, NSObject;
@protocol OS_dispatch_queue;

@interface IESAlgorithmModelDownloadTask : IESEffectBaseDownloadTask

@property long long downloadStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (weak, nonatomic) IESManifestManager *manifestManager;
@property (retain, nonatomic) IESEffectAlgorithmModel *algorithmModel;
@property (nonatomic) BOOL enableNewDownloader;
@property (nonatomic, getter=isPaused) BOOL paused;
@property unsigned long long downloadCount;

- (void)pauseTask;
- (void)resumeTask;
- (void)callCompletionBlocks:(BOOL)a0 error:(id)a1 extraInfoDict:(id)a2;
- (void)downloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)p_handleDestinationIfNeed:(id)a0 modelMD5:(id)a1 downloadPath:(id)a2 traceLog:(id)a3;
- (BOOL)p_handleDownloadedFileWithPath:(id)a0 destination:(id)a1 modelMD5:(id)a2 algorithmModel:(id)a3 error:(id *)a4;
- (id)initWithAlgorithmModel:(id)a0 destination:(id)a1;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;
- (void)cancelTask;

@end
