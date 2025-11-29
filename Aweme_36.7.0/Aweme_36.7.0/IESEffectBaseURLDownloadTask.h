@class NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESEffectBaseURLDownloadTask : IESEffectBaseDownloadTask

@property (copy, nonatomic) NSArray *fileDownloadURLs;
@property (nonatomic) BOOL needUnZip;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ afterDownloadSuccessBlock;
@property (copy, nonatomic) id /* block */ resourceFileExistBlock;
@property (copy, nonatomic) NSDictionary *downloadParameters;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long downloadStatus;
@property (copy, nonatomic) NSDictionary *businessParameters;

- (void)callCompletionBlocks:(BOOL)a0 error:(id)a1 extraInfoDict:(id)a2;
- (void)downloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)cleanUpWithDestination:(id)a0 error:(id *)a1;
- (BOOL)handleDownloadedFileWithDownloadPath:(id)a0 error:(id *)a1;
- (id)initWithFileDownloadURLs:(id)a0 fileMD5:(id)a1 destination:(id)a2 needUnZip:(BOOL)a3;
- (void).cxx_destruct;
- (void)pause;
- (void)startWithCompletion:(id /* block */)a0;
- (void)resume;

@end
