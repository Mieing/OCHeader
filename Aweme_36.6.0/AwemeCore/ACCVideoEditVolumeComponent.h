@class AWEVideoVolumeView, NSString, ACCEditVolumeBizModule, ACCVideoEditVolumeViewModel;
@protocol ACCEditSpecialEffectServiceProtocol, ACCEditorOneClickFilmingApplyDiffService, ACCCTRServiceProtocol, ACCEditViewContainer, ACCEditMusicServiceProtocol, ACCAdvanceEditServiceProtocol, ACCEditServiceProtocol;

@interface ACCVideoEditVolumeComponent : ACCFeatureComponent <HTSVideoSoundEffectPanelViewActionDelegate>

@property (nonatomic) BOOL hasAdjustReactVolumeOnViewDidAppear;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCAdvanceEditServiceProtocol> advanceEditService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingApplyDiffService> oneClickFilmingApplyDiffService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (retain, nonatomic) AWEVideoVolumeView *volumeContainer;
@property (retain, nonatomic) ACCVideoEditVolumeViewModel *viewModel;
@property (retain, nonatomic) ACCEditVolumeBizModule *volumeBizModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)barItem;
- (id)publishModel;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (BOOL)isImageAlbum;
- (BOOL)buttonEnable;
- (id)audioEffectService;
- (void)volumeViewBackButtonTapped;
- (void)bgmSliderDidFinishSlidingWithValue:(float)a0;
- (void)voiceSliderDidFinishSlidingWithValue:(float)a0;
- (BOOL)shouldAddSoundEnrance;
- (void)soundClicked:(id)a0;
- (void)createVolumeViewIfNeed;
- (void)volumeDoneClicked;
- (void).cxx_destruct;

@end
