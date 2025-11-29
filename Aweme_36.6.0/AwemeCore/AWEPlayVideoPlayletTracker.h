@interface AWEPlayVideoPlayletTracker : AWEPlayVideoBaseTracker

- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
- (void)didTrackForTrackerInPlayer:(id)a0 type:(long long)a1 paramsModel:(id)a2 trackParams:(id)a3;
- (id)playletAutoPlayParamsWithModel:(id)a0 logExtraDic:(id)a1;
- (BOOL)isFromTheater:(id)a0;
- (id)paymentAndRewardParamsForModel:(id)a0 player:(id)a1;

@end
