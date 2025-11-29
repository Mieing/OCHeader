@class BDATConfiguration, BDATC2STracker;

@interface ByteADTracker : NSObject

@property (retain, nonatomic) BDATConfiguration *configuration;
@property (retain, nonatomic) BDATC2STracker *tracker;

+ (id)sharedADTracker;
+ (id)c2sTracker;
+ (void)updateConfiguration:(id)a0 isAppLaunchOpt:(BOOL)a1;
+ (void)registerMacroTokens:(id)a0;
+ (void)registerUserAgent:(id)a0;
+ (void)updateConfiguration:(id)a0;

- (void)sdkSessionLaunchMonitor;
- (id)c2sTracker;
- (void)setupADTracker;
- (void).cxx_destruct;
- (id)init;
- (id)versionNumber;

@end
