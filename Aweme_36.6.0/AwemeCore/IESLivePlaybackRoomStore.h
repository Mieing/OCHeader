@class HTSLiveEpisode, HTSEventContext, IESLivePlaybackComponentContext, HTSLiveMoreHighlight, NSNumber, NSString;
@protocol IESLivePlaybackAPI;

@interface IESLivePlaybackRoomStore : NSObject <IESVSVideoPlayAction, IESLivePlaybackChangeStreamAction, IESLivePlaybackRoomService>

@property (retain, nonatomic) id<IESLivePlaybackAPI> api;
@property (retain, nonatomic) NSNumber *episodeID;
@property (nonatomic) double videoCurrentDuration;
@property (nonatomic) double videoTotalDuration;
@property (nonatomic) BOOL didPlayFinished;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) HTSLiveEpisode *currentEpisode;
@property (retain, nonatomic) HTSLiveMoreHighlight *moreLight;
@property (nonatomic) long long pingDuration;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL isUsingCache;
@property (nonatomic) BOOL didLeaveRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onVideoProgressUpdate:(double)a0 duration:(double)a1;
- (void)streamChangedWithEpisode:(id)a0;
- (double)getVideoHistoryTime;
- (void)startPingRoom;
- (id)initWitheEpisodeID:(id)a0 diContext:(id)a1;
- (void)enterRoomWithLocalCache:(BOOL)a0 completion:(id /* block */)a1;
- (void)leavePlaybackRoom;
- (void)updateHistoryWithCurrentDuration:(double)a0;
- (void)updateEpisode:(id)a0;
- (void)mergeEpisodeLocalInfo:(id)a0;
- (void).cxx_destruct;

@end
