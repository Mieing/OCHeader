@class NSString, NSArray, UICollectionViewFlowLayout, MMLiveTaskId, MMLiveCameraOperationItem, UICollectionView, MMUILabel, MMUIButton;
@protocol MMLiveCameraOperationPanelDelegate;

@interface MMLiveCameraOperationPageSheet : MMPageSheetBaseView <UICollectionViewDataSource>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) unsigned long long nextStateAfterClose;
@property (retain, nonatomic) NSArray *operationItems;
@property (retain, nonatomic) MMLiveCameraOperationItem *switchCameraItem;
@property (retain, nonatomic) MMLiveCameraOperationItem *mirrorItem;
@property (retain, nonatomic) MMUIButton *cameraSwitchButton;
@property (retain, nonatomic) UICollectionViewFlowLayout *operationItemsLayout;
@property (retain, nonatomic) UICollectionView *operationItemsCollectionView;
@property (retain, nonatomic) MMUILabel *cameraOffLabel;
@property (copy, nonatomic) id /* block */ redDotQueryBlock;
@property (nonatomic) BOOL hasMultipleRedDot;
@property (weak, nonatomic) id<MMLiveCameraOperationPanelDelegate> actionDelegate;
@property (nonatomic) BOOL isUsingNewStartController;
@property (nonatomic) BOOL disableSwitchToAudioMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCamGestureEnabled:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 redDotQueryBlock:(id /* block */)a2;
- (void)showPanel;
- (void)closePanelDirectly;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)pageSheetDidDisappear;
- (void)onCameraSwitchButtonTapped;
- (void)onCloseButtonTapped;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)checkCurrentRedDotState:(BOOL)a0;
- (id)getBeautyRedDotPath;
- (id)getMakeUpRedDotPath;
- (id)getFilterRedDotPath;
- (id)getDecorationRedDotPath;
- (id)getVisionEffectsRedDotPath;
- (id)getGestureRedDotPath;
- (id)getMirrorRedDotPath;
- (id)getSwitchCamRedDotPath;
- (id)getBackgroundRedDotPath;
- (void)updateOperationItemsForCameraState:(BOOL)a0;
- (void)handleStateTransitionAction:(unsigned long long)a0 expectedCameraState:(BOOL)a1;
- (void)handleMirrorItemAction;
- (void)handleSwitchCameraItemAction;
- (void)updateItemsAfterSwitchCameraFinished;
- (void)delayResetSwitchCameraItemDisabled;
- (void)handleChangeAudioOnlyBackgroundItemAction;
- (void)updateMirrorItemStateAndReloadCell:(BOOL)a0;
- (void)updateSwitchCameraItemDisabled:(BOOL)a0;
- (id)liveTask;
- (BOOL)cameraEnabled;
- (void)initializeComponents;
- (void)updateForCameraEnabled:(BOOL)a0;
- (BOOL)audioOnlyModeAvailable;
- (void)closeWithNextState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
