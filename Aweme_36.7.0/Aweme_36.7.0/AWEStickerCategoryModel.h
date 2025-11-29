@class NSArray, NSString, IESCategoryModel;
@protocol AWEStickerCategoryModelDelegate, AWEStickerCategoryModelDataSource;

@interface AWEStickerCategoryModel : NSObject <ACCStickerListLoadCapability, NSCopying>

@property (readonly, nonatomic) BOOL enablePagingLoad;
@property (readonly, nonatomic) long long fetchCount;
@property (readonly, nonatomic) long long pageCount;
@property (readonly, nonatomic) BOOL isFirstPageLoading;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) unsigned long long loadState;
@property (readonly, nonatomic) NSArray *totalList;
@property (readonly, nonatomic) NSArray *lastList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic, getter=hasLoadFailed) BOOL loadFailed;
@property (retain, nonatomic) IESCategoryModel *categoryModel;
@property (weak, nonatomic) id<AWEStickerCategoryModelDelegate> delegate;
@property (weak, nonatomic) id<AWEStickerCategoryModelDataSource> dataSource;
@property (copy, nonatomic) NSString *panelName;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryNameForTrack;
@property (copy, nonatomic) NSArray *normalIconUrls;
@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL isSearch;
@property (readonly, nonatomic) BOOL isDIY;
@property (readonly, nonatomic) BOOL shouldShowYellowDot;
@property (copy, nonatomic) NSArray *stickers;
@property (copy, nonatomic) NSArray *orignalStickers;
@property (nonatomic) BOOL enableSectionMode;
@property (copy, nonatomic) NSArray *sections;
@property (nonatomic) double cachedWidth;
@property (copy, nonatomic) id /* block */ stickerFilterBlock;
@property (nonatomic, getter=isStickerListLoadFromCache) BOOL stickerListLoadFromCache;
@property (nonatomic) double stickerListStartTime;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)markAsReaded;
- (void)loadStickerListIfNeeded;
- (id)initWithIESCategoryModel:(id)a0;
- (id)pagingLoader;
- (void)setStickers:(id)a0 withFilter:(BOOL)a1;
- (void)postDidLoadStickersWithError:(id)a0;
- (void)updateHasMore:(BOOL)a0 sortingPosition:(long long)a1 cursor:(long long)a2;
- (void)stickerCategoryPagingLoader:(id)a0 loadListWithPageCount:(long long)a1 cursor:(long long)a2 sortingPosition:(long long)a3 completionHandler:(id /* block */)a4;
- (void)stickerCategoryPagingLoader:(id)a0 didFinishLoadWithError:(id)a1;
- (void)fetchFavorite;
- (void)fetchDIY;
- (void)fetchEffectList;
- (void)handleWithFavoirteEffectList:(id)a0 error:(id)a1;
- (void)fetchFavoriteInternal;
- (void)handleDIYEffectList:(id)a0 customEffects:(id)a1 error:(id)a2;
- (void)handleWithEffectList:(id)a0 error:(id)a1;
- (void)fetchEffectListInternal;
- (BOOL)isHotTab;
- (BOOL)isPropInCurrentCategory:(id)a0;
- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
