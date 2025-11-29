@class UIView, UISwipeGestureRecognizer, UITapGestureRecognizer, MMLiveMakeupViewModel, NSString, UIImageView, MMLiveMakeupOperationDetailPanel, MMUIMaskContainerView, CAGradientLayer, UICollectionView, MMUILabel, MMUIButton;
@protocol MMLiveMakeupOperationPanelDelegate;

@interface MMLiveMakeupOperationPanel : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout, MMLiveMakeupOperationDetailPanelDelegate, MMLiveMakeupItemCollectionCellDelegate, MMLiveBeautyLogicExt, MMLiveMakeupViewModelObserver, MMLiveBeautyOperationPanelExternalClosing>

@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (retain, nonatomic) MMUILabel *beautyExtSettingLabel;
@property (retain, nonatomic) UIImageView *beautyExtSettingImage;
@property (retain, nonatomic) UICollectionView *makeupItemCollectionView;
@property (retain, nonatomic) UISwipeGestureRecognizer *leftSwipeGesture;
@property (retain, nonatomic) UISwipeGestureRecognizer *rightSwipeGesture;
@property (retain, nonatomic) MMLiveMakeupOperationDetailPanel *detailPanel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) MMLiveMakeupViewModel *viewModel;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) MMUIMaskContainerView *collectionContainerView;
@property (nonatomic) BOOL isShowingNotice;
@property (weak, nonatomic) id<MMLiveMakeupOperationPanelDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutPanelViews;
- (void)setupAccessibilityFocus;
- (void)showPanel;
- (void)closePanelDirectly;
- (void)didAppear;
- (void)didDisAppear;
- (void)closeAction;
- (void)close:(BOOL)a0;
- (void)moveToDetailAdjustingState;
- (void)onExitChangeDetailMode;
- (void)onTappedresetDefaultValueButton;
- (void)onTappedChangeDetailLabel;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)onSkinSegEnableChangeTo:(BOOL)a0;
- (void)onFilterSourceChangedTo:(unsigned long long)a0;
- (BOOL)isInRoom;
- (void)onLeftSwipeGesture:(id)a0;
- (void)onRightSwipeGesture:(id)a0;
- (BOOL)canSwipeWithGesture:(id)a0;
- (void)swipe:(unsigned long long)a0;
- (void).cxx_destruct;

@end
