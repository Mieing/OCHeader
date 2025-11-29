@interface WCMJKVReporter : NSObject

+ (void)reportMaasAsyncFuncMsgWithSessionKey:(id)a0 reportScene:(unsigned long long)a1 eventType:(unsigned long long)a2 asyncFuncID:(unsigned long long)a3 asyncFuncResultWithError:(id)a4 asyncFuncDurationInMs:(unsigned long long)a5;
+ (void)reportTemplateEventWithSessionKey:(id)a0 reportScene:(unsigned long long)a1 eventType:(unsigned long long)a2 event:(id)a3;
+ (void)reportMaasSession3Event:(id)a0;
+ (void)reportSessionMetricsWithMetrics:(id)a0;
+ (void)reportShootComposingTaskMetricsWithMetrics:(id)a0;
+ (void)reportMovieComposingTaskMetricsWithMetrics:(id)a0;
+ (void)reportEventMetricsWithMetrics:(id)a0;
+ (void)reportPublisherSession3EventWithMetrics:(id)a0;
+ (void)reportPostEventMetricsWithPostSession:(id)a0;
+ (void)reportGeneralEventWithPublisherSessionMetrics:(id)a0 eventName:(id)a1 params:(id)a2;

@end
