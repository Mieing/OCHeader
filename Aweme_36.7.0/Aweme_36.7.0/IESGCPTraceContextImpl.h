@class NSString;

@interface IESGCPTraceContextImpl : IESGCPContextNode <IESGCPTraceContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traceCGCoreWithEventType:(id)a0 step:(id)a1 errorCode:(long long)a2 errorMsg:(id)a3 extra:(id)a4;
- (void)traceMonitorWithService:(id)a0 step:(id)a1 metric:(id)a2 errorCode:(long long)a3 errorMsg:(id)a4 extra:(id)a5;
- (void)traceWithBusinessType:(unsigned long long)a0 eventType:(id)a1 step:(id)a2 errorCode:(long long)a3 errorMsg:(id)a4 mertic:(id)a5 extra:(id)a6;
- (void)traceWithBusinessType:(id)a0 eventType:(id)a1 step:(id)a2 errorCode:(long long)a3 errorMsg:(id)a4 extra:(id)a5;
- (id)abstractMetric:(id)a0;
- (id)convertBusinessTypeToStr:(unsigned long long)a0;
- (id)abstractLogId;
- (id)addIndexParams;

@end
