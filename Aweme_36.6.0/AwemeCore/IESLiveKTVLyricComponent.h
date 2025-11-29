@class IESLiveKTVResourceManager, NSString, HTSEventForwardingView, IESLiveKTVComponentContext, IESLiveKTVCommonStore, IESLiveKTVDynamicBGLyricView, NSNumber, UILabel;

@interface IESLiveKTVLyricComponent : IESLiveInteractComponentBase <IESLiveKTVActions, IESLiveSocialInteractAction>

@property (weak, nonatomic) IESLiveKTVComponentContext *ktvContext;
@property (weak, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (retain, nonatomic) HTSEventForwardingView *container;
@property (retain, nonatomic) IESLiveKTVDynamicBGLyricView *dynamicView;
@property (retain, nonatomic) IESLiveKTVResourceManager *resourceManager;
@property (nonatomic) long long guestListHeight;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) NSString *preLyricUrl;
@property (retain, nonatomic) NSNumber *preDownloadLyricMusicId;
@property (nonatomic) BOOL hasLyric;
@property (nonatomic) unsigned long long preState;
@property (retain, nonatomic) UILabel *toastNoLyricLabel;
@property (nonatomic) BOOL isSingModeVideo;
@property (nonatomic) BOOL isJoinChannel;
@property (nonatomic) double shouldShowLyricTS;
@property (nonatomic) double lyricURLArrivedTS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)didSetAttachingDIContext;
- (void)showLyricView;
- (BOOL)isShow;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (void)releaseComponent;
- (void)updateListenerPlayingTime:(double)a0;
- (void)willStartPlayMusicWithMusicID:(id)a0 afterTime:(long long)a1;
- (void)didStartPlayMusicWithMusicID:(id)a0;
- (void)didStopPlayMusicWithMusicID:(id)a0 finished:(BOOL)a1;
- (void)handleMultiKTVSEIModel:(id)a0;
- (void)updateKTVStageState:(unsigned long long)a0;
- (void)initComponent;
- (void)updateSingerPlayingTime:(double)a0;
- (void)hideNoLyricToast;
- (void)updateLyricsIfSelfSinging;
- (void)showDynamicKtvToast;
- (void)closeLyricView;
- (void)trackLyricArrived;
- (void)downloadLyricAndUpdateView:(id)a0 musicID:(id)a1 lyricType:(unsigned long long)a2 lyricsOffset:(id)a3 duration:(unsigned long long)a4;
- (void)trackLyricGot;
- (void)dismissDynamicView;
- (void).cxx_destruct;
- (void)addObserver;
- (void)clean;

@end
