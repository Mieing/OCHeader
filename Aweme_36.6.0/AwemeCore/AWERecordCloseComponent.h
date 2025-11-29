@class FPWritableStateFlow, AWERecordCloseCoordinator, NSString;
@protocol AWEStudioInspirationFollowFeaturePublicAPI, AWERedPackThemeService, IESServiceProvider;

@interface AWERecordCloseComponent : NSObject <ACCRecorderViewContainerItemsHideShowObserver, ACCRecordScanModelFlowSubscriber, AWERedPackThemeServiceSubscriber, AWERecordInspirationServiceSubscriber, FPInitialUIComponent>

@property (class, readonly, nonatomic) Class stateType;

@property (retain, nonatomic) FPWritableStateFlow *typeErasedStateFlow;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) AWERecordCloseCoordinator *coordinator;
@property (retain, nonatomic) id<AWERedPackThemeService> redPackThemeService;
@property (weak, nonatomic) id<AWEStudioInspirationFollowFeaturePublicAPI> inspirationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initialUIStateWith:(id)a0;

- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)didMount;
- (id)initWith:(id)a0 serviceProvider:(id)a1;
- (void)loadViewState;
- (void)saveDraft;
- (void)flowServiceDidEnterScanMode;
- (void)flowServiceWillExitScanMode;
- (void)redPackThemeServiceRecordModeChanged;
- (void)closeRecorder;
- (void)inspirationEnterEffectTakeSame;
- (void)inspirationExitEffectTakeSame;
- (void)addObserverLogicService;
- (void)cancelDraftChanged;
- (void)executeClickEvent;
- (void)giveUpDraftChanged;
- (void)againShoot;
- (void)exitShoot;
- (void)cancelShoot;
- (void)exitCameraPage;
- (void)againShootWhenBack;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateCloseButtonVisibility;

@end
