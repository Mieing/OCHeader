@protocol OHRHoldHandPredictEngineDelegate;

@interface OHRHoldHandPredictEngine : OHRBasePredictEngine

@property (weak, nonatomic) id<OHRHoldHandPredictEngineDelegate> delegate;

- (BOOL)validateSensorData:(id)a0 andTouchData:(id)a1;
- (id)cropSensorArray:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)convertToResultObj:(id)a0 success:(BOOL)a1;
- (void)predictWithTouchData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)engineName;

@end
