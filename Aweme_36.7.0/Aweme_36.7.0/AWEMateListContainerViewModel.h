@class AWEMateListDataContext, NSString, AWEMateListDataController, AWEMateListSectionModel, NSArray, AWESocialRelationObserver, AFDColorRingTrackSet, AWEMateListEmptySectionViewModel, AWEMateSearchResultSectionViewModel, AWEMateListTipCardSectionViewModel, AWEBaseListSectionViewModel, AWEMateListTracker;
@protocol AWEUserRecommendSectionViewModelProtocol;

@interface AWEMateListContainerViewModel : AWEBaseListViewModel <AWEUserMessage>

@property (retain, nonatomic) AWEMateListDataContext *dataContext;
@property (retain, nonatomic) AWEMateListTracker *tracker;
@property (retain, nonatomic) AWEMateListDataController *dataController;
@property (nonatomic) BOOL isSearchBarEditing;
@property (nonatomic) BOOL isSearching;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL showSearchBar;
@property (nonatomic) long long firstFrameDataSource;
@property (retain, nonatomic) AWEMateListEmptySectionViewModel *emptyViewModel;
@property (retain, nonatomic) AWEMateSearchResultSectionViewModel *searchResultViewModel;
@property (retain, nonatomic) AWEBaseListSectionViewModel<AWEUserRecommendSectionViewModelProtocol> *recommendViewModel;
@property (retain, nonatomic) AWEMateListTipCardSectionViewModel *tipCardViewModel;
@property (retain, nonatomic) AWEMateListSectionModel *sectionModel;
@property (copy, nonatomic) NSArray *simpleMateViewModelList;
@property (copy, nonatomic) NSArray *mateList;
@property (nonatomic) BOOL hasRecommendSection;
@property (retain, nonatomic) AWESocialRelationObserver *mateObserver;
@property (nonatomic) long long lastDataState;
@property (retain, nonatomic) AFDColorRingTrackSet *ringTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)fetchListData;
- (void)setupViewModel;
- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (id)sectionComponents;
- (id)recommendManagerContext;
- (void)refreshRecommendData;
- (void)handleSearchingStatus:(BOOL)a0 searchText:(id)a1;
- (void)showSearchBar:(BOOL)a0;
- (BOOL)hasTipCard;
- (double)tipCardSectionHeight:(double)a0;
- (void)updateSimpleMateViewModelList;
- (BOOL)showRecommendSection:(BOOL)a0;
- (void)updateHasRecommendSection:(BOOL)a0;
- (void).cxx_destruct;
- (id)sectionTitles;
- (void)dealloc;

@end
