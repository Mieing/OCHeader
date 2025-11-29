@class UIImageView, NSString;
@protocol ACCEditCutMusicServiceProtocol, ACCEditViewContainer, ACCEditMusicServiceProtocol, ACCEditServiceProtocol;

@interface ACCImageAlbumPlayControlComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCEditImageAlbumMixedMessageProtocolD>

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCEditCutMusicServiceProtocol> cutMusicService;
@property (retain, nonatomic) UIImageView *firstPlaceholderImageView;
@property (nonatomic) long long lastTrackedImageAlbumIndex;
@property (nonatomic) BOOL lastHandlerBubbleVisibleFlag;
@property (nonatomic) BOOL didHandleInitialImageIndexJump;
@property (nonatomic) BOOL p_isViewAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;

- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)firstRenderWithEditService:(id)a0;
- (id)aAWEStudioGlobalConfig;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (void)bindServices:(id)a0;
- (void)onCurrentImageEditorChanged:(long long)a0 isByAutoTimer:(BOOL)a1;
- (void)onPlayerDraggingStatusChanged:(BOOL)a0;
- (void)adapteMultiProjectsDegradeIfNeed;
- (void)p_setupFirstPlaceholder;
- (void)p_setupContainer;
- (void)p_setupAutoPlay;
- (void)updateMusicAfterEnteringEditPage;
- (void)p_resetPlayerWhenAppear;
- (void)updateMusicAfterMusicInfoChanged;
- (void)p_onEditStickerBubbleVisableDidChangedNotify:(id)a0;
- (void)hiddenFirstPlaceholderImageView;
- (void)p_trackImageAlbumIndexChangedWithTargetIndex:(long long)a0 isByAutoTimer:(BOOL)a1;
- (void)p_updateMusicModelBgmAssetForDetailMusic:(id)a0;
- (void)p_updateMusicClipRangeIfNeeded;
- (struct _HTSAudioRange { double x0; double x1; })p_defaultMusicRange;
- (id)p_commonTrackParams;
- (void).cxx_destruct;
- (void)dealloc;

@end
