@class NSString;

@interface AWEDemaciaMonitorAdapter : NSObject <AWEDemaciaMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackData:(id)a0 logTypeStr:(id)a1;
- (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2;
- (double)timeIntervalForKey:(id)a0;
- (void)cancelTimingForKey:(id)a0;
- (void)trackService:(id)a0 value:(float)a1 extra:(id)a2;
- (BOOL)endTimingForKey:(id)a0 service:(id)a1 label:(id)a2 duration:(double *)a3;
- (void)startTimingForKey:(id)a0;

@end
