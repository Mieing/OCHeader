@protocol ACCLoggerDelegate;

@interface ACCLogger : NSObject

@property (retain, nonatomic) id<ACCLoggerDelegate> performer;

+ (void)_log:(id)a0 level:(long long)a1 file:(const char *)a2 function:(const char *)a3 line:(int)a4 message:(id)a5 args:(char *)a6;
+ (void)log:(id)a0 level:(long long)a1 file:(const char *)a2 function:(const char *)a3 line:(int)a4 message:(id)a5;
+ (void)registerPerform:(id)a0;
+ (id)shared;

- (void).cxx_destruct;

@end
