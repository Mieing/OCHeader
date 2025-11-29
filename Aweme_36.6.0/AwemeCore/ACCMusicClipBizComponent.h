@class ACCEditCutMusicViewModel, NSString, AWEVideoPublishViewModel;
@protocol ACCMusicClipBizComponentDelegate, ACCSequenceEditServiceProtocol, IESServiceProvider, ACCEditMusicServiceProtocol, ACCLyricsStickerServiceProtocol, ACCEditServiceProtocol;

@interface ACCMusicClipBizComponent : NSObject <ACCEditPreviewMessageProtocol, ACCEditImageAlbumMixedMessageProtocol, ACCMusicClipBizComponentProtocol>

@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) ACCEditCutMusicViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCLyricsStickerServiceProtocol> lyricsStickerService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) BOOL fromLyrics;
@property (retain, nonatomic) NSString *audioPlayerTimeObserver;
@property (nonatomic) long long sceneType;
@property (weak, nonatomic) id<ACCMusicClipBizComponentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)totalVideoDuration;
- (void)p_bindViewModel;
- (void)realVideoFramePTSChanged:(double)a0;
- (void)onImageAlbumAudioPlayerCurrentPlayTimeChanged:(double)a0;
- (id)initWithService:(id)a0 serviceProvider:(id)a1 sceneType:(long long)a2;
- (void)p_initialForLVAudioFrame;
- (void)cutMusicClicked;
- (void)cutMusicClikcedFromLyrics:(BOOL)a0;
- (void)p_trackMusicEditFromLyricsSticker;
- (id)p_initMusicClipRangeAfterEnteringEditPage;
- (void)p_imageAlbumIsHitMusicClippingOrVolumeAdjustingTest;
- (void)createAudioClipFeatureManagerIfNeeded;
- (void)observeAsset;
- (void)p_trackMusicEdit;
- (void)onAudioPlayerCurrentPlayTimeChanged:(double)a0;
- (void)p_audioRangeDidChange:(struct _HTSAudioRange { double x0; double x1; })a0 changeType:(long long)a1;
- (void)p_showContainerViewIfNeeded;
- (void)didFinishClipMusic:(struct _HTSAudioRange { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setup;

@end
