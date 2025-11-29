@class NSObject, NSString, HMDThreadSafeDictionary;
@protocol OS_dispatch_queue;

@interface AWESearchThreadBlockMonitor : NSObject <CSPThreadBlockMonitorProtocol>

@property (retain, nonatomic) HMDThreadSafeDictionary *backtraceDic;
@property (retain, nonatomic) HMDThreadSafeDictionary *trackParams;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *traceUploadQueue;
@property (nonatomic) double preUploadTraceTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)stopThreadBlockMonitor:(id)a0 tag:(id)a1;
- (id)startThreadBlockMonitor;
- (unsigned long long)skippedDepth;
- (id)startThreadBlockMonitorWithTargetThread:(unsigned int)a0;
- (void)stopThreadBlockMonitor:(id)a0 tag:(id)a1 context:(id)a2;
- (id)startThreadBlockMonitorWithTargetThread:(unsigned int)a0 hadTargetThread:(BOOL)a1;
- (unsigned long long)frequencyInSecond;
- (double)p_delayInSeconds;
- (BOOL)isUploadAllThreadTrace;
- (BOOL)isSymbolicate;
- (BOOL)isSuspend;
- (id)generalSearchThreadBlockMonitorSwitch;
- (BOOL)enable;
- (void).cxx_destruct;
- (id)init;

@end
