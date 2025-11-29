@interface AWEPlayVideoSearchTracker : AWEPlayVideoBaseTracker

- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayPauseInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
- (void)didTrackForTrackerInPlayer:(id)a0 type:(long long)a1 paramsModel:(id)a2 trackParams:(id)a3;
- (void)didTrackPlayTimeInPlayer:(id)a0 paramsModel:(id)a1 trackParams:(id)a2;
- (void)didTrackFinishForTrackerInPlayer:(id)a0 paramsModel:(id)a1 trackParams:(id)a2;
- (void)didTrackVideoPlayInPlayer:(id)a0 paramsModel:(id)a1 trackParams:(id)a2;
- (id)addBtmDcmParamsForSearchInPlayer:(id)a0;
- (void)p_addBtmInfoForPlayer:(id)a0 Params:(id)a1;
- (void)p_changeTrackParamForHotSearchCard:(id)a0 Player:(id)a1;
- (BOOL)enableUsePreciseMinePoint:(id)a0;
- (id)innnerFeedPageBtmIdentifier:(id)a0;

@end
