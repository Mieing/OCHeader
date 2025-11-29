@class NSString, NSObject;
@protocol OS_dispatch_queue, OHRBasePredictConfig;

@interface OHRBasePredictEngine : NSObject <OHRPredictEngineInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (retain, nonatomic) id<OHRBasePredictConfig> predictConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_predictWithInputParams:(id)a0 andCompletion:(id /* block */)a1;
- (void)predictWithTouchData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)enabled;
- (id)engineName;

@end
