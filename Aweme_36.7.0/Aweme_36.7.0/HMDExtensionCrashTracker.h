@interface HMDExtensionCrashTracker : NSObject

+ (id)sharedTracker;

- (void)startWithGroupID:(id)a0;
- (void)updateConfig;

@end
