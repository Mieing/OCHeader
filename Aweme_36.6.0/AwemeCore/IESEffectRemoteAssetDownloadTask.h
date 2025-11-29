@class IESEffectRemoteAssetModel;

@interface IESEffectRemoteAssetDownloadTask : IESEffectBaseDownloadTask

@property (retain, nonatomic) IESEffectRemoteAssetModel *assetModel;

- (void)downloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)p_cleanUpWithUnzipPath:(id)a0 error:(id *)a1;
- (void)trackRemoteAssetDownloadWithResultError:(id)a0 beginTime:(double)a1;
- (BOOL)p_handleDownloadedFileWithPath:(id)a0 unzipPath:(id)a1 destination:(id)a2 fileMD5:(id)a3 error:(id *)a4;
- (id)initWithAssetModel:(id)a0 destination:(id)a1;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;

@end
