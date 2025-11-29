@class NSMutableDictionary, NSTimer, NSDictionary, NSString, NSObject;
@protocol IESLiveThreadService, OS_dispatch_queue;

@interface IESLiveThreadThrashing : NSObject <IESLiveStabilityThrashing>

@property (nonatomic) long long preCPUUsage;
@property (retain, nonatomic) NSTimer *watchtimer;
@property (retain, nonatomic) NSDictionary *threadInfo;
@property (retain, nonatomic) id<IESLiveThreadService> threadSampling;
@property (retain, nonatomic) NSDictionary *thresholdDictionary;
@property (retain, nonatomic) NSMutableDictionary *heaviestsampling;
@property (retain, nonatomic) NSMutableDictionary *laodavgSampling;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *samplingQueue;
@property (nonatomic) long long thresholdCount;
@property (nonatomic) long long thresholdUsage;
@property (nonatomic) long long thresholdThrashing;
@property (nonatomic) long long triggerCount;
@property (nonatomic) float sumUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thrashing;

- (void)samplingWithPrologue:(id /* block */)a0 sampling:(id /* block */)a1 epilog:(id /* block */)a2;
- (id)configrue;
- (void)loadSetting;
- (void)initThreadSampling;
- (id)startThreadSampling;
- (void)calculateThreadLoadAVG:(id)a0;
- (id)buildThreadBasicMetrics;
- (void).cxx_destruct;
- (id)init;
- (void)stopWatching;
- (int)period;

@end
