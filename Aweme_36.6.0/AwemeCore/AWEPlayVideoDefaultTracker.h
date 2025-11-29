@interface AWEPlayVideoDefaultTracker : AWEPlayVideoBaseTracker

- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayPauseInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
- (void)didTrackForTrackerInPlayer:(id)a0 type:(long long)a1 paramsModel:(id)a2 trackParams:(id)a3;
- (void)addMixInfoParamsToEventIfNeed:(id)a0 player:(id)a1;
- (void)addCSRCampainTaskParamsToEventIfNeed:(id)a0 player:(id)a1;
- (void)addTabJumpInfoParamsIfNeed:(id)a0 player:(id)a1;
- (void)didTrackPlayInPlayer:(id)a0 paramsModel:(id)a1 params:(id)a2;
- (void)didTrackPlayTimeInPlayer:(id)a0 paramsModel:(id)a1 params:(id)a2;
- (void)trackReviseLastPlayingAwemeIDIfNeed:(id)a0;
- (id)paramsForVideoPlayForSubClassInPlayer:(id)a0 playerExtraParams:(id)a1;

@end
