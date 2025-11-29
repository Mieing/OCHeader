@class NSString, IESLiveKTVChorusRankListView, HTSEventForwardingView, IESLiveKTVComponentContext, IESLiveGCDTimer, IESLiveKTVCommonStore, NSNumber, IESLiveKtvSongStruct;

@interface IESLiveKTVChorusRankListComponent : IESLiveInteractComponentBase <HTSLiveMessageSubscriber, IESLiveKTVActions>

@property (weak, nonatomic) IESLiveKTVComponentContext *ktvContext;
@property (weak, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (retain, nonatomic) HTSEventForwardingView *container;
@property (retain, nonatomic) IESLiveKTVChorusRankListView *listView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (copy, nonatomic) NSString *selfUserID;
@property (retain, nonatomic) IESLiveKtvSongStruct *lastSongModel;
@property (retain, nonatomic) NSString *lastTitle;
@property (retain, nonatomic) NSNumber *lastSongID;
@property (nonatomic) long long preChorusId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)didSetAttachingDIContext;
- (void)didStartPlayMusicWithMusicID:(id)a0;
- (void)dismissRankView;
- (void)trackShowRankList:(id)a0;
- (void)showRankListIfNeed:(id)a0;
- (void)trackShowLynxRankList;
- (void).cxx_destruct;
- (void)addObserver;
- (void)messageReceived:(id)a0;

@end
