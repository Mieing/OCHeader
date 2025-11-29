@class IESLiveKTVSingerModel, IESLiveKTVMidiStore, HTSLiveKTVUserSingingHotMessage, IESLiveAudioKTVControlBar, IESLiveMultiKTVApi, NSString;
@protocol IESLiveMultiKTVStageProvider;

@interface IESLiveMultiKTVControlPlugin : IESLiveMultiKTVStagePluginBase <HTSLiveMessageSubscriber, IESLiveKTVActions, IESLiveKTVDecorateReaction, IESLiveUniformTagReaction, IESLiveMultiKTVStagePluginProtocol>

@property (retain, nonatomic) IESLiveAudioKTVControlBar *controlBar;
@property (retain, nonatomic) IESLiveKTVSingerModel *model;
@property (nonatomic) BOOL isControlMode;
@property (nonatomic) double lastSingerTime;
@property (weak, nonatomic) IESLiveKTVMidiStore *midiStore;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) BOOL cpuOptimizationEnable;
@property (weak, nonatomic) id<IESLiveMultiKTVStageProvider> multiKTVStageProvider;
@property (retain, nonatomic) HTSLiveKTVUserSingingHotMessage *previewHotMessage;
@property (retain, nonatomic) IESLiveMultiKTVApi *ktvApi;
@property (nonatomic) BOOL isFirst;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (void)didSetAttachingDIContext;
- (void)realStart;
- (void)updateRemainTime:(double)a0;
- (void)updateListenerPlayingTime:(double)a0;
- (void)didPausePlayMusicWithMusicID:(id)a0;
- (void)didResumePlayMusicWithMusicID:(id)a0;
- (void)didKTVOrderListChanged;
- (void)didKTVIMOrderListChanged;
- (void)updateSinger:(id)a0;
- (void)didReceiveYellowDotFromRemote;
- (void)didClearYellowDot;
- (void)smoothEnterRoomFromPreview;
- (void)onMessageReceivedFromPrestream:(id)a0 withDict:(id)a1;
- (void)handleMultiKTVSEIModel:(id)a0;
- (void)updateKTVStageState:(unsigned long long)a0;
- (void)updateRemoteMusicPlayingStatus:(long long)a0;
- (void)updateSingerPlayingTime:(double)a0;
- (void)didUpdateGuest:(id)a0;
- (void)didActivateInKTVStageContainerView:(id)a0;
- (void)didDeactivated;
- (void)smoothExitRoomToPreview:(id)a0;
- (void)willStartPlayingMusic:(id)a0 afterTime:(long long)a1;
- (void)didStartPlayingMusic:(id)a0;
- (void)didStopPlayingMusic:(id)a0;
- (void)updateRemotePlayingMusicID:(id)a0;
- (void)updatePlayingUser:(id)a0;
- (void)startWithMusic:(id)a0;
- (void)endMusicWithSource:(id)a0;
- (void)enterContrlMode;
- (void)resumeControl;
- (void)p_orderListChanged;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
