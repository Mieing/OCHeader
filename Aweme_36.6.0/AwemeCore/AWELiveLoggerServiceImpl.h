@class NSString;

@interface AWELiveLoggerServiceImpl : NSObject <IESLiveLoggerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alogSetConsoleLog;
- (int)mapBDALogLevelWithIESLiveLogLevel:(unsigned long long)a0;
- (BOOL)alogInstanceEnabled;
- (id)alogInstancePrefix;
- (void)ieslive_logWithLevel:(unsigned long long)a0 tag:(id)a1 filename:(const char *)a2 function:(const char *)a3 lineNumber:(int)a4 logString:(id)a5;
- (void)logWithLevel:(unsigned long long)a0 moduleName:(id)a1 subModule:(id)a2 filename:(const char *)a3 line:(int)a4 function:(const char *)a5 message:(id)a6;
- (unsigned long long)mapDDLogFlagWithIESLiveLogLevel:(unsigned long long)a0;
- (id)init;

@end
