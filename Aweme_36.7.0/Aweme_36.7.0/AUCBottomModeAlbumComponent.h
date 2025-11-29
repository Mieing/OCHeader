@class AUCBottomModeAlbumViewModel, AUCBottomModeAlbumController, NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService;

@interface AUCBottomModeAlbumComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCCameraLifeCircleEvent, AUCBottomModeAlbumControllerDelegate>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) AUCBottomModeAlbumViewModel *viewModel;
@property (retain, nonatomic) AUCBottomModeAlbumController *albumController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultInputData;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)enterAlbumMode;
- (void)exitAlbumMode;
- (void)albumControllerDidTapCloseButton:(id)a0;
- (void)albumController:(id)a0 didCompleteWithAssets:(id)a1;
- (void).cxx_destruct;

@end
