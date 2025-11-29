@class ACCRecordCutMusicViewModel;
@protocol AWEAudioClipFeatureManagerProtocol, ACCRecorderViewContainer, ACCEditMusicServiceProtocol, ACCRecordConfigService, ACCRecordTemplateVideoPreviewService;

@interface ACCRecordCutMusicComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<AWEAudioClipFeatureManagerProtocol> clipManager;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> recordMusicService;
@property (retain, nonatomic) ACCRecordCutMusicViewModel *viewModel;
@property (retain, nonatomic) id<ACCRecordConfigService> recordConfigService;
@property (retain, nonatomic) id<ACCRecordTemplateVideoPreviewService> templateVideoPreviewService;

- (void)componentDidMount;
- (void)bindViewModel;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)p_audioRangeDidChange:(struct _HTSAudioRange { double x0; double x1; })a0 changeType:(long long)a1;
- (void)p_showContainerViewIfNeeded;
- (void)showMusicClipView;
- (void).cxx_destruct;

@end
