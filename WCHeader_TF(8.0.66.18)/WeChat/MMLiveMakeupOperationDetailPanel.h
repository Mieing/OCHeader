@class UIView, NSString, UITapGestureRecognizer, MMLiveMakeupViewModel, MMFinderLiveBeautyNewStyleSlider, MMUIMaskContainerView, UICollectionView, MMUIButton, NSIndexPath;
@protocol MMLiveMakeupOperationDetailPanelDelegate;

@interface MMLiveMakeupOperationDetailPanel : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout, MMLiveBeautyLogicExt, MMLiveMakeupViewModelObserver>

@property (retain, nonatomic) MMLiveMakeupViewModel *viewModel;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (retain, nonatomic) MMUIButton *resetDefaultButton;
@property (retain, nonatomic) UICollectionView *makeupDetailItemsCollectionView;
@property (retain, nonatomic) MMFinderLiveBeautyNewStyleSlider *makeupStyleSlider;
@property (retain, nonatomic) NSIndexPath *currentMakeupDetailItemIndexPath;
@property (nonatomic) unsigned long long selectIndex;
@property (nonatomic) BOOL isAppearing;
@property (retain, nonatomic) MMUIMaskContainerView *collectionContainerView;
@property (weak, nonatomic) id<MMLiveMakeupOperationDetailPanelDelegate> actionDelegate;
@property (weak, nonatomic) id<MMLiveMakeupOperationDetailPanelDelegate> containerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1;
- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)showPanel;
- (void)exitChangeDetailModeAction;
- (void)exitChangeDetailMode:(BOOL)a0;
- (void)updateResetButtonState;
- (void)resetDefaultValue;
- (id)currentDetailItem;
- (void)setCurrentMakeupDetailItemEffect;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)delayCheckHideSliderProgressTip;
- (void)cancelDelayCheckHideSliderProgressTip;
- (void)checkHideSliderProgressTipIfNeeded;
- (void)onBeautyStyleSliderValueChanged:(id)a0;
- (void)onTappedMutuallyExclusiveCell;
- (void)onBeautyStyleSliderTouchUp:(id)a0;
- (void)onBeautyStyleSliderTouchDown:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)updateMakeupStyleSliderValue;
- (void).cxx_destruct;

@end
