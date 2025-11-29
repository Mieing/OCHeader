@class NSString, NSMutableArray;

@interface MMPowerMgr : MMRootService <MMServiceProtocol> {
    BOOL m_bLowPowerMode;
    NSMutableArray *m_minuteCPUUsageArray;
    double m_foregroundTime;
    double m_backgroundTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (float)getCurrentCpuUsage;
+ (long long)getResidentMemory;

- (id)init;
- (void)dealloc;
- (void)processEnterForeground;
- (void)processEnterBackground;
- (double)getForegroundTime;
- (double)getBackgroundTime;
- (void)markTestCPU:(BOOL)a0;
- (void)costCPUALot;
- (void)p_setPowerMode;
- (void)processPowerModeChange;
- (BOOL)isLowPowerMode;
- (void).cxx_destruct;

@end
