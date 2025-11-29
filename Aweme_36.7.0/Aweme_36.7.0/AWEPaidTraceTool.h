@interface AWEPaidTraceTool : NSObject

+ (void)traceWithEventName:(id)a0 parameters:(id)a1 awemeModel:(id)a2;
+ (void)traceWithEventName:(id)a0 indexDictionary:(id)a1 otherParameters:(id)a2;
+ (BOOL)useAnotherDataSourceForEvent:(id)a0;

@end
