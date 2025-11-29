@interface AWETrackerPassthroughSettingsManager : NSObject

@property (nonatomic) BOOL enableTimingApply;
@property (nonatomic) BOOL enableParamsCompare;
@property (nonatomic) BOOL enableTransmissionMonitor;
@property (nonatomic) BOOL enableAspectMonitor;
@property (nonatomic) unsigned long long transmissionMonitorMaxNodeNum;
@property (nonatomic) unsigned long long transmissionMonitorMaxBlockNum;
@property (nonatomic) unsigned long long transmissionMonitorMaxRecordNum;
@property (nonatomic) unsigned long long aspectMonitorMaxRecordNum;
@property (nonatomic) BOOL aspectSortInAlphabeticalOrder;
@property (nonatomic) BOOL aspectCollectorMethodsDuplicateDetect;
@property (nonatomic) BOOL transmissionChainExposure;
@property (nonatomic) BOOL enableTransmissionNodePointerFix;
@property (nonatomic) BOOL enableTransmissionObjJudgeSelfNil;

+ (void)setTimingApplyEnable:(BOOL)a0;
+ (void)setParamsCompareEnable:(BOOL)a0;
+ (void)setAspectSortInAlphabeticalOrderEnable:(BOOL)a0;
+ (void)setAspectCollectMethodsDuplicateDetectEnable:(BOOL)a0;
+ (void)setTransmissionChainExposureEnable:(BOOL)a0;
+ (void)setTransmissionObjJudgeSelfNilEnable:(BOOL)a0;
+ (void)setAspectMonitorMaxRecordNum:(unsigned long long)a0;
+ (void)setTransmissionMonitorMaxNodeNum:(unsigned long long)a0;
+ (void)setTransmissionMonitorMaxRecordNum:(unsigned long long)a0;
+ (void)setTransmissionMonitorMaxBlockNum:(unsigned long long)a0;
+ (void)setTransmissionMonitorEnable:(BOOL)a0;
+ (void)setAspectMonitorEnable:(BOOL)a0;
+ (void)setTransmissionNodePointerFixEnable:(BOOL)a0;
+ (id)sharedInstance;

- (id)init;

@end
