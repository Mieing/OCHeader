@interface HMDCPUExceptionPerf : NSObject

@property (nonatomic) BOOL enablePerfWatch;

- (void)exceptionThreadTimeUsage:(long long)a0;
- (void)exceptionRecordPrepareWithTimeUsage:(long long)a0 infoSize:(unsigned long long)a1;
- (void)threadBackTreeWithTimeUsage:(long long)a0 threadCount:(long long)a1 suspendThread:(BOOL)a2;
- (void)monitorThreadCPUUsgeOutOfThreshold:(float)a0;
- (void)collectPerformanceWithServiceName:(id)a0 timeUsage:(id)a1 category:(id)a2;
- (void)recordTransformDictTimeUsage:(long long)a0;
- (void)recordWriteFileWithStartTS:(long long)a0 endTS:(long long)a1 infoCount:(unsigned long long)a2;

@end
