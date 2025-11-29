@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IESIMLoggerService : HTSService <IESIMLoggerService>

@property (readonly, nonatomic) BOOL usePerformanceOptimize;
@property (readonly, nonatomic) BOOL useMultipleInstance;
@property (nonatomic) BOOL useQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logWithModule:(id)a0 level:(unsigned long long)a1 lineNumber:(int)a2 funcName:(const char *)a3 formatLog:(id)a4;
- (void)logWithModule:(id)a0 subModule:(id)a1 level:(unsigned long long)a2 lineNumber:(int)a3 funcName:(const char *)a4 formatLog:(id)a5;
- (void)logHugeWithModule:(id)a0 subModule:(id)a1 level:(unsigned long long)a2 lineNumber:(int)a3 funcName:(const char *)a4 formatLog:(id)a5;
- (void /* function */ *)logFunc;
- (void)pp_logWithModule:(id)a0 level:(unsigned long long)a1 lineNumber:(int)a2 funcName:(id)a3 formatLog:(id)a4;
- (void)p_logWithModule:(id)a0 level:(unsigned long long)a1 lineNumber:(int)a2 funcName:(const char *)a3 formatLog:(id)a4;
- (unsigned long long)p_aweLevelWithLevel:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
