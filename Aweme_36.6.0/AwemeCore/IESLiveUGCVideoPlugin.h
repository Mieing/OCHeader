@class IESLiveKTVMVInfo, NSString, IESLiveKtvSongStruct, HTSEventForwardingView, UIView, IESLiveInteractionMVPlayerManager, IESLiveKTVFullLinkMonitor;

@interface IESLiveUGCVideoPlugin : IESLiveMultiKTVStagePluginBase <IESLiveInteractionMVPlayerManagerDelegate, IESLiveMultiKTVStagePluginProtocol>

@property (retain, nonatomic) HTSEventForwardingView *container;
@property (retain, nonatomic) IESLiveInteractionMVPlayerManager *mvPlayerManager;
@property (weak, nonatomic) UIView *playerView;
@property (retain, nonatomic) HTSEventForwardingView *giftBackgroundContainer;
@property (retain, nonatomic) IESLiveKTVMVInfo *curMVInfo;
@property (retain, nonatomic) IESLiveKTVMVInfo *updateMVInfoWhileCameraOpen;
@property (retain, nonatomic) IESLiveKTVMVInfo *defaultMVInfo;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) int curSingMode;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL hotViewShowing;
@property (nonatomic) BOOL isSelfSinging;
@property (copy, nonatomic) NSString *currentLoginUserID;
@property (retain, nonatomic) IESLiveKtvSongStruct *curPlayingMusic;
@property (nonatomic) double pauseTiming;
@property (nonatomic) double pauseDuration;
@property (nonatomic) double startTiming;
@property (copy, nonatomic) NSString *curSingerID;
@property (retain, nonatomic) HTSEventForwardingView *blackAspectFitView;
@property (weak, nonatomic) UIView *dynamicContainer;
@property (weak, nonatomic) IESLiveKTVFullLinkMonitor *ktvMonitor;
@property (nonatomic) BOOL needReportDuraion;
@property (nonatomic) BOOL calibrateMV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (void)didSetAttachingDIContext;
- (id)currentMusic;
- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)didPausePlayMusicWithMusicID:(id)a0;
- (void)didResumePlayMusicWithMusicID:(id)a0;
- (void)handleMultiKTVSEIModel:(id)a0;
- (void)updateKTVStageState:(unsigned long long)a0;
- (void)updateStageSingMode:(int)a0;
- (void)didActivateInKTVStageContainerView:(id)a0;
- (void)didDeactivated;
- (void)didPluginLoaded;
- (void)didPluginUnload;
- (void)didStartPlayingMusic:(id)a0;
- (void)didStopPlayingMusic:(id)a0;
- (void)updatePlayingUser:(id)a0;
- (void)updateKTVMVInfo:(id)a0;
- (void)willDisplayEndAndHotRankView:(id)a0 style:(unsigned long long)a1;
- (void)willEndDisplayEndAndHotRankView:(id)a0 style:(unsigned long long)a1;
- (id)defaultVid;
- (void)setupDIContext;
- (void)tryStartPlayingWithMVInfo:(id)a0;
- (BOOL)filterUnexpectedSei:(id)a0;
- (void)trackMVStopped;
- (void)changePlayerContentWithMVInfo:(id)a0;
- (void)trackMVPlay;
- (void)trackMVPlayWithEvent:(id)a0 params:(id)a1;
- (id)urlList;
- (void).cxx_destruct;
- (id)userType;
- (BOOL)isConnected;
- (BOOL)isAnchor;
- (void)dealloc;
- (id)urlKey;

@end
