@interface BDHMInnerMonitor : NSObject

+ (id)getEventFrom:(id)a0 phase:(long long)a1;
+ (id)getTraceIdFrom:(id)a0;
+ (id)generateTraceId;
+ (void)collectEventCreated:(id)a0;
+ (void)collectEventUpdated:(id)a0;
+ (void)collectEventTerminated:(id)a0 reason:(long long)a1;
+ (void)collectEventUnSampled:(id)a0;
+ (void)collectEventUploaded:(id)a0;
+ (id)getEventType:(id)a0;
+ (void)setEnable:(BOOL)a0;

@end
