@class CdnTicker, NSObject;
@protocol OS_dispatch_source;

@interface CdnAppActivationMonitor : NSObject

@property BOOL isInForeground;
@property BOOL isActive;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *activationCheckTimer;
@property (retain, nonatomic) CdnTicker *backgroundTicker;

+ (id)sharedInstance;
+ (void)start;
+ (BOOL)isAppActive;
+ (BOOL)isAppInForeground;
+ (BOOL)isAnySceneActive;
+ (BOOL)isAnySceneInForeground;
+ (BOOL)checkAppActiveState;
+ (void)logAppState;

- (id)init;
- (void)startActivationCheckTimer;
- (void)stopActivationCheckTimer;
- (void)onAppEnterBackground:(id)a0;
- (void)onAppEnterForeground:(id)a0;
- (void)onAppResignActive:(id)a0;
- (void)onAppBecomeActive:(id)a0;
- (void)onSceneEnterBackground:(id)a0;
- (void)onSceneResignActive:(id)a0;
- (void).cxx_destruct;

@end
