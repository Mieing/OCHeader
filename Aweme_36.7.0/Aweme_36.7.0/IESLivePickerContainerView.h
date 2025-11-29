@class NSArray, UICollectionView, NSString, UICollectionViewFlowLayout;
@protocol IESLivePickerContainerViewDateSource, IESLivePickerContainerViewDelegate;

@interface IESLivePickerContainerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic) long long willSelectedRow;
@property (nonatomic) long long willDeselectedRow;
@property (nonatomic) long long selectedRow;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isReloadingData;
@property (nonatomic) BOOL isAdjustingSelected;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rotatedRect;
@property (nonatomic) BOOL isSetupDone;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (weak, nonatomic) id<IESLivePickerContainerViewDelegate> delegate;
@property (weak, nonatomic) id<IESLivePickerContainerViewDateSource> dateSource;
@property (nonatomic) unsigned long long rowHeight;
@property (readonly, nonatomic) long long numberOfRows;
@property (readonly, nonatomic) NSArray *visibleItemViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationBecomeActive:(id)a0;
- (void)selectRow:(long long)a0 animated:(BOOL)a1;
- (void)adjustCurrentSelected;
- (void)reloadDataWithLayout;
- (void)reloadDataWithoutLayout;
- (struct CGSize { double x0; double x1; })sizeForRow:(long long)a0;
- (id)viewForRow:(long long)a0;
- (long long)rowForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewRectForRow:(long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)updateCollectionViewContentInset;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupCollectionView;
- (void)setupSubviews;

@end
