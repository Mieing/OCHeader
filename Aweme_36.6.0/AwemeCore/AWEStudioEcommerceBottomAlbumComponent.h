@class NSArray, NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, AUCPresentedAlbumCustomConfigService, AUCBottomModeAlbumService;

@interface AWEStudioEcommerceBottomAlbumComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCCameraLifeCircleEvent, AUCBottomModeAlbumServiceSubscriber, AUCPresentedAlbumCustomConfigServiceSubscriber>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<AUCBottomModeAlbumService> bottomModeAlbumService;
@property (weak, nonatomic) id<AUCPresentedAlbumCustomConfigService> presentedAlbumService;
@property (retain, nonatomic) NSArray *selectedAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)updatePresentedAlbumInputDataIfNeeded:(id)a0;
- (void)albumGoEditorPageWithAssets:(id)a0;
- (void)albumDidCompleteWithAssets:(id)a0;
- (void)updateAlbumInputDataIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
