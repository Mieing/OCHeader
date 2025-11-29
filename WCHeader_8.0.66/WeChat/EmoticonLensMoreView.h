@class NSIndexPath, NSString, NSArray, EmoticonLensInfo, MMUIView, UICollectionView, UILabel, EmoticonStoreFootView;
@protocol EmoticonLensMoreViewDelegate;

@interface EmoticonLensMoreView : MMUIHalfScreenViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EmoticonLensMgrExt, MMRefreshTableFooterDelegate, MMUIHalfScreenViewControllerDelegate>

@property (retain, nonatomic) MMUIView *backgroundView;
@property (retain, nonatomic) MMUIView *topNavBar;
@property (retain, nonatomic) MMUIView *navBarSeparator;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *lensCollectionView;
@property (retain, nonatomic) EmoticonStoreFootView *footerView;
@property (weak, nonatomic) id<EmoticonLensMoreViewDelegate> lensDelegate;
@property (retain, nonatomic) NSArray *recentUseItems;
@property (retain, nonatomic) NSArray *recommandItems;
@property (retain, nonatomic) NSIndexPath *selectedIndex;
@property (nonatomic) long long numberPerRow;
@property (retain, nonatomic) EmoticonLensInfo *selectedLens;
@property (readonly, nonatomic) long long selectedLensIndex;
@property (readonly, nonatomic) NSArray *visiableLens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHeight:(double)a0 delegate:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setSelectLens:(id)a0;
- (void)tryAppendLens:(id)a0;
- (void)reloadDataWithWidth:(double)a0;
- (void)setupContentView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onEmoticonLensListRequestSuccess:(id)a0 isFirstPage:(BOOL)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)onHalfScreenPageWillClose:(id)a0 action:(long long)a1;
- (void)onHalfScreenPageDidClose:(id)a0 action:(long long)a1;
- (void)onHalfScreenPage:(id)a0 contentTopChanged:(double)a1;
- (id)lensItemAtIndex:(id)a0;
- (void)reloadDataAndExposure;
- (void).cxx_destruct;

@end
