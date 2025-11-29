@interface AWEPlayVideoLandscapeTracker : AWEPlayVideoBaseTracker

- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (BOOL)isInLandscapeFeedStatus;
- (BOOL)enablePlayVCDecouple;
- (void)trackLandscapePlayTime:(id)a0 paramsModel:(id)a1;

@end
