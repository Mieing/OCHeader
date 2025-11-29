@class IESLiveKTVChorusMusicManager, HTSEventContext, NSString, IESLiveKTVCommonStore, IESLiveKTVChorusApi, IESLiveChorusInfo, IESLiveKTVChorusSEIHandler;
@protocol IESLiveCompoundSubscription;

@interface IESLiveKTVChorusStore : NSObject <HTSLiveMessageSubscriber, IESLiveKTVActions, IESLiveRevenueInteractAction, IESLiveKTVChorusRouter, IESLiveKTVChorusActions, IESLiveKTVChorusProvider>

@property (retain, nonatomic) IESLiveChorusInfo *chorusInfo;
@property (retain, nonatomic) IESLiveKTVChorusApi *api;
@property (weak, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (nonatomic) BOOL isChorusStart;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> dispose;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveKTVChorusSEIHandler *seiHandler;
@property (retain, nonatomic) IESLiveKTVChorusMusicManager *musicManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentMusic;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (id)initWithDIContext:(id)a0 trackContext:(id)a1;
- (void)bindStore:(id)a0;
- (void)startChorus:(id)a0;
- (BOOL)isCurrentUserLeader;
- (BOOL)isInChorus;
- (void)didSongListChanged:(id)a0;
- (void)didPlayUnvailableMusic:(id)a0;
- (void)endChorus:(id)a0 reason:(int)a1;
- (id)ktvMusicManager;
- (BOOL)isCurrentUserFollower;
- (id)whoseMusicForTrack:(id)a0;
- (id)chorusDictForTrack;
- (BOOL)isInChorusWithScene;
- (void)fetchChorusOrderList:(id /* block */)a0;
- (void)audienceGetState;
- (void)tr_endChorus;
- (id)currentChannelId;
- (void)p_willChorusStart:(id)a0 chorusInfo:(id)a1;
- (void)leaderHandleSingerStateChanged;
- (void)p_willChorusEnd:(id)a0;
- (void)tr_startChorus;
- (void)leaderCheckNextState;
- (BOOL)isLeader:(id)a0;
- (void)didComponentUnmount;
- (void).cxx_destruct;
- (void)addObserver;
- (id)player;
- (void)messageReceived:(id)a0;

@end
