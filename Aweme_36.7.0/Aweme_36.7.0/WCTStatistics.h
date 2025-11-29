@interface WCTStatistics : NSObject

+ (void)internalSetGlobalErrorReport:(id /* block */)a0;
+ (void)internalSetGlobalSQLTrace:(id /* block */)a0;
+ (void)internalSetGlobalPerformanceTrace:(id /* block */)a0;
+ (void)SetGlobalErrorReport:(id /* block */)a0;
+ (void)SetGlobalPerformanceTrace:(id /* block */)a0;
+ (void)SetGlobalSQLTrace:(id /* block */)a0;
+ (void)addGlobalErrorReport:(id /* block */)a0;
+ (void)removeGlobalErrorReport:(id /* block */)a0;
+ (void)addGlobalPerformanceTrace:(id /* block */)a0;
+ (void)removeGlobalPerformanceTrace:(id /* block */)a0;
+ (void)addGlobalSQLTrace:(id /* block */)a0;
+ (void)removeGlobalSQLTrace:(id /* block */)a0;
+ (void)initialize;

@end
