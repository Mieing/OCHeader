@class NSString;

@interface BDDynamicPerformanceConfig : NSObject <BDDPConfiguring>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceWithBizConfig:(id)a0;

- (void)setupWithConfig:(id)a0;
- (BOOL)enablePerformanceMapping;
- (BOOL)enableNetTraffic;
- (BOOL)enableThresholdReport;
- (double)onlyLiveThreshold;
- (double)onlyVideoThreshold;
- (id)netTrafficConfig;
- (id)fluencyConfig;
- (id)senseConfig;
- (id)perfDataConfig;
- (unsigned long long)countPerLogPerformanceMapping;
- (unsigned long long)bufferLimitCountPerformanceMapping;
- (BOOL)enableFluency;
- (BOOL)enableUserInteractionDataUpload;
- (BOOL)enableUploadUIFrozen;
- (unsigned long long)maxBufferLimitCountNetTraffic;
- (unsigned long long)checkTimePeriod;
- (BOOL)enableVC;
- (BOOL)enableAppState;
- (BOOL)enableToast;
- (int)scrollMonitor;
- (BOOL)scrollAsyncNotify;
- (BOOL)enableCPU;
- (BOOL)enableMem;
- (BOOL)enablePageFault;
- (BOOL)enablePower;
- (BOOL)enableThread;
- (int)threadSampling;
- (long long)interval;

@end
