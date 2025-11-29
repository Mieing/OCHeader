@protocol NLELoggerDelegate;

@interface NLELogger : NSObject

@property (retain, nonatomic) id<NLELoggerDelegate> performer;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;

+ (void)_log:(id)a0 level:(long long)a1 file:(const char *)a2 function:(const char *)a3 line:(int)a4 message:(id)a5 args:(char *)a6;
+ (void)registerPerformer:(id)a0;
+ (void)log:(id)a0 level:(long long)a1 file:(const char *)a2 function:(const char *)a3 line:(int)a4 message:(id)a5;
+ (void)setLogLevel:(long long)a0;
+ (id)shared;

- (id)getPerformer;
- (void).cxx_destruct;
- (id)init;

@end
