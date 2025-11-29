@class ACCCameraSubscription, ACCSideslipPanelUniTemplateDownloadManager, NSString;
@protocol IESServiceProvider;

@interface ACCSideslipPropPanelEditorDownloadService : NSObject <AWEStickerDownloadManagerObserverProtocol, ACCSideslipPanelUniTemplateDownloadDelegate, ACCPicTemplateDownloadObserverProtocol, ACCSideslipPropPanelDownloadService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCSideslipPanelUniTemplateDownloadManager *uniTemplateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stickerDownloadManager:(id)a0 sticker:(id)a1 downloadProgressChange:(double)a2;
- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)stickerDownloadManager:(id)a0 didBeginDownloadSticker:(id)a1;
- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1;
- (void)downloadDataModelIfNeed:(id)a0;
- (void)prefetchDataModelsIfNeed:(id)a0;
- (id)dataModelDownloadProgress:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)uniTemplateDownloader:(id)a0 didBeginDownloadTemplate:(id)a1;
- (void)uniTemplateDownloader:(id)a0 templateModel:(id)a1 progressDidChange:(double)a2;
- (void)uniTemplateDownloader:(id)a0 didFinishDownload:(id)a1;
- (void)uniTemplateDownloader:(id)a0 didFailDownload:(id)a1 error:(id)a2;
- (void)didBeginDownloadPicTemplate:(id)a0;
- (void)picTemplateModel:(id)a0 downloadProgressChange:(double)a1;
- (void)didFinishDownloadPicTemplate:(id)a0;
- (void)didFailDownloadPicTemplate:(id)a0 withError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
