@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PuzzleLog : NSObject {
    NSObject<OS_dispatch_queue> *_reportLogQueue;
    BOOL _loadedSettings;
    BOOL _enbaleAsuncQueue;
}

@property (class, retain, nonatomic) NSMutableArray *clientCollection;

+ (void)reportSlardarHybridEvent:(id)a0 containerId:(id)a1 logContext:(id)a2 logLevel:(unsigned long long)a3 LogTag:(id)a4 URL:(id)a5 metric:(id)a6 category:(id)a7 extra:(id)a8 kernalType:(unsigned long long)a9 maySample:(BOOL)a10;
+ (void)reportALog:(id)a0 logContext:(id)a1 logLevel:(unsigned long long)a2 LogTag:(id)a3 param:(id)a4;
+ (void)bindCrashInfoWithUrl:(id)a0 schema:(id)a1;
+ (void)reportSlardarHybridLynxEvent:(id)a0 logContext:(id)a1 logLevel:(unsigned long long)a2 LynxView:(id)a3 metric:(id)a4 category:(id)a5 extra:(id)a6 maySample:(BOOL)a7;
+ (void)reportConsoleLog:(id)a0 logContext:(id)a1 logLevel:(unsigned long long)a2 LogTag:(id)a3 param:(id)a4;
+ (void)reportSlardarHybridCollectLog:(id)a0 field:(id)a1 logContext:(id)a2 logLevel:(unsigned long long)a3 LogTag:(id)a4 data:(id)a5;
+ (void)reportSlardarHybridEvent:(id)a0 containerId:(id)a1 logContext:(id)a2 logLevel:(unsigned long long)a3 LogTag:(id)a4 URL:(id)a5 metric:(id)a6 category:(id)a7 extra:(id)a8 kernalType:(unsigned long long)a9 sampleLevel:(unsigned long long)a10;
+ (void)reportSlardarHybridError:(id)a0 LogTag:(id)a1 view:(id)a2 withID:(id)a3 withError:(id)a4;
+ (void)reportSlardarAppLog:(id)a0 logContext:(id)a1 logLevel:(unsigned long long)a2 LogTag:(id)a3 metric:(id)a4 category:(id)a5 extra:(id)a6;
+ (void)reportLogImpl:(id)a0 logContext:(id)a1 logType:(unsigned long long)a2 logLevel:(unsigned long long)a3 logTag:(id)a4 logParam:(struct PuzzleLogParams { id x0; struct SlardarHybridErrorLogParam { id x0; id x1; id x2; } x1; struct SlardarHybridCollectLogParam { id x0; id x1; } x2; struct SlardarHybridCustomV1LogParam { id x0; id x1; id x2; id x3; id x4; unsigned long long x5; BOOL x6; } x3; struct SlardarHybridCustomV2LogParam { id x0; id x1; id x2; id x3; id x4; unsigned long long x5; unsigned long long x6; } x4; struct SlardarHybridLynxLogParam { id x0; id x1; id x2; id x3; BOOL x4; } x5; struct SlardarHybridWebLogParam { id x0; id x1; id x2; id x3; BOOL x4; } x6; struct SlardarAppLogParam { id x0; id x1; id x2; } x7; id x8; })a5;
+ (void)unRegisterClientClass:(Class)a0;
+ (void)registerClientClass:(Class)a0;
+ (void)reportSlardarHybridLogImpl:(id)a0 field:(id)a1 data:(id)a2;
+ (void)reportSlardarHybridWebEvent:(id)a0 logContext:(id)a1 logLevel:(unsigned long long)a2 webView:(id)a3 metric:(id)a4 category:(id)a5 extra:(id)a6 maySample:(BOOL)a7;
+ (void)reportLog:(id)a0 logContext:(id)a1 logType:(unsigned long long)a2 logLevel:(unsigned long long)a3 logTag:(id)a4 logParam:(struct PuzzleLogParams { id x0; struct SlardarHybridErrorLogParam { id x0; id x1; id x2; } x1; struct SlardarHybridCollectLogParam { id x0; id x1; } x2; struct SlardarHybridCustomV1LogParam { id x0; id x1; id x2; id x3; id x4; unsigned long long x5; BOOL x6; } x3; struct SlardarHybridCustomV2LogParam { id x0; id x1; id x2; id x3; id x4; unsigned long long x5; unsigned long long x6; } x4; struct SlardarHybridLynxLogParam { id x0; id x1; id x2; id x3; BOOL x4; } x5; struct SlardarHybridWebLogParam { id x0; id x1; id x2; id x3; BOOL x4; } x6; struct SlardarAppLogParam { id x0; id x1; id x2; } x7; id x8; })a5;
+ (id)sharedInstance;

- (void)__reportSlardarHybridLogImpl:(id)a0 field:(id)a1 data:(id)a2;
- (void)__reportLogOnAsyncQueue:(id)a0 logContext:(id)a1 logType:(unsigned long long)a2 logLevel:(unsigned long long)a3 logTag:(id)a4 logParam:(struct PuzzleLogParams { id x0; struct SlardarHybridErrorLogParam { id x0; id x1; id x2; } x1; struct SlardarHybridCollectLogParam { id x0; id x1; } x2; struct SlardarHybridCustomV1LogParam { id x0; id x1; id x2; id x3; id x4; unsigned long long x5; BOOL x6; } x3; struct SlardarHybridCustomV2LogParam { id x0; id x1; id x2; id x3; id x4; unsigned long long x5; unsigned long long x6; } x4; struct SlardarHybridLynxLogParam { id x0; id x1; id x2; id x3; BOOL x4; } x5; struct SlardarHybridWebLogParam { id x0; id x1; id x2; id x3; BOOL x4; } x6; struct SlardarAppLogParam { id x0; id x1; id x2; } x7; id x8; })a5;
- (void)__reportLogImpl:(id)a0 logContext:(id)a1 logType:(unsigned long long)a2 logLevel:(unsigned long long)a3 logTag:(id)a4 logParam:(struct PuzzleLogParams { id x0; struct SlardarHybridErrorLogParam { id x0; id x1; id x2; } x1; struct SlardarHybridCollectLogParam { id x0; id x1; } x2; struct SlardarHybridCustomV1LogParam { id x0; id x1; id x2; id x3; id x4; unsigned long long x5; BOOL x6; } x3; struct SlardarHybridCustomV2LogParam { id x0; id x1; id x2; id x3; id x4; unsigned long long x5; unsigned long long x6; } x4; struct SlardarHybridLynxLogParam { id x0; id x1; id x2; id x3; BOOL x4; } x5; struct SlardarHybridWebLogParam { id x0; id x1; id x2; id x3; BOOL x4; } x6; struct SlardarAppLogParam { id x0; id x1; id x2; } x7; id x8; })a5;
- (BOOL)_enbaleGlobalQueue;
- (void).cxx_destruct;
- (id)init;

@end
