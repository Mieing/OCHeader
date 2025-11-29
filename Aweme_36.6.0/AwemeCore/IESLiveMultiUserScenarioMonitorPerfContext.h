@class NSMutableDictionary, NSDictionary, IESLiveGCDTimer, NSString, NSObject;
@protocol IESLivePerfSampler, IESLiveNetworkQualityInfoService, OS_dispatch_queue;

@interface IESLiveMultiUserScenarioMonitorPerfContext : NSObject

@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (weak, nonatomic) id<IESLiveNetworkQualityInfoService> networkQualityService;
@property (nonatomic) unsigned long long currentPerfWarningLevel;
@property (readonly, copy, nonatomic) NSDictionary *sampleDataTypes;
@property (retain, nonatomic) IESLiveGCDTimer *sampleTimer;
@property (retain, nonatomic) NSMutableDictionary *latestPerfData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleQueue;
@property (copy, nonatomic) NSString *sampleFormattedTime;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (id)buildPerformanceData;
- (void).cxx_destruct;
- (void)dealloc;

@end
