@class NSString;

@interface LynxMonitorService : NSObject <LynxServiceMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)reportResourceErrorStatus:(id)a0 data:(id)a1;
+ (unsigned long long)serviceType;

- (void)reportTrailEvent:(id)a0 data:(id)a1;
- (void)reportImageStatus:(id)a0 data:(id)a1;
- (void)reportErrorGlobalContextTag:(unsigned long long)a0 data:(id)a1;
- (void)reportResourceStatus:(id)a0 data:(id)a1 extra:(id)a2;
- (void)formatEventReporter:(id)a0 data:(id)a1 metrics:(id)a2 category:(id)a3;
- (id)formatContextTagName:(unsigned long long)a0;

@end
