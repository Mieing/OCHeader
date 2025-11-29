@class NSString, IESECTracker, IESECStoreSearchDataController, IESECStoreFilterSectionController, IESECWinSearchResultGoodsListSectionController, IESECWinGoodsBackgroundView, IESECWinEmptySectionController, IESECAtom;
@protocol IESECRelationSearchCellProvider;

@interface IESECStoreSearchResultViewController : IESECWinSearchGoodsViewController <IESECStoreFilterSectionControllerSwitchButtonDelegate> {
    IESECAtom *_searchWordAtom;
    IESECAtom *_searchIDAtom;
    IESECAtom *_logPassbackAtom;
    BOOL _isFirstSearch;
}

@property (retain, nonatomic) IESECStoreFilterSectionController *filterSectionController;
@property (retain, nonatomic) IESECWinEmptySectionController *stateSectionController;
@property (retain, nonatomic) IESECWinSearchResultGoodsListSectionController *windowGoodsListSectionController;
@property (retain, nonatomic) IESECWinSearchResultGoodsListSectionController *windowRecommendGoodsListSectionController;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECWinGoodsBackgroundView *backgroundView;
@property (nonatomic) long long productTabStyle;
@property (copy, nonatomic) NSString *suggestGroupID;
@property (retain, nonatomic) IESECStoreSearchDataController *dataController;
@property (retain, nonatomic) id<IESECRelationSearchCellProvider> cellProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)configBtmTrackerV2;
- (void)configBTMTracker;
- (BOOL)loadMoreHasMore;
- (void)switchButtonTapped;
- (double)maxAttriYcollectionView:(id)a0 sectionLayout:(id)a1;
- (id)initWithSearchContext:(id)a0;
- (void)switchButtonShowed;
- (void)setRecentSearchType:(unsigned long long)a0;
- (void)refreshDataSourceForKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)refreshDataSourceWhenFilterTypeChangedWithCompletion:(id /* block */)a0;
- (long long)getGoodsCount;
- (void)configTabLayout;
- (id)p_searchTypeString:(unsigned long long)a0;
- (void)trackShowProduct:(id)a0 isRecommend:(BOOL)a1 cell:(id)a2 atIndex:(long long)a3;
- (BOOL)isFromSearchSuggest;
- (id)makeWindowSearchResultSectionControllerWithRecommend:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
