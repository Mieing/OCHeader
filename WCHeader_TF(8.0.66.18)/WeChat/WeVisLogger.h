@protocol WeVisLogAdapterDelegate;

@interface WeVisLogger : NSObject

@property (retain, nonatomic) id<WeVisLogAdapterDelegate> adapter;

+ (id)sharedLogger;

- (void)logWithLevel:(long long)a0 module:(const char *)a1 file:(const char *)a2 line:(int)a3 funcName:(const char *)a4 message:(id)a5;
- (void /* function */ *)getLogCallback;
- (void)setLogAdapter:(id)a0;
- (void).cxx_destruct;

@end
