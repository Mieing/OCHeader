@class MJPictureAdjustmentValueItem, UIView, NSString, MJSegmentPictureInspectorViewModel, MJPublisherBidirectionalSlider, UICollectionView, MMUILabel, MJPublisherSlider;

@interface MJSegmentPictureInspectorView : MJSegmentInspectorView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MJPublisherSlider *plainSlider;
@property (retain, nonatomic) MJPublisherBidirectionalSlider *bidirectionalSlider;
@property (retain, nonatomic) MMUILabel *valueLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MJPictureAdjustmentValueItem *selectedItem;
@property (readonly, nonatomic) MJSegmentPictureInspectorViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)sliderValueChanged:(id)a0;
- (void)sliderDidFinishChangeValue:(id)a0;
- (id)calcSelectedIndexPath;
- (void)updateSlider:(id)a0 withValueItem:(id)a1;
- (void)updateSliderWithValueItem:(id)a0;
- (void).cxx_destruct;

@end
