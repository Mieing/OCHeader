@class IESECShopSearchDataController, IESECTracker, IESECShopGoodsBackgroundView, IESECShopSearchResultGoodsListSectionController, NSString, IESECShopEmptySectionController, IESECShopFilterSectionController, IESECQualityInfoV2, IESECAtom;

@interface IESECShopSearchResultViewController : IESECShopSearchGoodsViewController <IESECShopFilterSectionControllerSwitchButtonDelegate, IESECShopSearchResultVCProtocol> {
    IESECAtom *_searchWordAtom;
    IESECAtom *_searchIDAtom;
    IESECAtom *_logPassbackAtom;
    BOOL _isFirstSearch;
}

@property (retain, nonatomic) IESECShopFilterSectionController *filterSectionController;
@property (retain, nonatomic) IESECShopEmptySectionController *stateSectionController;
@property (retain, nonatomic) IESECShopSearchResultGoodsListSectionController *shopGoodsListSectionController;
@property (retain, nonatomic) IESECShopSearchResultGoodsListSectionController *shopRecommendGoodsListSectionController;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECShopGoodsBackgroundView *backgroundView;
@property (nonatomic) long long productTabStyle;
@property (copy, nonatomic) NSString *suggestGroupID;
@property (retain, nonatomic) IESECShopSearchDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IESECQualityInfoV2 *qualityInfo;

- (void)searchForKey:(id)a0;
- (void)updateSearchSource:(unsigned long long)a0;
- (void)updateSuggestGroupID:(id)a0;
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
- (id)makeShopSearchResultSectionControllerWithRecommend:(BOOL)a0;
- (BOOL)isFromSearchSuggest;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
