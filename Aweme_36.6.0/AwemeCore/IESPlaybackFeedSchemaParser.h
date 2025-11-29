@class NSString;
@protocol IESLivePlaybackAPI;

@interface IESPlaybackFeedSchemaParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) id<IESLivePlaybackAPI> api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (id)p_topViewController;
- (void)enterPlaybackFeedWithEpisodeId:(id)a0 params:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (void)enterPlaybackFeedWithEpisode:(id)a0 params:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (BOOL)needPopupNavigatrion:(id)a0;
- (void)trackFailEnterRoomEventWithParams:(id)a0;
- (id)p_naviFirstViewController;
- (void)p_handleSchemeWithEpisodeId:(id)a0 params:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (void)p_startEnterPlaybackWithEpisodeId:(id)a0 episode:(id)a1 params:(id)a2 player:(id)a3 completion:(id /* block */)a4;
- (void)p_enterPlaybackWithEpisode:(id)a0 player:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)p_enterPlaybackWithEpisodeId:(id)a0 player:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)p_enterPlaybackInErrorWithEpisodeId:(id)a0 player:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)p_realEnterPlaybackWithEpisode:(id)a0 player:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)p_playbackPlayerPreloadWithEpisode:(id)a0 params:(id)a1 playerController:(id)a2;
- (void)p_enterSlideWithParams:(id)a0 room:(id)a1 videoPlayer:(id)a2 trace:(id)a3 completion:(id /* block */)a4;
- (id)p_roomAisleWithParameter:(id)a0 room:(id)a1 videoPlayer:(id)a2 trace:(id)a3;
- (BOOL)p_needPopup:(id)a0;
- (void)addFullLinkParams:(id)a0;
- (void).cxx_destruct;

@end
