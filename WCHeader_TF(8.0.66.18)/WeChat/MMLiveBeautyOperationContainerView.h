@class UIView, NSString, NSArray, UITapGestureRecognizer, MMLiveTaskId, UIImageView, UIButton, CAGradientLayer, UICollectionView, MMUILabel, MMUIButton;
@protocol MMLiveBeautyLogicProvider, MMLiveBeautyOperationContainerViewDelegate;

@interface MMLiveBeautyOperationContainerView : UIView <MMLiveBeautySuiteCollectionViewCellDelegate, MMLiveHalfScreenTitleBarViewDelegate, MMLiveBeautyOperationPanelDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, UICollectionViewDelegate, MMLiveBeautyOperationPanelExternalClosing>

@property (nonatomic) BOOL isOpening;
@property (nonatomic) BOOL thumbnailState;
@property (nonatomic) BOOL hasChangedDetail;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIView *suitPanelView;
@property (retain, nonatomic) MMUIButton *suitArrowButton;
@property (retain, nonatomic) MMUILabel *beautyExtSettingLabel;
@property (retain, nonatomic) UIImageView *beautyExtSettingImage;
@property (retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) BOOL isCloseDirectly;
@property (retain, nonatomic) UICollectionView *suitCollectionView;
@property (retain, nonatomic) NSArray *operationPanelList;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) id<MMLiveBeautyLogicProvider> beautyLogicProvider;
@property (retain, nonatomic) UIButton *button;
@property (weak, nonatomic) id<MMLiveBeautyOperationContainerViewDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 beautyLogic:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutOperationPanels;
- (void)resetViewsStateOnOpen;
- (void)moveToDetailAdjustingState;
- (void)onLeftSwipeGesture:(id)a0;
- (void)onRightSwipeGesture:(id)a0;
- (BOOL)canSwipeWithGesture:(id)a0;
- (id)currentPanel;
- (void)setupAccessibilityFocus;
- (void)openWithAnimation:(BOOL)a0 completeBlock:(id /* block */)a1;
- (void)openWithAnimation:(BOOL)a0 closeDirectly:(BOOL)a1 completeBlock:(id /* block */)a2;
- (void)closeWithAnimation:(BOOL)a0;
- (void)closeAction;
- (void)closeDirectly;
- (void)closePanelDirectly;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onDetailedBeautySuiteSettingsRequestedByCell:(id)a0;
- (void)onSliderValueChange;
- (void)onTappedresetDefaultValueButton;
- (void)onExitChangeDetailMode;
- (void)closeContainerView;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)isInRoom;
- (id)liveTask;
- (id)beautyLogic;
- (void).cxx_destruct;

@end
