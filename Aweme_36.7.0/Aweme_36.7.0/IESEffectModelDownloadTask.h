@class IESManifestManager, IESEffectModel, NSObject;
@protocol OS_dispatch_queue;

@interface IESEffectModelDownloadTask : IESEffectBaseDownloadTask

@property long long downloadStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (weak, nonatomic) IESManifestManager *manifestManager;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (nonatomic) BOOL enableNewDownloader;
@property (nonatomic, getter=isPaused) BOOL paused;

- (void)pauseTask;
- (void)resumeTask;
- (void)callCompletionBlocks:(BOOL)a0 error:(id)a1 extraInfoDict:(id)a2;
- (void)downloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithEffectModel:(id)a0 destination:(id)a1;
- (void)notifyInternalDownloadTaskWithConfigParams:(id)a0;
- (void)updateDispatchQueue:(id)a0;
- (BOOL)p_cleanUpWithDestination:(id)a0 unzipPath:(id)a1 error:(id *)a2;
- (BOOL)p_handleDownloadedFileWithPath:(id)a0 unzipPath:(id)a1 destination:(id)a2 fileMD5:(id)a3 effectModel:(id)a4 error:(id *)a5;
- (void)p_updateDownloadParametersIfNeed:(id)a0;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;
- (void)cancelTask;

@end
