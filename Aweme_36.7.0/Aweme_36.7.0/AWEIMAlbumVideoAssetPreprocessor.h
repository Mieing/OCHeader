@class NSString, AWEIMAlbumAssetPrepareContext, AWEIMAssetResourceLoader, NSMutableArray, NSHashTable;

@interface AWEIMAlbumVideoAssetPreprocessor : NSObject <AWEIMAlbumAssetPreprocessorProtocol, AWEIMAlbumAssetProcessOperationExecutor>

@property (nonatomic) double lastMarkTime;
@property (retain, nonatomic) NSMutableArray *requestIdArr;
@property (retain, nonatomic) NSMutableArray *assetHandlerArr;
@property (retain, nonatomic) NSMutableArray *coverHandlerArr;
@property (retain, nonatomic) AWEIMAlbumAssetPrepareContext *normalContext;
@property (retain, nonatomic) AWEIMAlbumAssetPrepareContext *originContext;
@property (retain, nonatomic) AWEIMAssetResourceLoader *resourceLoader;
@property (retain, nonatomic) NSHashTable *eventListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canAddToOperationQueueWithContext:(id)a0;
- (id)prepareContextWithUseOrigin:(BOOL)a0;
- (void)registEventListener:(id)a0;
- (void)startProcessOperation:(BOOL)a0;
- (void)setupContextWithContext:(id)a0;
- (void)startAssetPreprocess:(BOOL)a0;
- (void)p_trigerVideoPreTranscodeIfNeedWithAsset:(id)a0 context:(id)a1;
- (void)p_trackPreProcessWithUseOrigin:(BOOL)a0;
- (id)preProcessorImageManager;
- (id)preProcessorTokenCert;
- (void)p_toastICloud;
- (void)p_toastICloudIfNeedWithInfo:(id)a0;
- (void)p_genThumbnailDataWithSourceData:(id)a0;
- (void)cancelAssetPreprocess;
- (void)requestAssetCoverWithUseOrigin:(BOOL)a0 handler:(id /* block */)a1;
- (void)requestAssetWithUseOrigin:(BOOL)a0 handler:(id /* block */)a1;
- (void)p_loadSlomoVideoAssetWithContext:(id)a0;
- (void)p_loadVideoAssetWithContext:(id)a0;
- (void)p_loadVideoCoverWithContext:(id)a0;
- (void)p_setupThumbnailAndFirstFrameDataWithImage:(id)a0 context:(id)a1;
- (void)p_setupAndCallbackVideoAssetIfNeed:(id)a0 context:(id)a1;
- (void)p_genFirstFrameDataWithSourceData:(id)a0;
- (void)markPrepareFinish:(BOOL)a0;
- (void)p_setupAndCallbackVideoCoverIfNeed:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
