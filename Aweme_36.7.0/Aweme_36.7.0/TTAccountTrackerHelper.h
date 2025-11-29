@interface TTAccountTrackerHelper : NSObject

+ (void)trackEventName:(id)a0 params:(id)a1;
+ (void)trackEventName:(id)a0 resonse:(id)a1 error:(id)a2;
+ (void)trackEventName:(id)a0 resonse:(id)a1 error:(id)a2 scene:(id)a3;
+ (void)trackEventName:(id)a0 error:(id)a1;
+ (void)trackAuthCallBackEventWithPlatform:(id)a0 requestReason:(long long)a1 oneAuth:(BOOL)a2 error:(id)a3;
+ (id)trackParamsFromResponse:(id)a0 error:(id)a1;
+ (id)trackParamsError:(id)a0;
+ (void)trackEventName:(id)a0 params:(id)a1 error:(id)a2;
+ (BOOL)controlEnableTrackEvent:(id)a0 params:(id)a1;
+ (BOOL)randomModeSampleRate:(unsigned long long)a0;
+ (void)trackAuthCallBackEventWithPlatform:(id)a0 requestReason:(long long)a1 error:(id)a2;
+ (void)trackFullPathWithEventType:(id)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)trackEventName:(id)a0 resonse:(id)a1 error:(id)a2 isLogin:(BOOL)a3;
+ (void)trackEventName:(id)a0 resonse:(id)a1 error:(id)a2 params:(id)a3;

@end
