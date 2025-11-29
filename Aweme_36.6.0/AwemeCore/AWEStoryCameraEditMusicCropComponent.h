@class AWEStoryCameraEditMusicCropViewModel, ACCToastWithCancelView, NSMutableArray;
@protocol ACCLivePhotoEditServiceProtocol, AEKEditMediaGenrePublicAPI, ACCEditMusicServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCAdvanceEditServiceProtocol, ACCEditCutMusicServiceProtocol;

@interface AWEStoryCameraEditMusicCropComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCEditCutMusicServiceProtocol> cutMusicService;
@property (weak, nonatomic) id<AEKEditMediaGenrePublicAPI> mediaGenreTransferService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (retain, nonatomic) ACCToastWithCancelView *adjustToast;
@property (weak, nonatomic) id<ACCAdvanceEditServiceProtocol> advanceEditService;
@property (retain, nonatomic) AWEStoryCameraEditMusicCropViewModel *viewModel;
@property (retain, nonatomic) NSMutableArray *deletedVideoResourceList;
@property (nonatomic) BOOL totalTimeOverLimitDuration;
@property (retain, nonatomic) id<ACCLivePhotoEditServiceProtocol> livePhotoService;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (BOOL)disableSlidesAIClip;
- (void)musicUpdateDurationIfNeed;
- (void)musicAICropIfNeed;
- (void)advanceEditSaveOperation;
- (void)showMusicAICropIfNeed;
- (void)cropMainVideoDuration;
- (void)showAICropCancelToast;
- (void)cropAudioEditorFitMainVideoDuration;
- (void)bindMusicChangedUpdateContentDuration;
- (void)updateSlidesScrollDuration:(double)a0;
- (BOOL)isLiveMode;
- (double)calculateDurationUseBGM;
- (double)calculateDurationWithoutBGM;
- (void).cxx_destruct;

@end
