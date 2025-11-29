@interface WCFinderLiveErrorReporter : NSObject

+ (void)reportLiveCgiErrorWithLiveId:(unsigned long long)a0 cgiNumber:(unsigned int)a1 errorCode:(int)a2 errorMsg:(id)a3;
+ (void)reportLiveCgiDelayWithLiveId:(unsigned long long)a0 cgiNumber:(unsigned int)a1 costTime:(unsigned int)a2;
+ (void)reportLiveCgiDelayWithLiveId:(unsigned long long)a0 cgiNumber:(unsigned int)a1 costTime:(unsigned int)a2 errorCode:(int)a3 errorMsg:(id)a4;
+ (void)reportLiveSDKErrorWithLiveId:(unsigned long long)a0 sdkRoomId:(unsigned int)a1 errorCode:(int)a2 errorMsg:(id)a3;
+ (void)reportLiveCaptureErrorWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2;
+ (void)reportLiveLocalErrorWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2;
+ (void)reportLiveAssertErrorWithErrorMsg:(id)a0 errorTags:(id)a1;
+ (void)reportLiveCDNPlayerErrorWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2 errorTags:(id)a3;
+ (void)reportLiveUIErrorWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2 severityLevel:(unsigned long long)a3;
+ (void)reportLiveLogicErrorWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2 severityLevel:(unsigned long long)a3;
+ (void)reportLivePerformanceErrorWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2 errorTags:(id)a3 level:(unsigned int)a4;
+ (void)reportLiveUIWarningWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2;
+ (void)reportLiveLogicWarningWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2;
+ (void)reportLiveUIErrorWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2;
+ (void)reportLiveLogicErrorWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2;
+ (void)reportLiveFatalUIErrorWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2;
+ (void)reportLiveFatalLogicErrorWithLiveId:(unsigned long long)a0 errorCode:(int)a1 errorMsg:(id)a2;
+ (id)replaceCommaToSemicolon:(id)a0;

@end
