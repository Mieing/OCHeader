@class NSObject;
@protocol OS_dispatch_source;

@interface TXCAppStateMonitor : NSObject

@property BOOL isInForeground;
@property BOOL isActive;
@property BOOL isInPip;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *activationCheckTimer;

+ (id)sharedInstance;
+ (void)start;
+ (BOOL)isAppActive;
+ (BOOL)isAppInForeground;
+ (BOOL)isAppInPip;
+ (void)updatePipSate:(BOOL)a0;
+ (BOOL)isAnySceneActive;
+ (BOOL)isAnySceneInForeground;
+ (BOOL)checkAppActiveState;

- (id)init;
- (void)startActivationCheckTimer;
- (void)stopActivationCheckTimer;
- (void)onAppEnterBackground:(id)a0;
- (void)onAppEnterForeground:(id)a0;
- (void)onAppResignActive:(id)a0;
- (void)onAppBecomeActive:(id)a0;
- (void).cxx_destruct;

@end
