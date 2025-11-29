@class NSString;

@interface BDHMForestMonitorInternal : NSObject <IESForestEventMonitor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)monitorEvent:(id)a0 data:(id)a1 extra:(id)a2;
- (void)customReport:(id)a0 url:(id)a1 bid:(id)a2 containerId:(id)a3 category:(id)a4 metrics:(id)a5 extra:(id)a6 sampleLevel:(long long)a7;

@end
