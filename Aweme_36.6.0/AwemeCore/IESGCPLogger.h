@protocol IESGCPLoggerService;

@interface IESGCPLogger : NSObject

@property (retain, nonatomic) id<IESGCPLoggerService> loggerService;

+ (id)shareInstance;

- (void)logWithLevel:(unsigned long long)a0 tag:(long long)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4 eventName:(id)a5 extra:(id)a6;
- (id)tagStringWithTag:(long long)a0;
- (void).cxx_destruct;

@end
