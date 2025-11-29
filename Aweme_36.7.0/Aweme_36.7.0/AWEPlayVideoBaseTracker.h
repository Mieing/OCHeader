@class NSString;

@interface AWEPlayVideoBaseTracker : NSObject <AWEPlayVideoTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackKeyForType:(long long)a0;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayPauseInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForTrackerIn:(id)a0 type:(long long)a1 paramsModel:(id)a2;
- (void)didTrackForTrackerInPlayer:(id)a0 type:(long long)a1 paramsModel:(id)a2 trackParams:(id)a3;

@end
