@interface MJAdaptiveMovieTemplateExportSettingsLoader : WCFinderVideoProducerExportSettingsLoader

@property (nonatomic) BOOL hasDecoration;

- (void)loadExportSettingsWithVideoTemplate:(id)a0 assetInfoList:(id)a1 videoAspectRatio:(double)a2 progressBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (id)_defaultExportSettings;
- (id)exportSettingsWithVideoEncodeParams:(id)a0;
- (void)_fetchABAParamsWithFileURL:(id)a0 videoEncodeParams:(id)a1 workingQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_fetchABAParamsWithAsset:(id)a0 videoEncodeParams:(id)a1 workingQueue:(id)a2 completionHandler:(id /* block */)a3;

@end
