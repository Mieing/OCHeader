@class NSArray, UICollectionView, MMFinderLiveTaskId, MMLiveCameraOperationItem, UICollectionViewFlowLayout, NSString;
@protocol MMLiveConnectMicAudienceCameraOperationPanelDelegate;

@interface MMLiveConnectMicAudienceCameraOperationPageSheet : MMPageSheetBaseView <UICollectionViewDataSource, MMLiveBeautyOperationPanelExternalClosing>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long nextStateAfterClose;
@property (retain, nonatomic) NSArray *operationItems;
@property (retain, nonatomic) MMLiveCameraOperationItem *switchCameraItem;
@property (retain, nonatomic) MMLiveCameraOperationItem *mirrorItem;
@property (retain, nonatomic) UICollectionViewFlowLayout *operationItemsLayout;
@property (retain, nonatomic) UICollectionView *operationItemsCollectionView;
@property (weak, nonatomic) id<MMLiveConnectMicAudienceCameraOperationPanelDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)showPanel;
- (void)closePanelDirectly;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)initializeComponents;
- (void)updateNavLeftButton;
- (void)oCloseButtonTapped;
- (void)updateOperationItems;
- (void)handleStateTransitionAction:(unsigned long long)a0;
- (void)handleMirrorItemAction;
- (void)handleSwitchCameraItemAction;
- (void)updateItemsAfterSwitchCameraFinished;
- (void)delayResetSwitchCameraItemDisabled;
- (void)updateMirrorItemStateAndReloadCell:(BOOL)a0;
- (void)updateSwitchCameraItemDisabled:(BOOL)a0;
- (id)liveTask;
- (void)closeWithNextState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
