@interface IESECTTMonitor : NSObject

+ (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2;
+ (void)trackService:(id)a0 value:(float)a1 extra:(id)a2;
+ (BOOL)endTimingForKey:(id)a0 service:(id)a1 label:(id)a2;
+ (Class)serviceImpl;
+ (void)startTimingForKey:(id)a0;

@end
