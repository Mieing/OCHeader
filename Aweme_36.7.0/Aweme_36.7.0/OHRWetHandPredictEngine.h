@protocol OHRWetHandPredictEngineDelegate;

@interface OHRWetHandPredictEngine : OHRBasePredictEngine

@property (weak, nonatomic) id<OHRWetHandPredictEngineDelegate> delegate;

- (id)convertToResultObj:(id)a0 success:(BOOL)a1;
- (void)predictWithTouchData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)engineName;

@end
