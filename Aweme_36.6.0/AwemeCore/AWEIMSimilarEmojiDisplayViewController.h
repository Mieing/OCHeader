@class UILongPressGestureRecognizer, AWEIMSimilarEmoticonDisplayQuickViewDelegate, AWEIMSimilarEmojiDisplayHeaderReusableView, AWEIMSimilarEmojiDisplayVCViewModel, NSString, RxCollectionViewDiffableDataSource, NSMutableSet, UICollectionView, NSNumber, MJRefreshFooter;
@protocol AWEIMEmoticonDisplayViewControllerConfigProtocol, IESIMRefreshFooterProtocol;

@interface AWEIMSimilarEmojiDisplayViewController : UIViewController <UICollectionViewDelegate, AWEIMHalfScreenContainerScrollProtocol, UIGestureRecognizerDelegate, AWEIMSimilarEmoticonDisplayQuickViewTrackDelegate, AWEIMHalfScreenContainerVCDelegate>

@property (readonly, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) AWEIMSimilarEmojiDisplayVCViewModel *viewModel;
@property (retain, nonatomic) NSNumber *displayStartTime;
@property (retain, nonatomic) AWEIMSimilarEmoticonDisplayQuickViewDelegate *defaultQuickDelegate;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) AWEIMSimilarEmojiDisplayHeaderReusableView *headerView;
@property (retain, nonatomic) MJRefreshFooter<IESIMRefreshFooterProtocol> *footer;
@property (retain, nonatomic) NSMutableSet *showedGiphyIDSet;
@property (nonatomic) BOOL trackParamsOpt;
@property (retain, nonatomic) id<AWEIMEmoticonDisplayViewControllerConfigProtocol> context;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (void)configData;
- (BOOL)dismissGestureRecognizerShouldBegin;
- (void)createDataSource;
- (id)similarDelegate;
- (id)quickLookCellEvent;
- (void)didLongPressEmoticonDisplayView:(id)a0;
- (void)dismissQuickPanelView;
- (BOOL)isLowPanel;
- (struct CGSize { double x0; double x1; })defaultLowPanalSize;
- (struct CGSize { double x0; double x1; })defaultPanalSize;
- (id)similarPanelTrackParams;
- (void)applySnapshot:(id)a0 animation:(BOOL)a1 completion:(id /* block */)a2;
- (void)endRefreshFooterWithModel:(id)a0;
- (void)updateHeaderFooterViewWithReloadModel:(id)a0;
- (void)trackSingleEmojiShowAtIndexPath:(id)a0;
- (void)p_trackSingleEmojiShowAtIndexPath:(id)a0 emoticon:(id)a1;
- (void)trackEmojiDetailPanelClickWithClickType:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)refresh;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithContext:(id)a0;
- (void)configureDataSource;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)scrollView;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupView;

@end
