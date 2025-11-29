@protocol IESLiveLoggerService, IESLiveSettings;

@interface IESLiveKiteLogger : NSObject

@property (retain, nonatomic) id<IESLiveLoggerService> loggerService;
@property (retain, nonatomic) id<IESLiveSettings> setting;
@property (nonatomic) BOOL enable;

+ (id)shared;

- (void)logWithLevel:(unsigned long long)a0 moduleName:(id)a1 subModule:(id)a2 filename:(const char *)a3 line:(int)a4 function:(const char *)a5 message:(id)a6;
- (void).cxx_destruct;
- (id)init;

@end
