@interface KidsWatchRegisterReportObject : NSObject

+ (void)reportAction:(unsigned long long)a0 kidsUserName:(id)a1 errorCode:(int)a2;
+ (void)reportSuccessWithKidsUserName:(id)a0;
+ (void)reportFailureWithErrorCode:(int)a0;
+ (void)reportCancel;

@end
