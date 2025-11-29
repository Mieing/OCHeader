@class UILabel, MJPublisherSlider, MJMaterialLoadingStatusCoordinator, UICollectionViewFlowLayout, MJShootBeautyInspectorViewModel, NSString, CAGradientLayer, UICollectionView, MMUIButton, NSIndexPath;
@protocol MJShootBeautyMainPanelViewDelegate;

@interface MJShootBeautyMainPanelView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootBeautyMainPanelItemCellDelegate, MJPublisherSliderAccessibilityDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer;
@property (retain, nonatomic) MMUIButton *dismissButton;
@property (retain, nonatomic) MJShootBeautyInspectorViewModel *viewModel;
@property (retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *resetButton;
@property (retain, nonatomic) MJPublisherSlider *plainSlider;
@property (nonatomic) BOOL isInTemplateShootingMode;
@property (weak, nonatomic) id<MJShootBeautyMainPanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)_setupViewsForNewUX;
- (void)_layoutViewsForNewUX;
- (void)dismissButtonDidTouchUpInside:(id)a0;
- (void)resetButtonDidTouchUpInside:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)beautyMainPanelItemCellDidSelectEdit:(id)a0;
- (void)sliderValueChanged:(id)a0;
- (void)sliderDidFinishChangeValue:(id)a0;
- (void)updateSliderOnSelectedBeautyItemChanged;
- (void)accessibilityIncrementInSlider:(id)a0;
- (void)accessibilityDecrementInSlider:(id)a0;
- (BOOL)isItemAdjustable:(id)a0;
- (void)udpateSliderShowingState:(BOOL)a0;
- (void).cxx_destruct;

@end
