@class HTSLiveEpisode, IESLivePayWallPingAPI, IESLiveGCDTimer, HTSEventContext;

@interface IESLivePlaybackPayWallFreeTrialStore : NSObject

@property (retain, nonatomic) IESLivePayWallPingAPI *api;
@property (retain, nonatomic) IESLiveGCDTimer *pingTimer;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)gotoPromise:(id /* block */)a0;
- (void)cleanFreeTrialReport;
- (id)roomIDForLog;
- (id)episodeIDForLog;
- (void)startHeartBeat:(id /* block */)a0;
- (void)userPromiseAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithEpisode:(id)a0;
- (void)stopHeartBeat;

@end
