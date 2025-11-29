@class UIPanGestureRecognizer, NSString, UICollectionView, AWECommonSearchBar, RxCollectionViewDiffableDataSource, UIPercentDrivenInteractiveTransition;
@protocol AWEIMSearchInputProtocol, AWEIMSearchResultProtocol;

@interface AWEIMSearchResultDetailViewController : UIViewController <AWEIMSearchResultCollectionViewCellTrackDelegate, UINavigationControllerDelegate, UICollectionViewDelegate, UIGestureRecognizerDelegate, AWEIMRendererProtocol, AWEIMSearchPageProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *diffiableDataSource;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
@property (retain, nonatomic) UIPanGestureRecognizer *panBackGestureRecognizer;
@property (nonatomic) BOOL firstItemHasBoldSplitLine;
@property (nonatomic) BOOL adjustForBigFontStyle;
@property (nonatomic) BOOL shouldRecordHistory;
@property (nonatomic) BOOL isSubPage;
@property (nonatomic) BOOL shouldUseNewUI;
@property (nonatomic) long long showScene;
@property (retain, nonatomic) id<AWEIMSearchInputProtocol> datasource;
@property (weak, nonatomic) id<AWEIMSearchResultProtocol> delegate;
@property (weak, nonatomic) AWECommonSearchBar *searchBar;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasBarBackButton;

- (void)renderModel:(id)a0 context:(id)a1;
- (id)__createCollectionView:(long long)a0 cellClass:(Class)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)__createDiffableDataSource:(id)a0;
- (void)didClickCell:(id)a0;
- (id)__groupOwnerMessageListGuidanceBubbleView;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)panGestureRecognizerAction:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;

@end
