@class IESLiveWebpLoadingView, IESLiveOptCategoryStore, NSArray, NSString, IESLiveOptCategoryFlowLayout, UICollectionView, UILabel, IESLiveOptCategorySearchCell;

@interface IESLiveOptCategoryContainerView : IESLiveOptCategoryPanelView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESLiveCategorySectionViewDelegate, IESLiveOptCategorySearchHeaderViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveOptCategoryFlowLayout *flowLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingIndicator;
@property (retain, nonatomic) IESLiveOptCategorySearchCell *searchHeader;
@property (nonatomic) BOOL searchMode;
@property (retain, nonatomic) NSArray *searchResult;
@property (retain, nonatomic) UICollectionView *searchCollectionView;
@property (retain, nonatomic) IESLiveOptCategoryStore *store;
@property (nonatomic) unsigned long long liveType;
@property (nonatomic) BOOL searchInputing;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchTextDidChange:(id)a0;
- (id)liveTypeStr;
- (void)sectionView:(id)a0 didSelectItemAtIndexPath:(long long)a1;
- (void)resignSearchMode;
- (void)refreshListView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1;
- (BOOL)needShowSearch;
- (BOOL)needShowRecentCategory;
- (id)liveParternDownloadUri;
- (long long)recentCategorySection;
- (void)trackChooseCategory:(id)a0;
- (void)trackTopicListChange:(id)a0;
- (BOOL)needShowFooter;
- (void)copyPartnerLink;
- (void)trackTyepeBarClick;
- (void)trackSearchInputPanelShow;
- (void)trackSearchPanelClick;
- (void)searchModeStatusChange:(BOOL)a0;
- (void)searchEditStatusChange:(BOOL)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)anchorIdentifier;

@end
