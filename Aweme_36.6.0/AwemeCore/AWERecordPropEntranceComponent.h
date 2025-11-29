@class FPWritableStateFlow, AWERecordPropEntranceLayoutAction, NSString;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecordGestureService, ACCRecordSelectPropService, ACCRecordAuthService, ACCRecordScanModelFlowService, ACCSideslipPropService, ACCRecordUIHiddenStrategyService, ACCRecorderViewContainer, ACCCameraService, IESServiceProvider;

@interface AWERecordPropEntranceComponent : NSObject <ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordScanModelFlowSubscriber, ACCSideslipPropServiceSubscriber, ACCRecordGestureServiceSubscriber, FPInitialUIComponent>

@property (class, readonly, nonatomic) Class stateType;

@property (retain, nonatomic) FPWritableStateFlow *stateFlow;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSelectPropService> selectPropService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCRecordGestureService> gestureService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) AWERecordPropEntranceLayoutAction *layoutAction;
@property (nonatomic) BOOL hasCameraAndMicAuthorized;
@property (nonatomic) BOOL hasContainerVCAppeared;
@property (nonatomic) BOOL canDisplayPropBtn;
@property (nonatomic) BOOL canDisplayPropBtnTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FPWritableStateFlow *typeErasedStateFlow;

+ (id)initialUIStateWith:(id)a0;
+ (BOOL)isLiveDuetPhotoSession:(id)a0;
+ (id)calculateStickerLabelTextWithPublishModel:(id)a0 propName:(id)a1;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)onCameraDidStartRender:(id)a0;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)didMount;
- (id)publishViewModel;
- (void)sideslipPropService:(id)a0 willChangeShowState:(unsigned long long)a1;
- (id)initWith:(id)a0 serviceProvider:(id)a1;
- (void)loadViewState;
- (void)longPressGestureDidRecognized:(id)a0;
- (id)creationModel;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceWillExitScanMode;
- (void)preloadFirstHotSticker;
- (void)showSuperEntranceBubbleIfNeeded;
- (void)p_updatePropInfo:(id)a0;
- (void)p_applyEffectWithPack:(id)a0;
- (void)p_updatePropIconShowState;
- (void)p_updateIconForProp:(id)a0;
- (void)setLongPressOpenSticker;
- (void)p_addPageLifeCycleObservers;
- (void)p_addLogicServiceObserver;
- (void)p_addNotificationsObservers;
- (void)p_addExternalServiceObserver;
- (void)p_showPropPanel;
- (id)inputDataExtra;
- (void)updateSelectPropDisplayTypeWithSideslipPropShowState:(unsigned long long)a0;
- (void)p_handlePageAppeared;
- (void)showPropPanelWithView:(id)a0;
- (BOOL)shouldUpdatePropInfo:(id)a0;
- (BOOL)shouldShowSuperEntranceBubbleWithStickerID:(id)a0;
- (BOOL)shouldUpdatePropIconShowState;
- (void).cxx_destruct;
- (void)dealloc;

@end
