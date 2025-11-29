@class NSDictionary, CMMotionManager, NSMutableArray, NSObject;
@protocol IInferenceEngine, OS_dispatch_source, OS_dispatch_queue;

@interface HARServiceDeprecated : NSObject

@property (nonatomic) double interval;
@property (nonatomic) double threshold;
@property (nonatomic) int maxRange;
@property (nonatomic) int maxSensorDataRange;
@property (retain, nonatomic) id<IInferenceEngine> delegate;
@property (copy, nonatomic) id /* block */ predictCB;
@property (nonatomic) BOOL predicting;
@property (nonatomic) BOOL isEnableControlOnMac;
@property (nonatomic) BOOL isEnableCollectSensorData;
@property (retain, nonatomic) CMMotionManager *motionManger;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSMutableArray *inputParams;
@property (retain, nonatomic) NSMutableArray *arrayWithResults;
@property (retain, nonatomic) NSMutableArray *arrayWithResultsDic;
@property (retain, nonatomic) NSDictionary *lastResult;
@property (retain, nonatomic) NSMutableArray *accelerometerDataArray;
@property (retain, nonatomic) NSMutableArray *gyroscopeDataArray;
@property (retain, nonatomic) NSMutableArray *magnetometerDataArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *getResultQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processInputQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *helperQueue;
@property (nonatomic) BOOL prohibit;
@property (copy, nonatomic) id /* block */ sensorDataChangedCallBack;
@property (nonatomic) BOOL enableMagnetometerSensor;

+ (id)sharedInstance;

- (id)getLastResultsDicOfRange:(long long)a0;
- (long long)getLastRangeMostIntStatus:(long long)a0;
- (id)getLastSensorValueWithDataType:(unsigned long long)a0 range:(long long)a1;
- (void)setEnableCollectSensorData:(BOOL)a0;
- (void)setupWithEngine:(id)a0;
- (void)setEnableControlOnMacFlagWithBool:(BOOL)a0;
- (BOOL)startPredicting;
- (void)stopPredicting;
- (BOOL)isPredicting;
- (void)setPredictCallback:(id /* block */)a0;
- (void)setProhibitEnable:(BOOL)a0 shouldResume:(BOOL)a1;
- (id)getLastResult;
- (id)formatCorrectionWith:(id)a0;
- (id)currentTimeStr;
- (id)getLastStatus;
- (id)getLastResultsOfRange:(long long)a0;
- (void)addResultToDicArray:(id)a0;
- (void)addResultToArray:(id)a0;
- (BOOL)isOnMacDevice;
- (void)addOneSensorData:(id)a0 toRecordArray:(id)a1;
- (unsigned long long)inputParamsCount;
- (id)getInputArrayCopy;
- (id)findMostFrequentElementInArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearData;

@end
