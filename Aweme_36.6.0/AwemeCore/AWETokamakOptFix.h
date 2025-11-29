@interface AWETokamakOptFix : NSObject

@property (nonatomic) BOOL isBackground;

+ (void)execute;
+ (id)shared;

- (void)threadOpt;
- (void)appWillTerminateNotification;
- (void)_trackEvent:(id)a0 value:(id)a1;
- (void)fixFileAPI;
- (void)fixVolumeWatchdog;
- (void)fixBackgroundSnapshot;
- (void)fixFBSWatchdog;
- (void)fixMemoryWarningOpt;
- (void)disableSafeWarning;
- (void)protectInsertDictationText;
- (void)enableMemoryRemap;
- (void)enableMemoryController:(id)a0;
- (void)memoryRemap:(id)a0;

@end
