@class AWETeenHotListDataController, AWETeenFeedDoubleColumnSectionViewModel;

@interface AWETeenFeedDoubleColumnViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWETeenHotListDataController *dataController;
@property (retain, nonatomic) AWETeenFeedDoubleColumnSectionViewModel *sectionViewModel;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long dataCount;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (BOOL)isRequestOnAir;
- (void)syncFromDataController;
- (void)removeModelWithAwemeID:(id)a0 animated:(BOOL)a1;
- (void)p_trackQualityColdStartCancelIfNeeded;
- (void)p_addTrackParamsForModelList:(id)a0;
- (void)preloadCoverImageWithModels:(id)a0;
- (void)preloadAuthorAvatarWithModels:(id)a0;
- (void)preloadImagesWithURLs:(id)a0;
- (void)p_trackQualityColdStartErrorIfNeeded:(id)a0;
- (void)p_trackQualityColdStartSuccessIfNeeded;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isValidIndexPath:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
