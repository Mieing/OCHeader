@interface CMCLoggerVerifyService : NSObject

+ (void)startServiceWithLogInstanceName:(id)a0;
+ (void)startServiceWithDefaultInstance;
+ (void)verifyLogWithTime:(id)a0 level:(id)a1 tag:(id)a2 funcName:(id)a3 fileName:(id)a4 line:(int)a5 log:(id)a6;
+ (id)p_verifyInfoWithTime:(id)a0 level:(id)a1 tag:(id)a2 funcName:(id)a3 fileName:(id)a4 line:(int)a5 log:(id)a6;
+ (void)startVerifyLogInfo:(id)a0;

@end
