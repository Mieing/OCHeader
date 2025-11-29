@class NSString;

@interface APCParameterizedTrackServiceImpl : NSObject <APCParameterizedTrackService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presetParams:(id)a0 forEvent:(id)a1;
- (void)setPresetTrackParamsForEventsString:(id)a0;
- (void)presetCoreEventParams:(id)a0;

@end
