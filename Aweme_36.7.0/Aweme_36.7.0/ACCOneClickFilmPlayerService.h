@class NSString, ACCOneClickFilmControlView, AWEVideoPublishViewModel, UIView, AWEBinding;
@protocol ACCEditorOneClickFilmingApplyDiffService, ACCSequenceEditServiceProtocol, IESServiceProvider, ACCSequencePlayControlServiceProtocol;

@interface ACCOneClickFilmPlayerService : NSObject <LVPlayerDelegate, ACCEditPreviewMessageProtocol, ACCOneClickFilmPlayerService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCOneClickFilmControlView *controlView;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingApplyDiffService> oneClickFilmingApplyDiffService;
@property (nonatomic) BOOL pauseByGesture;
@property (nonatomic) BOOL hasEnteredBackground;
@property (nonatomic) struct CGSize { double width; double height; } originPlayerSize;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *previewContainer;
@property (retain, nonatomic) AWEBinding *updatePauseViewSignal;

- (void)playStatusChanged:(long long)a0;
- (void)playerDidPlay;
- (id)preView;
- (void)playerDidPause;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)setupOneClickPreviewEditPlayer;
- (void)updateOnePreviewEditPlayer;
- (void)playIfPauseByEnterBackground;
- (void)pauseByGestureAction;
- (BOOL)isMultiToOneTemplate;
- (void)updatePreviewWithWorkspaceStatus:(BOOL)a0;
- (void)updatePreviewPlayStatusWithWorkspaceStatus:(BOOL)a0;
- (void)updatePlayIcon;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;

@end
