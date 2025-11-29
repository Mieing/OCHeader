@class NSString;
@protocol DVEEditingRuntimeProtocol, ACCAEViewContainerProtocol, DVELoadingViewProtocol, ACCAEComponentActionProtocol, ACCAdvanceEditViewModelProtocol, ACCAETrackLinkageServiceProtocol, DVETrackEventProtocol, DVEPlayerServiceProtocol, DVECoreVideoProtocol;

@interface ACCAEVideoEditActionComponent : ACCAdvanceEditComponent <DVEVideoTimeRangeChangeDelegate, DVEAudioVolumeBarControllerDelegate>

@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackManager;
@property (weak, nonatomic) id<DVECoreVideoProtocol> videoEditor;
@property (weak, nonatomic) id<ACCAETrackLinkageServiceProtocol> trackLinkageService;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (weak, nonatomic) id<DVELoadingViewProtocol> loadingView;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> rootViewControoler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (BOOL)checkIsimage:(id)a0;
- (void)videoTimeRangeChangeDidCancelWithModel:(id)a0 fromModel:(id)a1;
- (void)clickVideoSplit:(id)a0;
- (void)clickVideoSpeed:(id)a0;
- (id)videoSpeedStatus:(id)a0;
- (void)clickVideoSound:(id)a0;
- (id)videoSoundStatus:(id)a0;
- (void)clickVideoDelete:(id)a0;
- (void)clickVideoRotation:(id)a0;
- (void)clickVideoReverse:(id)a0;
- (id)reverseStatus:(id)a0;
- (void)didClickApply;
- (void).cxx_destruct;

@end
