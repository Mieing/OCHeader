@class UIButton, NSArray, ACCBarItem, NSString, ACCHorizontalToolBarAdapter, HorizontalToolBarContainer;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordSystemLivePhotoService, AWEStudioRecordCinemaRuntimeService, ACCRecordSelectMusicService, ACCLandscapeRecordService, ACCRecordAuthService, ACCCameraService, ACCRecordFrameRatioService;

@interface AWEStudioRecordCinemaToolbarComponent : ACCFeatureComponent <ACCCameraLifeCircleEvent, ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordSystemLivePhotoServiceSubscriber, ACCRecordFrameRatioServiceSubscriber, ACCLandscapeRecordServiceSubscriber, ACCRecorderEvent>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<AWEStudioRecordCinemaRuntimeService> cinemaRuntimeService;
@property (weak, nonatomic) id<ACCRecordSystemLivePhotoService> livePhotoService;
@property (weak, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (weak, nonatomic) id<ACCRecordSelectMusicService> musicService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCLandscapeRecordService> landscapeRecordService;
@property (weak, nonatomic) id<ACCRecordAuthService> authService;
@property (copy, nonatomic) NSArray *barItems;
@property (retain, nonatomic) HorizontalToolBarContainer *barContainer;
@property (retain, nonatomic) ACCHorizontalToolBarAdapter *barAdapter;
@property (retain, nonatomic) ACCBarItem *musicBarItem;
@property (retain, nonatomic) UIButton *flipButton;
@property (copy, nonatomic) id /* block */ flipButtonDidTapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)recorderDeviceOrientationChanged:(long long)a0;
- (void)onDidSwitchColorSpaceWithError:(id)a0;
- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)cameraService:(id)a0 startVideoCaptureWithError:(id)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)viewContainerDidLayout;
- (void)recordSystemLivePhotoEnableStateChanged:(BOOL)a0 preState:(BOOL)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)recordFrameRatioWillSwitchTo:(long long)a0;
- (void)recordStatusDidChangeThenUpdateToolbarHiddenStatus;
- (void)reloadBarItemWithType:(void *)a0;
- (void)startBarAlphaAnimationAnimated:(BOOL)a0;
- (void)setupToolbarIfNeeded;
- (id)barItemImageWithName:(id)a0;
- (BOOL)updateBarItemStyleIfNeeded:(id)a0 type:(void *)a1 normalItem:(id)a2;
- (void)trackItemEvent:(id)a0 itemType:(void *)a1;
- (id)createTopItemWithType:(void *)a0 normalItem:(id)a1;
- (void)reloadBarItemDataWithType:(void *)a0;
- (void).cxx_destruct;

@end
