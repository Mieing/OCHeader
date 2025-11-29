@interface OVBAnalyticsManager : NSObject

+ (void)initReporter;
+ (void)shutdownReporter;
+ (void)registerDefaultFileSink;
+ (void)registerBridgingEventSink:(id /* block */)a0;
+ (void)unregisterBridgingEventSink;

@end
