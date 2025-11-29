@class NSString, HARSensorDataSampler;

@interface HARLoopPredictStrategy : NSObject <HARPredictStrategy>

@property (retain, nonatomic) HARSensorDataSampler *sensorDataSampler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)predicting;
- (void)stopPredict;
- (void)startPredict;
- (void)onSensorDataReady;
- (id)initWithSensorDataSampler:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
