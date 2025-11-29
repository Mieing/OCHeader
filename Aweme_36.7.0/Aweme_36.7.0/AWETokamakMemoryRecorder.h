@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AWETokamakMemoryRecorder : NSObject {
    BOOL _isLogEnabled;
    BOOL _isReportEnabled;
    int _logTickPeriod;
    int _reportTickPeriod;
    int _memoryLevelStrategy;
    double _highWaterLevel;
    unsigned long long _warningInterval;
    unsigned long long _warningCount;
    unsigned long long _warningLastTime;
    int _foreOrBackState;
    NSObject<OS_dispatch_source> *_reportTimerSource;
    unsigned long long _reportTickCount;
    double _sceneUpdateTime;
    NSObject<OS_dispatch_source> *_logTimerSource;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
}

+ (id)shared;

- (void)reportMemoryStatusWithWithMemory:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x0; unsigned long long x1; unsigned long long x2; union { unsigned long long x0; unsigned long long x1; } x3; } *)a0 memoryWarningFlags:(unsigned int)a1;
- (void)logMemoryStatusWithMemory:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x0; unsigned long long x1; unsigned long long x2; union { unsigned long long x0; unsigned long long x1; } x3; } *)a0 reason:(id)a1 memoryWarningFlags:(unsigned int)a2;
- (void)updateSceneStartTime;
- (void)memoryLevelStrategy:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x0; unsigned long long x1; unsigned long long x2; union { unsigned long long x0; unsigned long long x1; } x3; } *)a0 reason:(id)a1 memoryWarningFlags:(unsigned int)a2;
- (BOOL)isOSVersionGreaterThanOrEqualTo:(long long)a0 minor:(long long)a1 patch:(long long)a2;
- (void).cxx_destruct;
- (void)start;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
