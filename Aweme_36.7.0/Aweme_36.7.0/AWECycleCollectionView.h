@class NSString, CADisplayLink, UICollectionView, AWECycleCollectionViewLayout;
@protocol AWECycleCollectionViewDelegate, AWECycleCollectionViewDataSource;

@interface AWECycleCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWECycleCollectionViewLayout *layout;
@property (retain, nonatomic) CADisplayLink *autoScrollDisplayLink;
@property (retain, nonatomic) Class cellClass;
@property (retain, nonatomic) Class headerClass;
@property (nonatomic) BOOL needCycleScroll;
@property (weak, nonatomic) id<AWECycleCollectionViewDataSource> dataSource;
@property (weak, nonatomic) id<AWECycleCollectionViewDelegate> delegate;
@property (nonatomic) BOOL enableCycleScroll;
@property (nonatomic) BOOL enableAutoScrollIfNeeded;
@property (nonatomic) unsigned long long autoScrollDirection;
@property (nonatomic) double autoScrollDelayDuration;
@property (nonatomic) double autoScrollSpeed;
@property (nonatomic) BOOL stopAutoScrollWhenDragging;
@property (nonatomic) BOOL scrollCellToCenterAfterSelected;
@property (nonatomic) BOOL enableLeftBarrier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleDisplayLink;
- (void)registerCellClass:(Class)a0;
- (void)p_setupPropertiesDefault;
- (void)p_setupCycleCollectionView;
- (void)stopAutoScroll;
- (void)p_updateIfNeedCycleScroll;
- (unsigned long long)mapOuterSectionToInnerSection:(unsigned long long)a0;
- (unsigned long long)mapInnerSectionToOuterSection:(unsigned long long)a0;
- (void)p_autoScrollIfNeeded;
- (BOOL)shouldCycleScroll;
- (void)startAutoScroll;
- (id)mapInnerIndexPathToOuterIndexPath:(id)a0;
- (void)registerHeaderClass:(Class)a0;
- (id)mapOuterIndexPathToInnerIndexPath:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithLayout:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)reload;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithLayoutType:(unsigned long long)a0;

@end
