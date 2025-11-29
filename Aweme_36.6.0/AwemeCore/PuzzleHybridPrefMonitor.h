@class NSMutableDictionary, NSTimer, NSString, PuzzleHybridPrefSampler, NSObject;
@protocol OS_dispatch_queue, IESHYContainerProtocol, OS_dispatch_semaphore, PuzzleHybridMonitorReporter, PuzzleHybridPrefSamplerProtocol;

@interface PuzzleHybridPrefMonitor : NSObject <PuzzleHybridPrefSamplerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) PuzzleHybridPrefSampler *prefSampler;
@property (retain, nonatomic) id<PuzzleHybridMonitorReporter> reporter;
@property (retain, nonatomic) NSMutableDictionary *preSampleDic;
@property (retain, nonatomic) id<PuzzleHybridPrefSamplerProtocol> prefSamplerService;
@property (nonatomic) unsigned long long sampleLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prefQueue;
@property (nonatomic) BOOL enableAdditionalReport;
@property (nonatomic) long long openTime;
@property (weak, nonatomic) id<IESHYContainerProtocol> hybridContainer;
@property (nonatomic) int recordTimes;
@property (retain, nonatomic) NSTimer *fpsTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)handleMemoryWarning;
- (void)recordHybridContainerPrefWithURL:(id)a0 aid:(id)a1 containerId:(id)a2 moment:(unsigned long long)a3 containerType:(unsigned long long)a4;
- (void)recordHybridContainerPrefWithURL:(id)a0 aid:(id)a1 container:(id)a2 containerId:(id)a3 moment:(unsigned long long)a4 containerType:(unsigned long long)a5;
- (id)initWithReporter:(id)a0 monitorConfig:(id)a1;
- (void)defaultRecordHybridContainerPrefWithURL:(id)a0 aid:(id)a1 containerId:(id)a2 moment:(unsigned long long)a3 containerType:(unsigned long long)a4;
- (void)recordHybridContainerIncreasePrefWithURL:(id)a0 aid:(id)a1 containerId:(id)a2 moment:(unsigned long long)a3 containerType:(unsigned long long)a4 defaultSampleInfo:(id)a5;
- (void)recordPerfFPSWithURL:(id)a0 containerId:(id)a1 aid:(id)a2 containerType:(unsigned long long)a3;
- (void)recordHybridInstanceMonitorWithURL:(id)a0 aid:(id)a1 containerId:(id)a2 moment:(unsigned long long)a3 containerType:(unsigned long long)a4;
- (void)recordHybridLynxJSThreadMonitorWithURL:(id)a0 aid:(id)a1 containerId:(id)a2 moment:(unsigned long long)a3 containerType:(unsigned long long)a4;
- (void)startFPSTimer:(id)a0 containerId:(id)a1 aid:(id)a2 containerType:(unsigned long long)a3;
- (void)stopFPSTimer;
- (void)recordHybridContainerIncreasePrefWithURL:(id)a0 aid:(id)a1 containerId:(id)a2 moment:(unsigned long long)a3 containerType:(unsigned long long)a4;
- (void).cxx_destruct;

@end
