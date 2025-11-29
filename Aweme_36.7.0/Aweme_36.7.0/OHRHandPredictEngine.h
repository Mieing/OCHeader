@class NSArray;
@protocol OHRHandPredictEngineDelegate;

@interface OHRHandPredictEngine : OHRBasePredictEngine {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSArray *currentSampleTouchEvents;
@property (weak, nonatomic) id<OHRHandPredictEngineDelegate> delegate;

- (id)generateInputStreamWithTouchData:(id)a0 delegate:(id)a1;
- (id)convertToResultObjWithTouchData:(id)a0 success:(BOOL)a1 outParams:(id)a2 error:(id *)a3;
- (void)predictWithTouchData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (id)engineName;

@end
