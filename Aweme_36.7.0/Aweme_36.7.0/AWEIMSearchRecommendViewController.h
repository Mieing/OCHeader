@class AWEIMSearchHistoryViewController, NSString, UICollectionView, UIView, RxCollectionViewDiffableDataSource, FBKVOController;
@protocol AWEIMSearchRecommendProtocol, AWEIMSearchResultProtocol;

@interface AWEIMSearchRecommendViewController : UIViewController <AWEIMSearchResultCollectionViewCellTrackDelegate, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *diffiableDataSource;
@property (retain, nonatomic) FBKVOController *kvoController;
@property (retain, nonatomic) AWEIMSearchHistoryViewController *historyViewController;
@property (retain, nonatomic) id<AWEIMSearchRecommendProtocol> datasource;
@property (weak, nonatomic) id<AWEIMSearchResultProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)__heightForTopContent;
- (id)__createCollectionView:(long long)a0 cellClass:(Class)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)__createDiffableDataSource:(id)a0;
- (void)p_addAllKVO;
- (void)reloadHistory;
- (void)p_collectionViewBackToTop;
- (void)p_tryFixVoiceOverOffsetBug;
- (void)p_addHistoryShowKVO;
- (void)didClickCell:(id)a0;
- (void)resetRecommendView;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)init;
- (void)updateCollectionViewContentInset;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;

@end
