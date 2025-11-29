@interface UDRUtil : NSObject

+ (void)callUDRPeriodStartCallback:(id)a0;
+ (void)callUDRCheckSuccessCallback:(id)a0 name:(id)a1 version:(int)a2 scene:(long long)a3;
+ (void)callUDRSuccessCallback:(id)a0 name:(id)a1 version:(int)a2 scene:(long long)a3;
+ (void)callUDRFailCallBack:(id)a0 name:(id)a1 version:(int)a2 errorType:(int)a3 errorCode:(int)a4 scene:(long long)a5;

@end
