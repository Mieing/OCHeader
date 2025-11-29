@class NSString, AWEIMSearchRecommendViewController, UICollectionView, FBKVOController, RxCollectionViewDiffableDataSource, AWECommonSearchBar;
@protocol AWEIMSearchInputProtocol, AWEIMSearchResultProtocol;

@interface AWEIMSearchResultViewController : UIViewController <UICollectionViewDelegate, AWEIMSearchResultCollectionViewCellTrackDelegate, AWEIMSearchSectionHeaderViewProtocol, AWEIMSearchPageProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *diffiableDataSource;
@property (retain, nonatomic) AWEIMSearchRecommendViewController *recVC;
@property (retain, nonatomic) FBKVOController *kvoController;
@property (nonatomic) BOOL emptySearchText;
@property (nonatomic) BOOL emptySearchResult;
@property (weak, nonatomic) AWECommonSearchBar *searchBar;
@property (retain, nonatomic) id<AWEIMSearchInputProtocol> datasource;
@property (weak, nonatomic) id<AWEIMSearchResultProtocol> delegate;
@property (nonatomic) long long searchPageMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasBarBackButton;

- (id)__createCollectionView:(long long)a0 cellClass:(Class)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)__createDiffableDataSource:(id)a0;
- (void)p_addAllKVO;
- (void)didClickCell:(id)a0;
- (void)p_addSearchResultKVO;
- (void)p_addSearchTextKVO;
- (void)p_changeToNoInputState;
- (void)p_changeToEmptyResultState;
- (void)p_changeToNormalState;
- (void)searchResultHasItem:(BOOL)a0;
- (void)searchBeginEdditing;
- (void)onTapView:(id)a0;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;

@end
