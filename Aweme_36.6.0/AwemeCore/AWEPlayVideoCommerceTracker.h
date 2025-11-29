@interface AWEPlayVideoCommerceTracker : AWEPlayVideoBaseTracker

- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
- (void)didTrackForTrackerInPlayer:(id)a0 type:(long long)a1 paramsModel:(id)a2 trackParams:(id)a3;
- (id)transferPreventKeyDuplicationWithParams:(id)a0;

@end
