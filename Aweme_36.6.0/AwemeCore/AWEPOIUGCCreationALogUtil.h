@interface AWEPOIUGCCreationALogUtil : NSObject

+ (id)getReportParams:(id)a0 params:(id)a1;
+ (id)containerIDWithContext:(id)a0;
+ (void)reportALogInfo:(id)a0 eventName:(id)a1 params:(id)a2;
+ (void)reportALogWarn:(id)a0 eventName:(id)a1 params:(id)a2;
+ (void)reportALogError:(id)a0 eventName:(id)a1 params:(id)a2;

@end
