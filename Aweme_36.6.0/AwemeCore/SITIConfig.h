@class NSString;

@interface SITIConfig : NSObject

@property (nonatomic) int sitiStrategyVer;
@property (nonatomic) BOOL usingGPU;
@property (nonatomic) BOOL usingARM;
@property (nonatomic) int threadCount;
@property (nonatomic) int periodMS;
@property (nonatomic) int extractDuration;
@property (nonatomic) int framesCountsCalcSiti;
@property (nonatomic) int qulityMode;
@property (nonatomic) BOOL interactDisableSiti;
@property (nonatomic) BOOL dropEncodeFps;
@property (nonatomic) int sitiFlag;
@property (nonatomic) BOOL enableMotionSense;
@property (nonatomic) int motionSenseAlgoType;
@property (nonatomic) int motionSenseNumThreads;
@property (nonatomic) int motionSenseBytennForwardType;
@property (copy, nonatomic) NSString *motionSenseModelPath;
@property (nonatomic) int motionSenseLogState;
@property (nonatomic) int motionSenseReservedParam;
@property (nonatomic) int strategyAdjustMode;
@property (nonatomic) int bitrateMode;
@property (copy, nonatomic) NSString *categoryParams;
@property (copy, nonatomic) NSString *bitrateRatios;
@property (copy, nonatomic) NSString *maxBps;
@property (copy, nonatomic) NSString *fpsRatios;
@property (copy, nonatomic) NSString *sitiType;
@property (nonatomic) BOOL enableSitiLog;

- (void).cxx_destruct;
- (id)description;

@end
