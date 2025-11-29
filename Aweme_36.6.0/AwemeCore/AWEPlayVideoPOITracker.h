@interface AWEPlayVideoPOITracker : AWEPlayVideoBaseTracker

- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
- (void)didTrackForTrackerInPlayer:(id)a0 type:(long long)a1 paramsModel:(id)a2 trackParams:(id)a3;
- (id)__nearbyModuleService;
- (id)fetchConfigInParams:(id)a0 withEventType:(unsigned long long)a1;
- (id)getEnterMethodFromTrackerData:(id)a0 originEnterMethod:(id)a1 config:(id)a2;

@end
