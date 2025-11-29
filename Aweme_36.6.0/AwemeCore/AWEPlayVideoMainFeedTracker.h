@interface AWEPlayVideoMainFeedTracker : AWEPlayVideoBaseTracker

- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForTrackerIn:(id)a0 type:(long long)a1 paramsModel:(id)a2;
- (void)didTrackForTrackerInPlayer:(id)a0 type:(long long)a1 paramsModel:(id)a2 trackParams:(id)a3;
- (BOOL)enablePlayVCDecouple;
- (id)getDefaultParamsDictionaryWithModel:(id)a0;
- (long long)getDyQTimeForModel:(id)a0;
- (void)configForAutoPlayInPlayTime:(id)a0;
- (void)traceSpeedPlayTime:(id)a0;
- (void)paramsForStablePageInPlayer:(id)a0 params:(id)a1 type:(long long)a2;
- (void)addAutoPlayTrackParmas:(id)a0 referString:(id)a1;
- (void)addResponseFromTrackParams:(id)a0 player:(id)a1;
- (void)addPlayMethodTrackParams:(id)a0 referString:(id)a1 paramsModel:(id)a2;

@end
