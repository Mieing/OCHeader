@interface WAReportSplashAdItem : WAReportBaseItem

@property (nonatomic) unsigned long long costTimeMs;
@property (nonatomic) unsigned long long startTimeStampMs;
@property (nonatomic) unsigned long long endTimeStampMs;
@property (nonatomic) unsigned long long showAdState;
@property (nonatomic) unsigned long long shouldShowTimeStamp;
@property (nonatomic) unsigned long long willLayoutFirstStepViewTimeStamp;
@property (nonatomic) unsigned long long willLayoutAllViewTimeStamp;
@property (nonatomic) unsigned long long showTimeStamp;
@property (nonatomic) unsigned long long didLayoutFirstStepViewTimeStamp;
@property (nonatomic) unsigned long long didLayoutAllViewTimeStamp;
@property (nonatomic) unsigned long long checkStageTimeCost;
@property (nonatomic) unsigned long long layoutFirstStepViewTimeCost;
@property (nonatomic) unsigned long long layoutAllViewTimeCost;
@property (nonatomic) unsigned long long jsReceiveShouldShowTimeStamp;
@property (nonatomic) unsigned long long jsCallShowTimeStamp;
@property (nonatomic) unsigned long long shouldShowEventTimeCost;
@property (nonatomic) unsigned long long showEventTimeCost;
@property (nonatomic) unsigned long long checkShowAdTimeThreshold;
@property (nonatomic) unsigned long long notShowAdErrorCode;
@property (nonatomic) unsigned long long adOperateCallTime;
@property (nonatomic) unsigned long long adOperateCallReceivedTime;
@property (nonatomic) unsigned long long adOperateCallbackTime;
@property (nonatomic) unsigned long long adOperateCallbackReceivedTime;
@property (nonatomic) unsigned long long adOperrateCallCostTime;
@property (nonatomic) unsigned long long adOperateCallClientCostTime;
@property (nonatomic) unsigned long long codeBlockTimeThreshold;
@property (nonatomic) BOOL serviceInjectReady;
@property (nonatomic) unsigned long long publicLibVersion;
@property (nonatomic) int isPreloaded;
@property (nonatomic) int isWorker;
@property (nonatomic) unsigned int displayMode;

- (int)reportID;
- (id)reportString;

@end
