@class NSObject, IESLivePerfSampleContext, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESLivePrefSampleV2 : NSObject

@property (retain, nonatomic) IESLivePerfSampleContext *context;
@property (retain, nonatomic) NSMutableArray *prefSampleInfos;
@property (nonatomic) long long sample_count_audience;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *perfSampleQueue;
@property (nonatomic) double triggerThermalTime;
@property (nonatomic) BOOL enableTrackThermal;

- (void)prefSampleInfo:(id)a0 forceReport:(BOOL)a1;
- (void)trackThermalStopReason:(id)a0;
- (void)reportPrefSampleInfo:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
