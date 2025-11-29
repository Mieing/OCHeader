@interface HMDTTMonitorExchangeHelper : NSObject

@property (class, nonatomic) BOOL isSwizzled;

+ (id)globalLock;
+ (void)startExchangeTTMonitor;
+ (void)closeExchangeTTMonitor;
+ (void)exchangeTTMonitorInterfaceIfNeeded:(id)a0;

- (void)hmdTrackService:(id)a0 status:(long long)a1 extra:(id)a2;
- (void)hmdTrackData:(id)a0 logTypeStr:(id)a1;
- (void)hmdTrackService:(id)a0 value:(id)a1 extra:(id)a2;
- (void)hmdTrackService:(id)a0 attributes:(id)a1;
- (void)hmdTrackData:(id)a0 type:(long long)a1;

@end
