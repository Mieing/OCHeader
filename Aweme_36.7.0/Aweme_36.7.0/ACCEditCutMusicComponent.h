@class NSString, ACCMusicClipBizComponent, ACCEditCutMusicViewModel;
@protocol AEKEditMediaGenrePublicAPI, ACCEditViewContainer, ACCEditMusicServiceProtocol, ACCLyricsStickerServiceProtocol, ACCVideoFriendsEditMusicShareStoryService;

@interface ACCEditCutMusicComponent : ACCFeatureComponent <ACCEditPreviewMessageProtocol, ACCEditImageAlbumMixedMessageProtocolD, ACCMusicClipBizComponentDelegate>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCLyricsStickerServiceProtocol> lyricsStickerService;
@property (weak, nonatomic) id<AEKEditMediaGenrePublicAPI> mediaGenreTransferService;
@property (weak, nonatomic) id<ACCVideoFriendsEditMusicShareStoryService> musicShareService;
@property (nonatomic) BOOL fromLyrics;
@property (retain, nonatomic) ACCEditCutMusicViewModel *viewModel;
@property (retain, nonatomic) NSString *audioPlayerTimeObserver;
@property (retain, nonatomic) ACCMusicClipBizComponent *clipBiz;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)barItemContainerDidLoad;
- (id)publishModel;
- (double)totalVideoDuration;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (BOOL)buttonEnable;
- (void)p_bindViewModel;
- (id)editService;
- (id)sequenceEditService;
- (void)realVideoFramePTSChanged:(double)a0;
- (void)bindServices:(id)a0;
- (void)onImageAlbumAudioPlayerCurrentPlayTimeChanged:(double)a0;
- (void)observeClipView;
- (void)p_initialForLVAudioFrame;
- (void)p_updateClipMusicBarItem:(BOOL)a0;
- (void)cutMusicClicked;
- (BOOL)p_shouldSaveDraftWhenAddMusic;
- (void)cutMusicClikcedFromLyrics:(BOOL)a0;
- (void)p_trackMusicEditFromLyricsSticker;
- (id)p_initMusicClipRangeAfterEnteringEditPage;
- (void)p_imageAlbumIsHitMusicClippingOrVolumeAdjustingTest;
- (void)createAudioClipFeatureManagerIfNeeded;
- (BOOL)shareStoryPath;
- (void)observeAsset;
- (void)p_trackMusicEdit;
- (void)onAudioPlayerCurrentPlayTimeChanged:(double)a0;
- (void)p_audioRangeDidChange:(struct _HTSAudioRange { double x0; double x1; })a0 changeType:(long long)a1;
- (void)p_showContainerViewIfNeeded;
- (void)didFinishClipMusic:(struct _HTSAudioRange { double x0; double x1; })a0;
- (id)audioEffectService;
- (void).cxx_destruct;
- (id)containerViewController;
- (id)musicAsset;

@end
