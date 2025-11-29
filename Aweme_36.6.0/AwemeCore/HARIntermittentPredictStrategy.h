@class NSObject, NSString, HARSensorDataSampler;
@protocol OS_dispatch_source, OS_dispatch_queue, HARIntermittentPredictStrategyDelegate;

@interface HARIntermittentPredictStrategy : NSObject <HARPredictStrategy> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) HARSensorDataSampler *dataSampler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *frequencyTimer;
@property (nonatomic) double frequencyInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *controlFrequencyQueue;
@property (nonatomic) BOOL predicting;
@property (weak, nonatomic) id<HARIntermittentPredictStrategyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopPredict;
- (void)startPredict;
- (void)onSensorDataReady;
- (id)initWithSensorDataSampler:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
