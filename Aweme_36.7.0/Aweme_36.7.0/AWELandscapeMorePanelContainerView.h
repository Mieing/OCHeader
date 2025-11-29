@class AWELandscapeMorePanelFooterView, AWELandscapeMorePanelViewModel, AWELandscapePageContext, AWEAwemeModel, UIView, UICollectionView, NSString;
@protocol AWELandscapeMorePanelViewDelegate;

@interface AWELandscapeMorePanelContainerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWELandscapeMorePanelViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapeMorePanelViewModel *viewModel;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) UIView *dismissView;
@property (retain, nonatomic) UIView *panelContainer;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWELandscapeMorePanelFooterView *footerView;
@property (weak, nonatomic) id<AWELandscapeMorePanelViewDelegate> interactionDelegate;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (copy, nonatomic) id /* block */ landScapeStartTimestampBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)a0 pageContext:(id)a1;
- (void)dismissMorePanelWithCompletion:(id /* block */)a0;
- (void)showMorePanelOnView:(id)a0 completion:(id /* block */)a1;
- (double)panelViewWidth;
- (void)trackWatchLaterAddShowIfNeeded;
- (void)registerPanelReuseViewClass;
- (void)handleClickDismissView:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupCollectionView;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })collectionViewSize;

@end
