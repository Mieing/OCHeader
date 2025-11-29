@interface BDXLynxMapTracer : NSObject

+ (void)traceService:(id)a0 category:(id)a1 mapConfig:(id)a2;
+ (void)traceService:(id)a0 metric:(id)a1 category:(id)a2 mapConfig:(id)a3;
+ (void)traceService:(id)a0 mapConfig:(id)a1;
+ (void)traceService:(id)a0 metric:(id)a1 mapConfig:(id)a2;
+ (id)tracer;

@end
