@interface AWEPlayVideoVIPVideoTracker : AWEPlayVideoBaseTracker

- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
- (void)addVIPVideoParamsIfNeedWithTrackParams:(id)a0 playerExtraParams:(id)a1;

@end
