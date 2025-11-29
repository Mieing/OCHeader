@class OHREngine, OHRTouchAreaCalculator, NSDictionary, OHRServiceConfig, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OHRTouchAreaResult;

@interface OHRService : NSObject <OHRHandPredictEngineDelegate, OHRWetHandPredictEngineDelegate, OHRHoldHandPredictEngineDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) OHREngine *engine;
@property (retain, nonatomic) OHRTouchAreaCalculator *touchAreaCalculator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) OHRServiceConfig *config;
@property (retain, nonatomic) NSDictionary *predictEngineMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic) long long lastTrackValuesTimestamp;
@property (retain, nonatomic) id<OHRTouchAreaResult> lastPredictTouchArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (void)updateConfig:(id /* block */)a0;
- (id)buildPredictEngineMap;
- (void)compactDelegates;
- (long long)indexOfDelegate:(id)a0;
- (void)performDelegateSelector:(SEL)a0 withBlock:(id /* block */)a1;
- (void)onOHREngineCollectTouch:(id)a0;
- (void)onOHRPredictComplete:(BOOL)a0 result:(id)a1;
- (BOOL)shouldInterceptOHRPredictWithTouchEvents:(id)a0;
- (void)onOHRWetHandPredictComplete:(BOOL)a0 result:(id)a1;
- (id)onOHRHoldHandPredictFetchSensorData;
- (void)onOHRHoldHandPredictComplete:(BOOL)a0 result:(id)a1;
- (void)registerOHRServiceDelegate:(id)a0;
- (void)removeOHRServiceDelegate:(id)a0;
- (void)setOHREngineDelegate;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
