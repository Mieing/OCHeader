@class NSString;
@protocol IESLiveDegradeService, IESLiveLoggerService, IESLiveLoggerAnalyseService, IESLiveSettings;

@interface IESLiveLogger : NSObject <IESLiveDILogger>

@property (nonatomic) BOOL exception;
@property (retain, nonatomic) id<IESLiveSettings> setting;
@property (retain, nonatomic) id<IESLiveLoggerService> loggerService;
@property (retain, nonatomic) id<IESLiveDegradeService> degradeService;
@property (retain) id<IESLiveLoggerAnalyseService> analyseService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)hybirdLogWithLevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4 logString:(id)a5 currentUrl:(id)a6;
- (void)openAsyncLogIfNeeded;
- (void)bindAnalyseService:(BOOL)a0;
- (void)liveLogWithLevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4 eventName:(id)a5 extra:(id)a6;
- (void)verbose:(id)a0 extra:(id)a1;
- (void)liveLogWithLevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4 eventName:(id)a5 extra:(id)a6 extraValue:(id)a7;
- (void)reportLiveLogWithLevel:(unsigned long long)a0 tag:(id)a1 eventName:(id)a2 params:(id)a3;
- (void)reportWebLog:(id)a0 level:(unsigned long long)a1;
- (void)liveLogWithLevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4 logString:(id)a5;
- (void)handler_liveLogWithLevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4 eventName:(id)a5 extra:(id)a6 content:(id)a7;
- (void).cxx_destruct;
- (id)init;
- (void)setupConfig;

@end
