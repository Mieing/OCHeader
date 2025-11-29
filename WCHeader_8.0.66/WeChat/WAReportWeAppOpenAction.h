@class NSString;

@interface WAReportWeAppOpenAction : WAReportBaseItem

@property (nonatomic) unsigned long long costTimeInMs;
@property (nonatomic) unsigned long long startTimeStampInMs;
@property (nonatomic) unsigned long long endTimeStampInMs;
@property (nonatomic) unsigned int isLaunch;
@property (nonatomic) unsigned int loadingType;
@property (copy, nonatomic) NSString *sceneData;
@property (nonatomic) unsigned int runningState;
@property (copy, nonatomic) NSString *reloadReferer;
@property (copy, nonatomic) NSString *reloadReason;
@property (nonatomic) unsigned int userType;
@property (nonatomic) unsigned int launchMode;
@property (nonatomic) unsigned int coldStartMode;
@property (copy, nonatomic) NSString *shortLink;
@property (nonatomic) unsigned int wxProcessColdStartTimeStamp;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
