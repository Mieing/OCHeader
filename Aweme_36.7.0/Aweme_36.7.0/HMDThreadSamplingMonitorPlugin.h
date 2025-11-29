@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_source;

@interface HMDThreadSamplingMonitorPlugin : NSObject <HMDThreadMonitorPluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long sampleInterval;
@property (nonatomic) BOOL enableBacktrace;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sampleTimer;
@property (nonatomic) long long threadCountThreshold;
@property (nonatomic) long long specialThreadThreshold;
@property (copy, nonatomic) NSDictionary *specialThreadWhiteList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginInstance;

- (void)startTimerSampling;
- (void)stopTimerSampling;
- (void)collectThreadInfo;
- (void)uploadAllThreadCount:(id)a0;
- (void)uploadAllThreadBacktracesExceptionType:(id)a0 specialThreadID:(unsigned int)a1 extInfo:(id)a2;
- (void)setupThreadConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
