@class ACCCameraSubscription, NPGenericTemplateService_OC, NSString, NSMutableSet, ACCSideslipPanelUniTemplateDownloadManager;

@interface ACCEditPicTemplateDownloader : NSObject <AWEStickerDownloadManagerObserverProtocol, ACCSideslipPanelUniTemplateDownloadDelegate, AWEStudioPicTemplateDownloadProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCSideslipPanelUniTemplateDownloadManager *uniTemplateDownloadManager;
@property (retain, nonatomic) NSMutableSet *prefetchingTemplatesSet;
@property (retain, nonatomic) NPGenericTemplateService_OC *genericTemplateService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloader;

- (void)stickerDownloadManager:(id)a0 sticker:(id)a1 downloadProgressChange:(double)a2;
- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)stickerDownloadManager:(id)a0 didBeginDownloadSticker:(id)a1;
- (void)stickerDownloadManager:(id)a0 needUpdateCellDownloadedSticker:(id)a1;
- (BOOL)isTemplateReady:(id)a0;
- (void)stickerDownloadManager:(id)a0 changePrefetchToNormal:(id)a1;
- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1;
- (void)checkTemplateResourceReady:(id)a0 completion:(id /* block */)a1;
- (BOOL)isPrefetch:(id)a0;
- (void)uniTemplateDownloader:(id)a0 didBeginDownloadTemplate:(id)a1;
- (void)uniTemplateDownloader:(id)a0 templateModel:(id)a1 progressDidChange:(double)a2;
- (void)uniTemplateDownloader:(id)a0 didFinishDownload:(id)a1;
- (void)uniTemplateDownloader:(id)a0 didFailDownload:(id)a1 error:(id)a2;
- (void)uniTemplateDownloader:(id)a0 changePrefetchToNormal:(id)a1;
- (void)removeTemplateModelPrefetched:(id)a0;
- (void)recordTemplateModelPrefetched:(id)a0;
- (void)notifyObserversDidBeginDownloadTemplate:(id)a0;
- (void)notifyObserversDidFinishDownloadTemplate:(id)a0;
- (void)notifyObserversDidFinishDownloadTemplate:(id)a0 error:(id)a1;
- (void)notifyObserversDidChangeProgressWithTemplate:(id)a0 progress:(double)a1;
- (void)notifyObserversChangePrefetchToNormalTemplate:(id)a0;
- (void)notifyObserversNeedUpdateCellDownloadTemplate:(id)a0;
- (void)downloadPicTemplateModel:(id)a0;
- (void)preDownloadPicTemplateModels:(id)a0;
- (id)downloadProgressWithPicTemplate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
