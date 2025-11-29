@class NSArray, ACCGenericEffectPanelDataSource, NSString, CKGenericTemplateCategoryInfo;
@protocol ACCGenericEffectPanelCategoryModelDelegate;

@interface ACCGenericEffectPanelCategoryModel : NSObject <ACCGenericEffectCategoryModel>

@property (retain, nonatomic) CKGenericTemplateCategoryInfo *categoryInfo;
@property (nonatomic) unsigned long long categoryType;
@property (weak, nonatomic) id<ACCGenericEffectPanelCategoryModelDelegate> delegate;
@property (weak, nonatomic) ACCGenericEffectPanelDataSource *dataSource;
@property (readonly, nonatomic) long long categoryID;
@property (nonatomic) BOOL isLoading;
@property (nonatomic, getter=hasLoadFailed) BOOL loadFailed;
@property (nonatomic) BOOL hasFetchedData;
@property (copy, nonatomic) NSArray *stickers;
@property (copy, nonatomic) NSArray *sections;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFrame;
@property (nonatomic) double titleFontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame;
@property (nonatomic) double cachedWidth;
@property (nonatomic) long long cursor;
@property (nonatomic) long long longCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isRealLivePhoto;
@property (nonatomic) BOOL needFilterAIGCTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (BOOL)isTeenMode;
- (BOOL)isHot;
- (void)markAsReaded;
- (BOOL)shouldShowYellowDot;
- (BOOL)enablePagingLoad;
- (id)categoryImage;
- (id)categoryNameForTrack;
- (BOOL)enableSectionMode;
- (void)loadStickerListIfNeeded;
- (id)createGenericEffectCellModel:(id)a0;
- (id)initWithGenericTemplateCategoryInfo:(id)a0 categoryType:(unsigned long long)a1;
- (void)fetchFavoriteListLoadMore:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchGenericEffectList;
- (id)p_createCategoryStickers:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFavorite;
- (id)categoryName;
- (BOOL)isSearch;

@end
