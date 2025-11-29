@class NSString, NSArray, FTSWeShopIndexMgr, MMLRUCache;

@interface FTSWeShopMgr : NSObject <FTSTopHitDelegate, FTSWeShopSearchTaskDelegate, IEcsWeShopExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *lastQueryText;
@property (copy, nonatomic) NSString *lastQueryTextForDetail;
@property (copy, nonatomic) NSArray *lastQueryKeywords;
@property (copy, nonatomic) NSArray *lastQueryKeywordsForDetail;
@property (retain, nonatomic) FTSWeShopIndexMgr *indexMgr;
@property (retain, nonatomic) MMLRUCache *searchTasksCache;
@property (retain, nonatomic) MMLRUCache *detailSearchTasksCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterTopHitsWithWeShopItems:(id)a0;

- (BOOL)isTopHitWeShopReady;
- (id)tophit_getWeShopItemForKey:(id)a0;
- (id)getLastQueryHighlightKeywordsWithShopName:(id)a0;
- (id)getLastQueryHighlightKeywordsForDetailWithShopName:(id)a0;
- (id)getHighlightKeywordsWithKeywords:(id)a0 queryText:(id)a1 shopName:(id)a2;
- (void)dealloc;
- (id)init;
- (void)initIndexMgr:(id)a0;
- (void)asyncSearch:(id)a0;
- (void)asyncSearchForDetail:(id)a0;
- (BOOL)hasSearchDone:(id)a0;
- (BOOL)hasSearchDoneForDetail:(id)a0;
- (void)cancelAllSearch;
- (void)cancelAllSearchForDetail;
- (id)getResultItems:(id)a0;
- (id)getResultItemsForDetail:(id)a0;
- (id)searchTaskForSearchText:(id)a0 forceNew:(BOOL)a1;
- (id)detailSearchTaskForSearchText:(id)a0 forceNew:(BOOL)a1;
- (void)updateLastQueryKeywords;
- (void)updateLastQueryKeywordsForDetail;
- (void)weShopSearchTask:(id)a0 didChangeResultItems:(id)a1;
- (void)onWeShopLocalDataUpdate;
- (void).cxx_destruct;

@end
