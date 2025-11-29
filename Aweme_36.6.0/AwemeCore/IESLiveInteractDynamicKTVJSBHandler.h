@protocol IESLiveKTVPlayerService, IESLiveSEISenderService, IESLiveKTVSendEventService, IESLiveVideoChorusService, IESLiveKTVTuningService, IESLiveKTVMidiService, IESLiveInteractPushStreaming, IESLiveKTVDownloadService, IESLiveKTVService, IESLiveKTVLyricService, IESLiveKTVMusicListService;

@interface IESLiveInteractDynamicKTVJSBHandler : IESLiveInteractDynamicJSBHandler

@property (weak, nonatomic) id<IESLiveKTVService> ktvService;
@property (weak, nonatomic) id<IESLiveKTVTuningService> tuningService;
@property (weak, nonatomic) id<IESLiveSEISenderService> seiSender;
@property (weak, nonatomic) id<IESLiveKTVPlayerService> player;
@property (weak, nonatomic) id<IESLiveKTVMidiService> midiService;
@property (weak, nonatomic) id<IESLiveKTVDownloadService> downloadService;
@property (weak, nonatomic) id<IESLiveKTVLyricService> lyricService;
@property (weak, nonatomic) id<IESLiveKTVMusicListService> musicListService;
@property (weak, nonatomic) id<IESLiveKTVSendEventService> ktvSendEventService;
@property (weak, nonatomic) id<IESLiveVideoChorusService> videoChorusService;
@property (weak, nonatomic) id<IESLiveInteractPushStreaming> interactStreamer;
@property (nonatomic) double lynxTransferTimeGapMax;
@property (nonatomic) BOOL isDownloadCallbackOpt;
@property (nonatomic) BOOL isCreatePlayerOpt;
@property (nonatomic) BOOL needCallSetRealTimeChorusScene;
@property (nonatomic) BOOL needJudgeDownloading;
@property (nonatomic) BOOL switchOriginalOpt;

- (void)didSetAttachingDIContext;
- (id)handleCreateMusic:(id)a0 context:(id)a1;
- (id)handleDestroyMusic:(id)a0 context:(id)a1;
- (id)handlePlayMusic:(id)a0 context:(id)a1;
- (id)handlePauseMusic:(id)a0 context:(id)a1;
- (id)handleSeekMusic:(id)a0 context:(id)a1;
- (id)handleSetOriginEnable:(id)a0 context:(id)a1;
- (id)handleSetMixerEnable:(id)a0 context:(id)a1;
- (id)handleDownloadMusic:(id)a0 context:(id)a1;
- (id)handleSendSEI:(id)a0 context:(id)a1;
- (id)handleSetEchoMode:(id)a0 context:(id)a1;
- (id)handleSetPitchShift:(id)a0 context:(id)a1;
- (id)handleSetLoudNormParams:(id)a0 context:(id)a1;
- (id)handleSetEnableLoudNorm:(id)a0 context:(id)a1;
- (id)handleSetKtvEffect:(id)a0 context:(id)a1;
- (id)handleSetVoiceVolume:(id)a0 context:(id)a1;
- (id)handleSetOthersVolume:(id)a0 context:(id)a1;
- (id)handleSetBgmPlayerVolume:(id)a0 context:(id)a1;
- (id)handleSetBGMPushVolume:(id)a0 context:(id)a1;
- (id)handleSingStateChanged:(id)a0 context:(id)a1;
- (id)handleOpenOrderPanel:(id)a0 context:(id)a1;
- (id)handleSetEnablePipelineMode:(id)a0 context:(id)a1;
- (id)handleDownloadTuningEffect:(id)a0 context:(id)a1;
- (id)handleSetEarMonitorVolume:(id)a0 context:(id)a1;
- (id)exception:(id)a0 context:(id)a1;
- (id)handleGetPitchShift:(id)a0 context:(id)a1;
- (id)handleIsEnableLoudNorm:(id)a0 context:(id)a1;
- (id)handleGetHeadSetState:(id)a0 context:(id)a1;
- (id)handleGetMidiScoreInfo:(id)a0 context:(id)a1;
- (id)handlegetOrederedSongList:(id)a0 context:(id)a1;
- (void)setupMidiIfNeededWithMusicID:(id)a0;
- (void)setupLyricIfNeededWithMusicID:(id)a0 uiLayout:(int)a1 lyricURL:(id)a2 lyricType:(long long)a3;
- (id)jsb_get_ktv_order_info:(id)a0 context:(id)a1;
- (id)jsb_update_karaoke:(id)a0 context:(id)a1;
- (id)jsb_get_karaoke:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
