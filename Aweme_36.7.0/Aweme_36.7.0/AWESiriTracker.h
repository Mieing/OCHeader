@interface AWESiriTracker : NSObject

+ (void)reportBGVideoPauseWithParams:(id)a0 videoPlayParams:(id)a1;
+ (void)reportBGPlayTimeWithParams:(id)a0;
+ (void)reportBGVideoPlayFinishWithParams:(id)a0 videoPlayParams:(id)a1;
+ (void)reportBGVideoPlayWithParams:(id)a0 videoPlayParams:(id)a1;
+ (void)reportStartHandleIntent:(unsigned long long)a0 params:(id)a1;
+ (void)reportFinishHandleIntent:(unsigned long long)a0 result:(BOOL)a1 resultMsg:(id)a2 params:(id)a3;
+ (void)p_reportBGPlayMediaIntentStartHandleWithParams:(id)a0;
+ (void)reportMediaIntentBackgroundPlay:(id)a0;
+ (void)reportVideoPlay:(id)a0;
+ (void)reportMediaIntentBackgroundPlayFinish:(id)a0;
+ (void)reportVideoPlayFinish:(id)a0;

@end
