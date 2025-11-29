@class ACCEditSingleVideoPlayControlView, NSString;
@protocol ACCTextStickerServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditorOneClickFilmingApplyDiffService, ACCOneClickFilmPlayerService, ACCOCFViewContainerProtocol;

@interface ACCOCFPlayControlComponent : ACCFeatureComponent <ACCEditPreviewMessageProtocol, ACCEditPlayControlViewDelegate>

@property (retain, nonatomic) ACCEditSingleVideoPlayControlView *playControlView;
@property (nonatomic) double currentTotalDuration;
@property (nonatomic) BOOL isPlayingBeforeDrag;
@property (weak, nonatomic) id<ACCOCFViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingApplyDiffService> oneClickFilmingApplyDiffService;
@property (weak, nonatomic) id<ACCTextStickerServiceProtocol> textStickerService;
@property (weak, nonatomic) id<ACCOneClickFilmPlayerService> playerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)playerCurrentPlayTimeChanged:(double)a0;
- (double)totalVideoDuration;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)playStatusChanged:(long long)a0;
- (id)preView;
- (void)dragPlayTimeBegin:(double)a0;
- (void)dragPlayTimeChanged:(double)a0;
- (void)dragPlayTimeEnd:(double)a0;
- (void)executePlayStatusChangeToPause:(id)a0;
- (void)updatePlayControlDurationIfNeeded;
- (void)setupPlayControlView;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)handleTapGesture;

@end
