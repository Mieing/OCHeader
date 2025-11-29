@class NSCache, NSString, NSHashTable;
@protocol ACCEditServiceProtocol, IESServiceProvider;

@interface AWETextTemplateDownloadManager : NSObject <AWEStickerDownloadManagerObserverProtocol>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSCache *stickerDownloadProgressCache;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSHashTable *preloadTextTemplates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fontFilePath:(id)a0;
+ (id)catchResources:(id)a0;
+ (id)resourcePanelName:(id)a0;
+ (void)downloadEffectWithResource:(id)a0 completion:(id /* block */)a1;
+ (id)manager;

- (void)stickerDownloadManager:(id)a0 sticker:(id)a1 downloadProgressChange:(double)a2;
- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)downloadStickerWithCheckDependencyResourceIfNeed:(id)a0;
- (void)downloadStickerIfNeed:(id)a0;
- (id)stickerDownloadProgress:(id)a0;
- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1;
- (void)notifyObserversNeedUpdateCellDownloadedSticker:(id)a0;
- (void)notifyObserversDidChangeProgressWithSticker:(id)a0 progress:(double)a1;
- (void)notifyObserversDidBeginDownloadSticker:(id)a0;
- (void)notifyObserversDidFinishDownloadSticker:(id)a0 error:(id)a1;
- (void)updatePropCellDownloaded:(id)a0;
- (void)notifyObserversDidFinishDownloadSticker:(id)a0 extraParams:(id)a1;
- (void)p_modernDownloadSticker:(id)a0;
- (void)p_downloadSticker:(id)a0;
- (void)removePreloadTextTemplate:(id)a0;
- (void)downloadFontIfNeed:(id)a0 sticker:(id)a1;
- (void)addPreloadTextTemplate:(id)a0;
- (void)p_downloadStickerWithCheckDependencyResource:(id)a0;
- (void)monitorOpenEditorDurationWithDuration:(double)a0 success:(BOOL)a1 error:(id)a2 logTypeStr:(id)a3;
- (id)neededExtraPrama:(id)a0;
- (void)prefetchStickersIfNeeded:(id)a0;
- (BOOL)isPrefetchSticker:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end
