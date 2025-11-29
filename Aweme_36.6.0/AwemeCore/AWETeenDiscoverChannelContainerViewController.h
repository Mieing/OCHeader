@class NSTimer, NSString;
@protocol AWETeenDiscoverChannelContainerViewControllerDelegate;

@interface AWETeenDiscoverChannelContainerViewController : AWEBaseListViewController <AWETeenDiscoverChildViewControllerProtocol, UIScrollViewDelegate, AWETeenWaterfallCollectionViewLayoutDelegate>

@property (nonatomic) BOOL isAppear;
@property (nonatomic) double lastScrollLoadMoreTime;
@property (copy, nonatomic) id /* block */ refreshCompletion;
@property (nonatomic) unsigned long long refreshType;
@property (nonatomic) long long guideCardRedBorderHasShowTime;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<AWETeenDiscoverChannelContainerViewControllerDelegate> channelContainerVCDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)bindViewModel;
- (long long)collectionView:(id)a0 layout:(id)a1 columnCountForSection:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumColumnSpacingForSectionAtIndex:(long long)a2;
- (void)handleDataState:(long long)a0;
- (void)p_startTimerInRecommandChannal;
- (void)p_handleRedBorderShowTime;
- (void)hideGuideCardRedBorderInVisibleCells;
- (void)trackViewDisAppear;
- (void)trackViewAppear;
- (id)initWithChannelModel:(id)a0 channelIndex:(long long)a1 channalTopResourceHighlight:(BOOL)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)setupCollectionView:(id)a0;

@end
