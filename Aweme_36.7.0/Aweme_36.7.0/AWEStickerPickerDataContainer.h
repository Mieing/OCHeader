@class NSArray, NSString, NSMutableDictionary, AWEDouyinStickerCategoryModel, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEStickerPickerDataContainer : NSObject <AWEStickerPickerDataContainerProtocol>

@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL fetchCategorysFromCache;
@property (copy, nonatomic) NSArray *customCategoryArray;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL enableSearch;
@property (readonly, nonatomic) BOOL effectListUseCache;
@property (copy) NSArray *categoryArray;
@property (retain, nonatomic) NSMutableDictionary *effectArrayMap;
@property (retain, nonatomic) AWEDouyinStickerCategoryModel *favoriteCategoryModel;
@property (copy, nonatomic) NSArray *favoriteEffectArray;
@property (retain, nonatomic) NSDictionary *favoriteEffectDict;
@property (retain, nonatomic) AWEDouyinStickerCategoryModel *searchCategoryModel;
@property (retain, nonatomic) AWEDouyinStickerCategoryModel *DIYCategoryModel;
@property (copy, nonatomic) NSArray *insertStickers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataHanleQueue;
@property (retain, nonatomic) NSDictionary *loadEffectRequestExtraParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFetchCategorysFromCache;
- (id)initWithCustomCategoryArray:(id)a0;
- (void)fetchCategoryListForPanelName:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFavoriteEffectDictWithFavoriteEffectArray:(id)a0;
- (id)constructResponseModelWithCustomCategoryArray:(id)a0;
- (BOOL)useCacheInColdTimeWithPanelName:(id)a0 completionHandler:(id /* block */)a1;
- (void)onfetchMergeCategoriesListAndPanelInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)onMergePanelCheckAndPanelInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)onCategoriesCheckUpdateCallback:(BOOL)a0 panelName:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateCacheDataIfNeededWithPanelName:(id)a0;
- (void)p_onCategoriesCheckUpdateCallback:(BOOL)a0 panelName:(id)a1 completionHandler:(id /* block */)a2;
- (void)p_onMergePanelCheckAndPanelInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)p_onfetchMergeCategoriesListAndPanelInfo:(id)a0 completionHandler:(id /* block */)a1;
- (id)cacheParamsWithPanelName:(id)a0 cacheKey:(id)a1;
- (long long)coldTimeForListCache;
- (void).cxx_destruct;
- (id)cacheKey;
- (id)init;

@end
