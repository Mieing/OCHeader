@protocol VideoTemplateLoggerDelegate;

@interface VideoTemplateLogger : NSObject

@property (weak, nonatomic) id<VideoTemplateLoggerDelegate> performer;

+ (void)_log:(id)a0 level:(long long)a1 file:(const char *)a2 function:(const char *)a3 line:(int)a4 message:(id)a5 args:(char *)a6;
+ (void)registerPerformer:(id)a0;
+ (void)log:(id)a0 level:(long long)a1 file:(const char *)a2 function:(const char *)a3 line:(int)a4 message:(id)a5;
+ (id)shared;

- (void).cxx_destruct;

@end
