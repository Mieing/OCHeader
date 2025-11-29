@interface VideoSendReporter : NSObject

+ (void)reportSendWithMsg:(id)a0 action:(int)a1;
+ (void)reportSendWithMsg:(id)a0 reportInfo:(id)a1 action:(int)a2;
+ (void)reportSendFailWithMsg:(id)a0 reason:(int)a1;
+ (void)reportSelectFail:(int)a0 deltail:(unsigned long long)a1 chatname:(id)a2;
+ (int)getVideoSource:(id)a0;

@end
