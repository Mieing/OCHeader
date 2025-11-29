@class NSMutableDictionary, _AWEStickerQuickFindArray;

@interface AWEStickerDownloadStrategy : NSObject

@property (readonly, nonatomic) unsigned long long currentShouldDownloadingType;
@property (retain, nonatomic) _AWEStickerQuickFindArray *userCurrentTrigglerArr;
@property (retain, nonatomic) _AWEStickerQuickFindArray *userTrigglerArr;
@property (retain, nonatomic) _AWEStickerQuickFindArray *prefetchBackgroundArr;
@property (retain, nonatomic) NSMutableDictionary *paramsTable;
@property (readonly, nonatomic) long long currentDownloadCount;
@property (readonly, nonatomic) long long currentPrefetchCount;

- (void)syncPauseDownloadedEffectsIfNeed:(id)a0;
- (void)prefetchStickerSortListWithCurrentFocusIndex:(long long)a0;
- (BOOL)isPrefetch:(id)a0;
- (void)prefetchStickers:(id)a0 throwBefore:(BOOL)a1;
- (void)downloadStickers:(id)a0;
- (id)p_filterUselessParams:(id)a0;
- (void)p_downloadStickersByUser:(id)a0;
- (void)p_prefetchStickersBackground:(id)a0 throwBefore:(BOOL)a1;
- (id)p_stringWithArray:(id)a0;
- (BOOL)p_isSameArrayWithParams:(id)a0 stickers:(id)a1;
- (BOOL)p_containsSticker:(id)a0;
- (void)p_updateDownloadParamEffectModel:(id)a0 downloadParam:(id)a1;
- (id)p_downloadParamWithEffectModel:(id)a0;
- (id)p_currentShouldDownloadArray;
- (void)p_removeSticker:(id)a0;
- (void)p_execFirstAddListEventIfNeeded:(id)a0;
- (void)p_firstStartWithParam:(id)a0;
- (void)p_printCurrentContext;
- (void)p_preloadWithParam:(id)a0;
- (BOOL)p_needDownloadNextWithLastSticker:(id)a0;
- (void)p_downloadNextIfNeeded;
- (void)p_printCurrentParamMap;
- (void).cxx_destruct;

@end
