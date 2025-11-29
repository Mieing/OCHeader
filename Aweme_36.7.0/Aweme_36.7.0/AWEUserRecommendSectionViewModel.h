@class AWEUserRecommendBaseCellViewLayout, NSString, NSSet, AWEUserRecommendManagerContext;
@protocol AWEUserRecommendTableViewModelProtocol, AWEUserRecommendSectionViewModelDelegate;

@interface AWEUserRecommendSectionViewModel : AWEBaseListSectionViewModel <AWEUserRecommendTableViewModelDelegate, AWEUserRecommendSectionViewModelProtocol>

@property (retain, nonatomic) AWEUserRecommendBaseCellViewLayout *cellLayout;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> basicViewModel;
@property (nonatomic) BOOL hasAction;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL hidesHeader;
@property (nonatomic) BOOL hidesHeaderDivider;
@property (nonatomic) BOOL enableClose;
@property (readonly, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) BOOL enablePrivacyButton;
@property (weak, nonatomic) id<AWEUserRecommendSectionViewModelDelegate> delegate;
@property (readonly) AWEUserRecommendManagerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long recommendDataState;
@property (copy, nonatomic) NSSet *userIDsToFilter;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)fetchSectionData;
- (void)setUserIDsToFilter:(id)a0 filterExisting:(BOOL)a1;
- (void)trackListStartRefreshing;
- (void)trackListStartLoadingMore;
- (void)trackListFinishRefreshing;
- (void)trackListFinishLoadingMore;
- (void)trackListDismissedBeforeAppear;
- (void)trackListLoadingViewAppear;
- (BOOL)hasMoreRecommendData;
- (void)loadMoreSectionData;
- (void)viewModelDidRefresh:(id)a0;
- (void)viewModelDidLoadMore:(id)a0 indexes:(id)a1;
- (void)viewModel:(id)a0 didRemoveModelsAtIndexes:(id)a1;
- (void)viewModel:(id)a0 didInsertModelsAtIndexes:(id)a1;
- (void)viewModel:(id)a0 didUpdateModelsAtIndexes:(id)a1;
- (void)p_updateDataStateIfNeeded;
- (BOOL)p_shouldUseReloadAnimation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
