@class MJPublisherSlider, UIView, MJMaterialLoadingStatusCoordinator, MJShootFilterInspectorViewModel, UILabel, NSString, CAGradientLayer, UICollectionView, MMUIButton, NSIndexPath;
@protocol MJShootFilterInspectorDelegate;

@interface MJShootFilterInspector : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJPublisherSliderAccessibilityDelegate>

@property (retain, nonatomic) MMUIButton *dismissButton;
@property (retain, nonatomic) MJPublisherSlider *plainSlider;
@property (retain, nonatomic) UICollectionView *titleCollectionView;
@property (retain, nonatomic) UICollectionView *filterCollectionView;
@property (retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer;
@property (retain, nonatomic) NSIndexPath *selectedTitleIndexPath;
@property (retain, nonatomic) MJShootFilterInspectorViewModel *viewModel;
@property (retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<MJShootFilterInspectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setupData;
- (void)setupViews;
- (void)layoutViews;
- (void)setupForShowing;
- (void)dismissButtonDidTouchUpInside:(id)a0;
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
- (void)titleCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1 shouldScrollFilter:(BOOL)a2;
- (void)filterCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)updateSliderOnSelectedFilterItemChanged;
- (void)showSliderAnimated:(BOOL)a0;
- (void)hideSliderAnimated:(BOOL)a0;
- (void)sliderValueChanged:(id)a0;
- (void)sliderDidFinishChangeValue:(id)a0;
- (void)accessibilityIncrementInSlider:(id)a0;
- (void)accessibilityDecrementInSlider:(id)a0;
- (void)notifyDidSelectTitleItemWithIndexPath:(id)a0;
- (id)indexPathForItemAtCenterOfCollectionView:(id)a0;
- (void)relayoutLineView;
- (void).cxx_destruct;

@end
