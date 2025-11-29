@interface AWEThermalMitigationNotificationCenter : NSObject

- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)forbidFunctionWithNotification;
- (BOOL)forbidPrefetchIgnoreImage;
- (BOOL)forbidFeedSegmentShadow;
- (void)enableProhibitWithThermalMitigation;
- (void)forbidHARIfNeeded;
- (void)dealloc;
- (void)addObservers;

@end
