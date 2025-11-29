@class AWELVideoLibraryPageContext, AWELVideoLibraryResultSectionViewModel, AWELVideoLibraryFilterDataController, AWELVideoLibraryEmptySectionViewModel, AWELVideoLibraryResultDataController;

@interface AWELVideoLibraryViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWELVideoLibraryResultSectionViewModel *resultSectionViewModel;
@property (retain, nonatomic) AWELVideoLibraryEmptySectionViewModel *emptySectionViewModel;
@property (retain, nonatomic) AWELVideoLibraryFilterDataController *filterDataController;
@property (retain, nonatomic) AWELVideoLibraryResultDataController *resultDataController;
@property (nonatomic) long long state;
@property (retain, nonatomic) AWELVideoLibraryPageContext *context;

+ (Class)aAWETheaterViewControllerCommonAdapterClass;

- (void)fetchListData;
- (void)loadMoreListData;
- (id)aAWETheaterViewControllerCommonAdapter;
- (void)preloadResultDataIfNeeded:(long long)a0;
- (void)resetFilterAndTrigResultRefreshWith:(id)a0;
- (void)p_fetchResultData;
- (void)p_preloadCoverImage;
- (void).cxx_destruct;
- (id)init;

@end
