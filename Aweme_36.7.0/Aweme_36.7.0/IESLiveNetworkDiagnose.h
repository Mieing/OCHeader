@class NSTimer, NSObject;
@protocol IESLiveNetworkQualityInfoService, OS_dispatch_queue;

@interface IESLiveNetworkDiagnose : NSObject

@property (nonatomic) struct IESLiveNetworkDiagnoseConfig { BOOL x0; long long x1; long long x2; long long x3; long long x4; long long x5; } *config;
@property (retain, nonatomic) NSTimer *netDiagnoseTimer;
@property (copy, nonatomic) id /* block */ observer;
@property (retain, nonatomic) id<IESLiveNetworkQualityInfoService> networkQualityInfoService;
@property (nonatomic) long long networkQualityType;
@property (nonatomic) long long continuousTimes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnoseQueue;

- (void)addNetworkFluctuationsObserver:(id /* block */)a0;
- (void)collectionNetworkInfo;
- (void)diagnoseNetworkWithHttpRtt:(long long)a0 networkQuality:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
