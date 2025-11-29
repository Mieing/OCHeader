@class NSString, AWEStudioEditPlayControlFeatureConfig;
@protocol ACCSequenceEditServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCStickerGestureComponentProtocol, ACCEditorOneClickFilmingExitServiceProtocol, ACCStickerServiceProtocol;

@interface ACCEditPlayControlComponent : ACCFeatureComponent <ACCEditPreviewMessageProtocol, ACCEditPlayControlOptimizeProtocol, ACCSequenceEditServicePlayerSubscriber>

@property (retain, nonatomic) AWEStudioEditPlayControlFeatureConfig *featureConfig;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingExitServiceProtocol> oneClickFilmExitService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (nonatomic) unsigned long long lastProjectsCount;
@property (nonatomic) BOOL isPlayingBeforeDrag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)playerCurrentPlayTimeChanged:(double)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)playStatusChanged:(long long)a0;
- (void)playerDidPlay;
- (void)playerDidPause;
- (void)bindServices:(id)a0;
- (void)dragPlayTimeBegin:(double)a0;
- (void)dragPlayTimeChanged:(double)a0;
- (void)dragPlayTimeEnd:(double)a0;
- (void)playPauseButtonDidClick:(id)a0;
- (void)handlePlayPauseAction:(id)a0;
- (void)showEditView:(BOOL)a0 animated:(BOOL)a1;
- (void)trackProgressBarDragEvent;
- (void)trackPlayPauseClickEventWithStatus:(id)a0;
- (BOOL)isNote;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (id)containerView;
- (void)dealloc;
- (id)preview;

@end
