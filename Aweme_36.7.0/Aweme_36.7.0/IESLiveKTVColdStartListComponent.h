@class IESLiveKTVComponentContext, NSString, NSTimer, IESLiveKTVCommonStore, HTSEventForwardingView, IESLiveMultiKTVLyricModeColdStartSongListView, IESLiveMultiKTVApi;

@interface IESLiveKTVColdStartListComponent : IESLiveInteractComponentBase <IESLiveKTVActions, HTSLiveMessageSubscriber, IESLiveSocialInteractAction>

@property (weak, nonatomic) IESLiveKTVComponentContext *ktvContext;
@property (weak, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (retain, nonatomic) HTSEventForwardingView *container;
@property (retain, nonatomic) IESLiveMultiKTVLyricModeColdStartSongListView *songListView;
@property (retain, nonatomic) NSTimer *songListViewTimer;
@property (nonatomic) long long songListOffset;
@property (nonatomic) BOOL songListLoading;
@property (retain, nonatomic) IESLiveMultiKTVApi *ktvApi;
@property (nonatomic) BOOL isFirstSEIArrived;
@property (nonatomic) double canShowTime;
@property (nonatomic) BOOL isJoinChannel;
@property (nonatomic) long long itemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)didSetAttachingDIContext;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (void)willStartPlayMusicWithMusicID:(id)a0 afterTime:(long long)a1;
- (void)didStartPlayMusicWithMusicID:(id)a0;
- (void)componentMountInternal;
- (void)componentUnmountInternal;
- (void)handleMultiKTVSEIModel:(id)a0;
- (void)updateKTVStageState:(unsigned long long)a0;
- (void)hideSongListView;
- (void)showSongListView;
- (BOOL)hasRemoteSinging;
- (void)openSongListTimer;
- (void)closeSongListTimer;
- (void)updateSongList;
- (void)trackSongsDisplay:(id)a0;
- (void)trackClickAddSong:(id)a0;
- (void)trackAddSongSuccess:(id)a0;
- (void)trackSongDisplay:(id)a0;
- (id)genParams:(id)a0;
- (void)updateRemoteMusicPlayingStatus:(long long)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)messageReceived:(id)a0;

@end
