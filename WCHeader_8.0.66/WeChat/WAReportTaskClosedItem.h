@interface WAReportTaskClosedItem : WAReportBaseItem

@property (nonatomic) long long startTimeStamp;
@property (nonatomic) long long endTimeStamp;
@property (nonatomic) unsigned int costTime;
@property (nonatomic) unsigned int isTriggerDownload;
@property (nonatomic) unsigned int preloadType;
@property (nonatomic) unsigned int isSyncUpdateContact;
@property (nonatomic) unsigned int isSyncLaunchCgi;
@property (nonatomic) unsigned int phase;
@property (nonatomic) unsigned int splashADState;
@property (nonatomic) unsigned int isSyncJsApiInfoCgi;
@property (nonatomic) unsigned int isSyncABTestInfoCgi;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int subReason;

- (int)reportID;
- (id)reportString;

@end
