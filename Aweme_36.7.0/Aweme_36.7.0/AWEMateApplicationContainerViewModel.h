@class NSError, NSNumber, AWEMateApplicationContainerDataContext, NSArray, AWEMateListEmptySectionViewModel, NSMutableArray, AWEMateListTipCardSectionViewModel, AWEBaseListSectionViewModel, AWEMateUnFoldFooterSectionViewModel;
@protocol AWEUserRecommendSectionViewModelProtocol;

@interface AWEMateApplicationContainerViewModel : AWEBaseListViewModel

@property (retain, nonatomic) NSNumber *needCloseTip;
@property (retain, nonatomic) AWEMateApplicationContainerDataContext *dataContext;
@property (nonatomic) BOOL hasFetchedData;
@property (retain, nonatomic) NSError *applicationError;
@property (retain, nonatomic) NSMutableArray *totalMates;
@property (nonatomic) long long unreadTotalCount;
@property (nonatomic) long long maxTimestamp;
@property (nonatomic) long long minTimestamp;
@property (retain, nonatomic) NSArray *matesSectionVMs;
@property (retain, nonatomic) AWEBaseListSectionViewModel<AWEUserRecommendSectionViewModelProtocol> *recommendSectionVM;
@property (retain, nonatomic) AWEMateUnFoldFooterSectionViewModel *unfoldFooterVM;
@property (nonatomic) BOOL hideUnfoldView;
@property (retain, nonatomic) NSMutableArray *displayMates;
@property (retain, nonatomic) NSMutableArray *foldMates;
@property (nonatomic) BOOL hasUnfolded;
@property (retain, nonatomic) AWEMateListTipCardSectionViewModel *tipCardViewModel;
@property (retain, nonatomic) AWEMateListEmptySectionViewModel *emptyViewModel;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) BOOL showLoadingView;
@property (nonatomic) BOOL hideLoadMoreFooter;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL enableShowTip;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void)setupBinding;
- (void)gotoWhoCanSendMateApplicationToMe;
- (void)closeTip;
- (void)tryShowEmptyOrTryUnfoldAfterDeleteModels:(id)a0;
- (id)p_recommendManagerContext;
- (void)tryUnfoldNotice;
- (void)constructionSections;
- (void)refreshMateApplicationList:(id /* block */)a0;
- (BOOL)canShowTip;
- (void)updateRecommendFilterUID:(id)a0;
- (void)buildMateApplicationList:(BOOL)a0;
- (void)buildCellViewModels:(id)a0;
- (void)clearMateApplicationList;
- (void)separateFoldMates;
- (void)separateMateApplicationSection:(id)a0 isRefresh:(BOOL)a1;
- (void)updateUnfoldViewHiddenState;
- (BOOL)shouldUnfold;
- (long long)minFoldMatesCount;
- (void)unfoldNotice;
- (void)requestMateListAfterUnfold;
- (id)yellowBarExitRule;
- (void).cxx_destruct;
- (id)init;

@end
