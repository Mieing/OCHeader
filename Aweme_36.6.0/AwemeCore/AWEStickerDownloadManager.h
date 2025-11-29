@class AWEStickerDownloadStrategy, NSMutableDictionary, NSHashTable;

@interface AWEStickerDownloadManager : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableDictionary *stickerDownloadProgressDic;
@property (retain, nonatomic) AWEStickerDownloadStrategy *downloadStragegy;
@property (readonly, nonatomic) long long currentDownloadCount;
@property (readonly, nonatomic) long long currentPrefetchCount;

+ (id)manager;

- (void)downloadStickerIfNeed:(id)a0;
- (id)stickerDownloadProgress:(id)a0;
- (void)prefetchStickerSortListWithCurrentFocusIndex:(long long)a0;
- (void)p_newDownloadStickersIfNeed:(id)a0 isPrefetch:(BOOL)a1;
- (BOOL)isPrefetch:(id)a0;
- (void)notifyObserversNeedUpdateCellDownloadedSticker:(id)a0;
- (void)p_recordDownloadProgress:(double)a0 effectModel:(id)a1;
- (void)notifyObserversDidChangeProgressWithSticker:(id)a0 progress:(double)a1;
- (id)p_progressWithEffectModel:(id)a0;
- (void)notifyObserversChangePrefetchStatusWithSticker:(id)a0;
- (BOOL)p_hasDownloadWithEffectModel:(id)a0;
- (void)p_downloadBindingMusicIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)notifyObserversDidBeginDownloadSticker:(id)a0;
- (void)p_removeDownloadRecordWithEffectModel:(id)a0;
- (void)notifyObserversDidFinishDownloadSticker:(id)a0;
- (void)notifyObserversDidFinishDownloadSticker:(id)a0 error:(id)a1;
- (void)prefetchStickersIfNeed:(id)a0;
- (void)updatePropCellDownloaded:(id)a0;
- (void)p_downloadSticker:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end
