@class AWEIMAlbumAssetPrepareContext, NSMutableArray, NSString;

@interface AWEIMCameraVideoPreprocessor : NSObject <AWEIMAlbumAssetPreprocessorProtocol>

@property (retain, nonatomic) AWEIMAlbumAssetPrepareContext *normalContext;
@property (retain, nonatomic) NSMutableArray *coverHandlerArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canAddToOperationQueueWithContext:(id)a0;
- (id)prepareContextWithUseOrigin:(BOOL)a0;
- (void)cancelAssetPreprocess;
- (void)requestAssetCoverWithUseOrigin:(BOOL)a0 handler:(id /* block */)a1;
- (void)requestAssetWithUseOrigin:(BOOL)a0 handler:(id /* block */)a1;
- (void)p_trackPreProcessResult;
- (void)p_genThumbnailDataWithSourceImage:(id)a0;
- (void)p_genFirstFrameDataWithSourceImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
