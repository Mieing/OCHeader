@class ACCSideslipPanelUniTemplateDownloadManager, NSString, NSHashTable;

@interface ACCGenericEffectDownloadManager : NSObject <AWEStickerDownloadManagerObserverProtocol, ACCSideslipPanelUniTemplateDownloadDelegate, ACCGenericEffectDownloadManagerProtocol>

@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) ACCSideslipPanelUniTemplateDownloadManager *uniTemplateDownloadManager;
@property (weak, nonatomic) ACCSideslipPanelUniTemplateDownloadManager *oneClickFilmDownloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)stickerDownloadManager:(id)a0 didBeginDownloadSticker:(id)a1;
- (void)stickerDownloadManager:(id)a0 needUpdateCellDownloadedSticker:(id)a1;
- (void)stickerDownloadManager:(id)a0 changePrefetchToNormal:(id)a1;
- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1;
- (void)setDownloadManagerForOneClickFilm:(id)a0;
- (void)uniTemplateDownloader:(id)a0 didBeginDownloadTemplate:(id)a1;
- (void)uniTemplateDownloader:(id)a0 didFinishDownload:(id)a1;
- (void)uniTemplateDownloader:(id)a0 didFailDownload:(id)a1 error:(id)a2;
- (void)uniTemplateDownloader:(id)a0 changePrefetchToNormal:(id)a1;
- (id)downloadProgressOfModel:(id)a0;
- (void)setDownloadManagerForSideslip:(id)a0;
- (void)prefetchTemplateListIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end
