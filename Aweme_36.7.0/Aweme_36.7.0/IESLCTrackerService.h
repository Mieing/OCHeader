@interface IESLCTrackerService : NSObject

@property BOOL isBackground;
@property BOOL isActive;

+ (void)event:(id)a0 params:(id)a1;
+ (id)commonParams;
+ (id)paramsWithConnectError:(id)a0 url:(id)a1;
+ (void)event:(id)a0 params:(id)a1 isNeededCommonParams:(BOOL)a2;
+ (id)sharedInstance;

- (void)event:(id)a0 params:(id)a1;
- (void)handleDidEnterBackgroundNotification:(id)a0;
- (id)commonParams;
- (void)handleDidBecomeActiveNotification:(id)a0;
- (void)event:(id)a0 params:(id)a1 isNeededCommonParams:(BOOL)a2;
- (void)handleWillEnterForegroundNotification:(id)a0;
- (void)handleWillResignActiveNotification:(id)a0;
- (id)init;
- (void)p_addObservers;

@end
