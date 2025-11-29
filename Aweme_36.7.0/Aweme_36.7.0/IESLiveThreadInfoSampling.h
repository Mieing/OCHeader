@class NSDictionary, NSString;

@interface IESLiveThreadInfoSampling : NSObject <IESLiveThreadService>

@property (nonatomic) unsigned long long mainthreadid;
@property (nonatomic) long long topbasic;
@property (retain, nonatomic) NSDictionary *backtrace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)samplingThreadUsage;
- (id)reSamplingThreadUsage:(id)a0;
- (float)samplingCPUUsage;
- (id)threadBasicInfo:(unsigned int *)a0 cpuusage:(float *)a1 skip:(BOOL)a2;
- (void)heaviestHandler:(unsigned int)a0 usage:(float)a1 threadid:(unsigned long long)a2;
- (void)backTraceUserExceptionWithThread:(unsigned int)a0 customParams:(id)a1 cpuusage:(float)a2;
- (void)backTraceWithThread:(unsigned int)a0 cpuusage:(float)a1;
- (id)init;

@end
