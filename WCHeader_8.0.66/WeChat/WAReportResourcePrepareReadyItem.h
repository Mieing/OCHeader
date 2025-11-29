@interface WAReportResourcePrepareReadyItem : WAReportBaseItem

@property (nonatomic) unsigned long long costTimeInMs;
@property (nonatomic) unsigned long long startTimeStampInMs;
@property (nonatomic) unsigned long long endTimeStampInMs;
@property (nonatomic) unsigned int pkgSize;
@property (nonatomic) unsigned int isLaunchSync;
@property (nonatomic) unsigned int isContactSync;
@property (nonatomic) BOOL hasDownloadCode;
@property (nonatomic) unsigned int launchType;
@property (nonatomic) unsigned int isPreload;
@property (nonatomic) unsigned long long launchReadyT;
@property (nonatomic) unsigned long long packageReadyT;
@property (nonatomic) unsigned int requestType;
@property (nonatomic) unsigned int isCheckJsApiInfoSync;
@property (nonatomic) unsigned long long checkJsApiInfoReadyT;
@property (nonatomic) unsigned int runningState;
@property (nonatomic) unsigned int isCheckAppidABTestInfoSync;
@property (nonatomic) unsigned long long checkAppidABTestInfoReadyT;
@property (nonatomic) unsigned int webviewType;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;

@end
