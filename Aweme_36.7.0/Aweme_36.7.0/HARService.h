@class HARSensorDataSampler, HARServiceDeprecated, NSDictionary, NSString, HARSensorDataController, NSMutableArray, NSObject;
@protocol IInferenceEngine, OS_dispatch_queue, HARPredictStrategy;

@interface HARService : NSObject <HARIntermittentPredictStrategyDelegate, HARSensorDataControllerDelegate> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _strategyLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _resultLock;
}

@property (class, nonatomic) BOOL removeDispatchSync;

@property (nonatomic) double frequencyInterval;
@property (copy, nonatomic) id /* block */ task1PredictCB;
@property (copy, nonatomic) id /* block */ task2PredictCB;
@property (copy, nonatomic) id /* block */ task3PredictCB;
@property (copy, nonatomic) id /* block */ sensorDataChangedCallBack;
@property (retain, nonatomic) id<IInferenceEngine> task1Delegate;
@property (retain, nonatomic) id<IInferenceEngine> task2Delegate;
@property (retain, nonatomic) id<IInferenceEngine> task3Delegate;
@property (nonatomic) BOOL isEnableControlOnMac;
@property (nonatomic) BOOL isEnableFrequencyControl;
@property (nonatomic) BOOL prohibit;
@property (nonatomic) int maxRange;
@property (retain, nonatomic) NSMutableArray *arrayWithResults;
@property (retain, nonatomic) NSMutableArray *arrayWithResultsDic;
@property (retain, nonatomic, getter=getLastResult) NSDictionary *lastResult;
@property (retain, nonatomic, getter=getLastTask2Result) NSDictionary *lastTask2Result;
@property (nonatomic, getter=getLastTask3IntResult) long long lastTask3IntResult;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *harOperateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) HARSensorDataController *dataController;
@property (retain, nonatomic) HARSensorDataSampler *dataSampler;
@property (retain, nonatomic) id<HARPredictStrategy> predictStrategy;
@property (nonatomic) struct HARStatisticsSensorData { double accelerationMeanX; double accelerationMeanY; double accelerationMeanZ; double accelerationVarX; double accelerationVarY; double accelerationVarZ; BOOL valid; } statisticsSensorData;
@property (nonatomic) BOOL enableCollectDeviceAttitude;
@property (nonatomic) BOOL enableCollectSensorData;
@property (retain, nonatomic) HARServiceDeprecated *deprecatedService;
@property (nonatomic) BOOL useDeprecated;
@property (nonatomic) BOOL useNewProhibitLogic;
@property (nonatomic) BOOL enableMagnetometerSensor;
@property (nonatomic) BOOL shouldRemoveDispatchSync;
@property (nonatomic) BOOL shouldResume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hookUseNewProhibitLogic;
+ (void)_aweLazyRegisterStaticLoad_AWEClientAIFix;
+ (id)sharedInstance;

- (id)getLastResultsDicOfRange:(long long)a0;
- (long long)getLastRangeMostIntStatus:(long long)a0;
- (void)onSensorDataReady:(id)a0 statisticsSensorData:(struct HARStatisticsSensorData { double x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; })a1;
- (id)getLastSensorValueWithDataType:(unsigned long long)a0 range:(long long)a1;
- (void)setupWithEngine:(id)a0;
- (void)setEnableControlOnMacFlagWithBool:(BOOL)a0;
- (BOOL)shouldStartPredicting;
- (BOOL)p_startPredicting;
- (BOOL)startPredicting;
- (void)stopPredicting;
- (BOOL)isPredicting;
- (void)setPredictCallback:(id /* block */)a0;
- (void)setPredictCallback:(id /* block */)a0 forTaskType:(unsigned long long)a1;
- (id)getLastDictResultSafelyForType:(unsigned long long)a0;
- (id)formatCorrectionWith:(id)a0;
- (id)currentTimeStr;
- (id)getLastStatus;
- (id)getLastResultsOfRange:(long long)a0;
- (id)p_getLastResultsFromArray:(id)a0 ofRange:(long long)a1;
- (long long)getMostIntStatusInArray:(id)a0;
- (id)calculateLastStatusWithDictResult:(id)a0 default:(id)a1;
- (id)getLastStrStatusForType:(unsigned long long)a0;
- (void)addResultToDicArray:(id)a0;
- (void)addResultToArraySafely;
- (void)addResultToArray:(id)a0;
- (long long)calculateTask3ResultWithStatisticsSensorData:(struct HARStatisticsSensorData { double x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; })a0 zMeanThreshold:(double)a1;
- (BOOL)isOnMacDevice;
- (void)setupMotionDataProvider:(id)a0;
- (BOOL)startOncePredictingWithInterval:(float)a0;
- (void)setProhibitEnable:(BOOL)a0;
- (long long)getLastIntStatusForType:(unsigned long long)a0;
- (long long)getLastIntStatus;
- (struct HARDeviceAttitudes { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getLastDeviceAttitudesWithXMeanThreshold:(double)a0 yMeanThreshold:(double)a1 zMeanThreshold:(double)a2;
- (unsigned long long)getSupportStatusWithVarThreshold0:(double)a0 varThreshold1:(double)a1;
- (unsigned long long)normalGetHandHoldStatusWithHarIntStatus:(long long)a0 deviceAttitudes:(struct HARDeviceAttitudes { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 supportStatus:(unsigned long long)a2;
- (unsigned long long)getLastHandholdStatusWithSlideStatus:(unsigned long long)a0 xMeanThreshold:(double)a1 yMeanThreshold:(double)a2 zMeanThreshold:(double)a3 varThreshold0:(double)a4 varThreshold1:(double)a5;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
