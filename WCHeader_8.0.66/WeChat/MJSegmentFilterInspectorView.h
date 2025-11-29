@class MMUIActivityIndicatorView, UIView, MJPublisherSlider, MJMaterialLoadingStatusCoordinator, NSString, UICollectionView, MJSegmentFilterInspectorViewModel, MMUILabel, NSIndexPath;

@interface MJSegmentFilterInspectorView : MJSegmentInspectorView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *titleCollectionView;
@property (retain, nonatomic) UICollectionView *filterCollectionView;
@property (retain, nonatomic) MJPublisherSlider *plainSlider;
@property (retain, nonatomic) MMUILabel *valueLabel;
@property (retain, nonatomic) UIView *sliderContainerView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSIndexPath *selectedTitleIndexPath;
@property (retain, nonatomic) NSIndexPath *selectedFilterIndexPath;
@property (nonatomic) BOOL didSelectTitleItem;
@property (nonatomic) BOOL didSelectFilterItem;
@property (readonly, nonatomic) MJSegmentFilterInspectorViewModel *viewModel;
@property (retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)commonInit;
- (void)setupData;
- (void)setupViews;
- (void)layoutViews;
- (void)loadFilters;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)titleCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)sectionHeaderOffsetXWithItemAtIndexPath:(id)a0;
- (void)titleCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1 shouldScrollFilter:(BOOL)a2;
- (void)filterCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)resetDidSelectItemFlags;
- (void)selectAndHighlightTitleItem;
- (void)notifyDidSelectTitleItemWithIndexPath:(id)a0;
- (id)indexPathForItemAtLeftOfCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)sliderValueChanged:(id)a0;
- (void)sliderDidFinishChangeValue:(id)a0;
- (void)updateSliderState;
- (void)setDefaultFilterIntensity;
- (void).cxx_destruct;

@end
