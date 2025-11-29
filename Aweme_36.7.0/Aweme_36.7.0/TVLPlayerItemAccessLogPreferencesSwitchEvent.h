@class TVLPlayerItemPreferences;

@interface TVLPlayerItemAccessLogPreferencesSwitchEvent : TVLPlayerItemLogEvent

@property (readonly, nonatomic) TVLPlayerItemPreferences *fromPreferences;
@property (readonly, nonatomic) TVLPlayerItemPreferences *toPreferences;

- (void)preferencesDidSwitchFrom:(id)a0 to:(id)a1;

@end
