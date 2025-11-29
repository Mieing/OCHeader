@class CAGradientLayer, NSString, UICollectionView, WCFinderVideoProducerDataSource, UIView, NSIndexPath;
@protocol WCVideoProducerTemplateBarDelegate;

@interface WCFinderVideoProducerTemplateBarViewController : WCFinderVideoProducerBaseViewControllerFragment <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) WCFinderVideoProducerDataSource *cellVMData;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (retain, nonatomic) NSIndexPath *selectedIndex;
@property (retain, nonatomic) UICollectionView *templateBarSelectorCollectionView;
@property (nonatomic) BOOL isCollectionViewLoaded;
@property (weak, nonatomic) id<WCVideoProducerTemplateBarDelegate> delegate;
@property (nonatomic) long long selectedStyle;
@property (nonatomic) BOOL canRecreateWhileLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)resetDataWithDefaultTemplateList:(id)a0 createSameTemplateList:(id)a1 stubTemplateList:(id)a2 launcherTemplateList:(id)a3 folderTemplateList:(id)a4 recommendTemplateList:(id)a5 pickOutTemplateList:(id)a6;
- (id)indexPathOfTemplateById:(id)a0;
- (long long)cellOrderOfTemplateById:(id)a0;
- (id)templateCellVMById:(id)a0;
- (void)selectTemplateById:(id)a0;
- (void)addManualTemplate:(id)a0 andAutoSelect:(BOOL)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)_safeScrollToItemAtIndex:(id)a0;
- (void)_reloadData;
- (void)_onCellAtIndex:(id)a0 changedSelectTo:(BOOL)a1 manually:(BOOL)a2;
- (void)_updateCellOrder;
- (void)_updateCellChangingStatus;
- (void)_addDefaultTemplateList:(id)a0;
- (void)_addCreateSameTemplateList:(id)a0;
- (void)_addStubTemplateList:(id)a0;
- (void)_addLauncherTemplateList:(id)a0;
- (void)_addFolderTemplateList:(id)a0;
- (void)_addRecommendTemplateList:(id)a0;
- (void)_addPickOutTemplateList:(id)a0;
- (id)_changingTemplate;
- (void)_resizeCollectionView;
- (void)_relayoutView;
- (void)_initView;
- (void)_initBackgroundCloseView;
- (void)_initContentView;
- (double)_getTemplateBarSafeHeight;
- (double)_getCellViewHeight;
- (void).cxx_destruct;

@end
