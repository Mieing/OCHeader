@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDCPUTimeDetector : NSObject {
    void *_cpuTimeList;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cpuSampleQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sampleTimer;
@property (nonatomic) BOOL isCPUException;

+ (id)sharedDetector;

- (void)sampleCPUTime;
- (void)notifyCPUException:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
