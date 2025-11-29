@class NSArray, ACCAEEffectPanelDataSource, NSString, IESCategoryModel;
@protocol ACCAEEffectPanelCategoryModelDelegate, ACCAEEffectTrackerService;

@interface ACCAEEffectPanelCategoryModel : NSObject <ACCGenericEffectCategoryModel>

@property (retain, nonatomic) IESCategoryModel *categoryModel;
@property (nonatomic) long long loadStatus;
@property (retain, nonatomic) NSArray *stickers;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long sortingPosition;
@property (weak, nonatomic) id<ACCAEEffectPanelCategoryModelDelegate> delegate;
@property (retain, nonatomic) ACCAEEffectPanelDataSource *dataSource;
@property (retain, nonatomic) id<ACCAEEffectTrackerService> tracker;
@property (readonly, nonatomic) NSString *categoryKey;
@property (readonly, nonatomic) unsigned long long categoryType;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFrame;
@property (nonatomic) double titleFontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame;
@property (nonatomic) double cachedWidth;
@property (nonatomic) BOOL isDefaultLandingTab;
@property (nonatomic) double startLoadListTime;
@property (nonatomic) double finishLoadListTime;
@property (nonatomic) double startRequestListTime;
@property (nonatomic) double finishRequestListTime;
@property (nonatomic) double finishRenderFirstScreenIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (BOOL)isTeenMode;
- (void)markAsReaded;
- (BOOL)shouldShowYellowDot;
- (BOOL)enablePagingLoad;
- (id)categoryImage;
- (id)categoryNameForTrack;
- (BOOL)enableSectionMode;
- (BOOL)hasLoadFailed;
- (void)loadStickerListIfNeeded;
- (id)initWithIESCategoryModel:(id)a0;
- (void)fetchEffectListIfLoadMore:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isEqualToCategoryModel:(id)a0;
- (void)resetAllTrackTimeStamp;
- (void).cxx_destruct;
- (BOOL)isFavorite;
- (id)sections;
- (BOOL)isLoading;
- (id)categoryName;
- (BOOL)isSearch;

@end
