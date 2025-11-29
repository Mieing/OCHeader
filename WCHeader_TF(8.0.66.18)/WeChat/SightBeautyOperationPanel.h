@class UIView, NSString, UITapGestureRecognizer, MMLiveBeautyStyleSlider, CAGradientLayer, UICollectionView, NSMutableArray, MMUIButton;
@protocol SightBeautyOperationPanelDelegate;

@interface SightBeautyOperationPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (retain, nonatomic) UICollectionView *beautyItemsCollectionView;
@property (retain, nonatomic) MMLiveBeautyStyleSlider *beautyStyleSlider;
@property (retain, nonatomic) NSMutableArray *beautyDataItemsList;
@property (nonatomic) unsigned long long currentBeautyItemIndex;
@property (retain, nonatomic) MMUIButton *checkButton;
@property (weak, nonatomic) id<SightBeautyOperationPanelDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)initBeautyDataItemsList;
- (void)updateBeautyStyleSliderValue;
- (void)showPanel;
- (void)showPanelWithCompletion:(id /* block */)a0;
- (void)switchBeautyEffect:(id)a0;
- (void)closeAction;
- (void)close:(BOOL)a0;
- (void)saveAllEffectBeautyValues;
- (void)closePanelDirectly;
- (id)sightBeautyEffectInfo;
- (void)onBeautyStyleSliderValueChanged:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
