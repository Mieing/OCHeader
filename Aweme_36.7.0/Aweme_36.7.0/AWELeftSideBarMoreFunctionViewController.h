@class NSString, AWELeftSideBarMoreFunctionBottomView, UICollectionView, AWESideBarFunctionGradientFooterView, AWELeftSideBarMoreFunctionViewControllerParams;
@protocol AWELeftSideBarMoreFunctionViewControllerDelegate;

@interface AWELeftSideBarMoreFunctionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWELeftSideBarBaseCollectionViewCellDelegate, AWELeftSideBarMoreFunctionBottomViewDelegate, AWELeftSideBarCollectionViewDelegateFlowLayout, AWESideBarFunctionGradientFooterViewDelegate, AWEHPSideBarSecondPageReopenProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWELeftSideBarMoreFunctionBottomView *defaultBottomView;
@property (retain, nonatomic) AWESideBarFunctionGradientFooterView *gradientBottomView;
@property (copy, nonatomic) AWELeftSideBarMoreFunctionViewControllerParams *params;
@property (weak, nonatomic) id<AWELeftSideBarMoreFunctionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)girdStyleInsetBottom;
+ (double)itemWidthWithContainerWidth:(double)a0 numberOfColumn:(unsigned long long)a1 horizontalPadding:(double)a2;

- (void)updateWithParams:(id)a0;
- (void)reopenSideBarSecondPageNeedAnimate:(BOOL)a0;
- (id)leftSideBarBaseBaseCollectionViewCellOnCreateView:(id)a0 itemModel:(id)a1;
- (id)collectionView:(id)a0 layout:(id)a1 configModelForSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 borderEdgeInsertsForSection:(long long)a2;
- (void)gradientFooterViewDidClickMainButton:(id)a0;
- (void)moreFunctionBottomViewDidClickBackButton:(id)a0;
- (void)initDefaultBottomView;
- (void)initGradientBottomView;
- (BOOL)p_canShowHeaderViewAtSection:(unsigned long long)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initCollectionView;

@end
