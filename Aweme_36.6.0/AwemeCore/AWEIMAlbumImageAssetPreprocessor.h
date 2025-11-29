@class NSString, AWEIMAlbumAssetPrepareContext, NSHashTable, NSMutableArray, AWEIMAssetResourceLoader;

@interface AWEIMAlbumImageAssetPreprocessor : NSObject <AWEIMAlbumAssetPreprocessorProtocol, AWEIMAlbumAssetProcessOperationExecutor>

@property (retain, nonatomic) AWEIMAlbumAssetPrepareContext *normalContext;
@property (retain, nonatomic) AWEIMAlbumAssetPrepareContext *originContext;
@property (retain, nonatomic) NSMutableArray *assetHandlerArr;
@property (retain, nonatomic) NSMutableArray *coverHandlerArr;
@property (retain, nonatomic) NSMutableArray *requestIdArray;
@property (retain, nonatomic) NSHashTable *eventListeners;
@property (retain, nonatomic) AWEIMAssetResourceLoader *resourceLoader;
@property (nonatomic) BOOL isLoadImageFinished;
@property (nonatomic) BOOL isLoadLivePhotoVideoFinished;
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
- (void)p_loadLivePhotoAssetWithContext:(id)a0 useOrigin:(BOOL)a1;
- (void)p_loadImageAssetWithUseOrigin:(BOOL)a0;
- (void)p_setupAndCallbackVideoAssetIfNeed:(id)a0 context:(id)a1 useOrigin:(BOOL)a2;
- (void)markPrepareFinishWithUseOrigin:(BOOL)a0;
- (void)p_trigerVideoPreTranscodeIfNeedWithAsset:(id)a0 context:(id)a1;
- (void)p_loadTaskDidFinishContext:(id)a0 withUseOrigin:(BOOL)a1;
- (void)p_trackPreProcessWithUseOrigin:(BOOL)a0;
- (id)preProcessorImageManager;
- (void)p_loadICloudImageWithOriginImage:(BOOL)a0 loadStartTime:(double)a1;
- (void)p_loadICloudImageWithTargetSize:(BOOL)a0 loadStartTime:(double)a1;
- (void)p_loadLocalImageWithTargetSize:(BOOL)a0 loadStartTime:(double)a1 loadFailBlock:(id /* block */)a2;
- (void)p_onRequestFinishWithData:(id)a0 useOrigin:(BOOL)a1;
- (id)preProcessorTokenCert;
- (struct CGSize { double x0; double x1; })p_getICloudImageTargetSizeWithUseOrigin:(BOOL)a0;
- (void)p_onRequestFinishWithImage:(id)a0 useOrigin:(BOOL)a1;
- (void)p_toastICloud;
- (void)p_toastICloudIfNeedWithInfo:(id)a0;
- (id)p_genUploadDataWithSourceData:(id)a0 useOrigin:(BOOL)a1;
- (void)p_genThumbnailDataWithSourceData:(id)a0;
- (void)cancelAssetPreprocess;
- (void)requestAssetCoverWithUseOrigin:(BOOL)a0 handler:(id /* block */)a1;
- (void)requestAssetWithUseOrigin:(BOOL)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
