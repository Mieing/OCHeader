@class CAGradientLayer, MJShootBeautyInspectorViewModel, UICollectionView, NSString, MJPublisherSlider, MMUIButton;
@protocol MJShootBeautyInspectorDelegate;

@interface MJShootBeautyInspector : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJPublisherSliderAccessibilityDelegate>

@property (retain, nonatomic) MMUIButton *backButton;
@property (retain, nonatomic) MMUIButton *resetButton;
@property (retain, nonatomic) MJPublisherSlider *plainSlider;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer;
@property (retain, nonatomic) MJShootBeautyInspectorViewModel *viewModel;
@property (nonatomic) BOOL isInTemplateShootingMode;
@property (weak, nonatomic) id<MJShootBeautyInspectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)backButtonDidTouchUpInside:(id)a0;
- (void)resetButtonDidTouchUpInside:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)sliderValueChanged:(id)a0;
- (void)sliderDidFinishChangeValue:(id)a0;
- (void)updateSliderOnSelectedBeautyItemChanged;
- (void)accessibilityIncrementInSlider:(id)a0;
- (void)accessibilityDecrementInSlider:(id)a0;
- (BOOL)isItemAdjustable:(id)a0;
- (void).cxx_destruct;

@end
