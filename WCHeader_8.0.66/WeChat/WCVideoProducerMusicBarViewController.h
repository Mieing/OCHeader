@class NSIndexPath, NSString, UICollectionView, UIView, WCVideoProducerDataSource, MMUIButton;
@protocol WCVideoProducerMusicBarDelegate;

@interface WCVideoProducerMusicBarViewController : WCVideoProducerBaseViewControllerFragment <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    NSIndexPath *_focusedIndex;
    NSIndexPath *_selectedIndex;
    long long _centerItemRow;
}

@property (nonatomic) BOOL isMusicSearcherEnabled;
@property (retain, nonatomic) WCVideoProducerDataSource *cellVMData;
@property (retain, nonatomic) MMUIButton *switchBGMButton;
@property (retain, nonatomic) MMUIButton *switchOSTButton;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UICollectionView *selectListCollectionView;
@property (weak, nonatomic) id<WCVideoProducerMusicBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableMusicSearcher:(BOOL)a1;
- (void)dealloc;
- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateMusicDataWithRecommendMusicList:(id)a0 searchMusicList:(id)a1;
- (void)updateMusicStatusWithIsBGMEnabled:(BOOL)a0 isOSTEnabled:(BOOL)a1;
- (void)selectMusicById:(id)a0;
- (id)indexPathOfMusicById:(id)a0;
- (void)_updateCellOrder;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)_onClickSearchMusic:(id)a0;
- (void)_onClickDismiss:(id)a0;
- (void)_onClickBGMSwitch:(id)a0;
- (void)_onClickOSTSwitch:(id)a0;
- (void)_onMusicAtIndex:(id)a0 changedSelectTo:(BOOL)a1;
- (void)_onMusicStatusShouldChangeToEnableBGM:(BOOL)a0 enableOST:(BOOL)a1;
- (id)_centerItemIndexOfScrollView:(id)a0;
- (void)_relayoutView;
- (void)_initView;
- (void)_initBackgroundCloseView;
- (void)_initContentView;
- (void)_initTopBarView;
- (void)_initSearchBarView;
- (void)_initSelectorView;
- (void)_initBottomBarView;
- (double)_cellItemWidth;
- (double)_cellItemWidthAutoFit;
- (double)_cellItemWidthScaled;
- (double)_cellPageWidthAutoFit;
- (double)_getMusicBarSafeHeight;
- (void).cxx_destruct;

@end
