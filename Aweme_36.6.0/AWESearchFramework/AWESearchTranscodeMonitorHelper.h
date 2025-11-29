@class NSMutableDictionary;

@interface AWESearchTranscodeMonitorHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *nonContextMonitorCache;

+ (id)p_createAMonitorValueFromContext:(id)a0 forLogType:(id)a1;
+ (id)p_getMonitorValueFromContext:(id)a0 forLogType:(id)a1;
+ (void)p_removeAMonitorValueFromContext:(id)a0 forLogType:(id)a1;
+ (id)p_getNonContextMonitorValueForLogType:(id)a0;
+ (void)p_removeANonContextMonitorValueForLogType:(id)a0;
+ (void)bindTranscodeContext:(id)a0 logType:(id)a1 data:(id)a2;
+ (void)finishTranscodeMonitorWithContext:(id)a0 logType:(id)a1 data:(id)a2;
+ (id)getSearchTranscodeResultFailReasonForCode:(long long)a0;
+ (void)p_staticCostAMonitorValueFromContext:(id)a0 forLogType:(id)a1;
+ (void)transcodeResultReportForLogType:(id)a0 data:(id)a1;
+ (void)startTranscodeMonitorWithContext:(id)a0 logType:(id)a1 data:(id)a2;
+ (id)sharedHelper;

- (void).cxx_destruct;
- (id)init;

@end
