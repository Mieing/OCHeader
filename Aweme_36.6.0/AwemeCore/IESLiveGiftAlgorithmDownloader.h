@interface IESLiveGiftAlgorithmDownloader : NSObject

- (void)downloadEPModelWithAsset:(id)a0 completion:(id /* block */)a1;
- (BOOL)isRequirementsAndModelsReady:(id)a0;
- (void)trackEPModelDownloadStatus:(id)a0 modelNamesStr:(id)a1 lokiRequirementsArray:(id)a2 error:(id)a3;
- (id)init;

@end
