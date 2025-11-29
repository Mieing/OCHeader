@class NSArray, NSString, AWEIMPageMemoryMonitor, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMPageEnvironmentMonitorsComponent : AWEIMComponentBase <AWEIMPageEnvironmentMonitorInterface>

@property (readonly, nonatomic) AWEIMPageMemoryMonitor *memoryMonitor;
@property (nonatomic) BOOL pageOnShow;
@property (copy, nonatomic) NSArray *extraInfoBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *extraInfoBlocksLock;
@property (copy, nonatomic) NSArray *sampleRateInfoBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sampleRateInfoBlocksLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (id)initWithPageName:(id)a0;
- (void)addSampleRateKeyInfoBlock:(id /* block */)a0;
- (void)addExtraInfoBlock:(id /* block */)a0;
- (id)p_sampleRateInfoWithSession:(id)a0 fireType:(long long)a1;
- (id)p_extraSessionInfoWithSession:(id)a0 fireType:(long long)a1;
- (void).cxx_destruct;

@end
