@class NSString;

@interface WAReportWeAppQualityDetectItem : WAReportBaseItem

@property (nonatomic) unsigned int qualityIssueType;
@property (nonatomic) unsigned int qualityIssueSubType;
@property (nonatomic) unsigned long long qualityIssueTimeStampInMs;
@property (nonatomic) unsigned int pageCount;
@property (copy, nonatomic) NSString *lastNPagePath;
@property (copy, nonatomic) NSString *qualityIssuePageLastError;
@property (copy, nonatomic) NSString *qualityIssueServiceLastError;
@property (copy, nonatomic) NSString *runtimeContext;
@property (copy, nonatomic) NSString *qualityIssueHappenPagePath;
@property (nonatomic) unsigned int whiteScreenDetectThreshold;
@property (copy, nonatomic) NSString *openType;
@property (copy, nonatomic) NSString *navId;
@property (nonatomic) BOOL currentPageRecoverReloaded;
@property (nonatomic) BOOL hasHtmlWeb;
@property (nonatomic) unsigned long long appRouteStartTimeInMs;
@property (nonatomic) unsigned long long initReadyReceiveTimeInMs;
@property (nonatomic) unsigned long long recoverReloadStartTimeInMs;
@property (nonatomic) unsigned long long recoverReloadInitReadyReceiveTimeInMs;
@property (nonatomic) unsigned long long initReadyLastWhiteScreenDetectedTimeInMs;
@property (copy, nonatomic) NSString *whiteScreenHexColor;
@property (nonatomic) unsigned int whiteScreenColorRatio;
@property (copy, nonatomic) NSString *modalOrToastStr;
@property (nonatomic) BOOL isDisplayingPageSheet;
@property (nonatomic) unsigned int whiteScreenDoubleCheckScene;
@property (nonatomic) BOOL isSkyline;
@property (nonatomic) unsigned int whiteScreenDoubleCheckReason;
@property (nonatomic) unsigned int engineType;
@property (nonatomic) unsigned int gameRenderMode;
@property (nonatomic) BOOL isByteCodeEnabled;
@property (nonatomic) unsigned int currentWebViewResponsibleType;
@property (nonatomic) unsigned int currentWebViewAliveFailedCount;
@property (nonatomic) unsigned int currentServiceAliveFailedCount;
@property (nonatomic) unsigned long long currentWebViewLastAliveTimeStampInMs;
@property (nonatomic) unsigned long long currentWebViewLastAliveFailedTimeStampInMs;
@property (nonatomic) unsigned long long currentServiceLastAliveTimeStampInMs;
@property (nonatomic) unsigned long long currentServiceLastAliveFailedTimeStampInMs;
@property (nonatomic) unsigned long long currentWebViewInitTimeStampInMs;
@property (nonatomic) unsigned long long currentWebViewRouteIntensionTimeStampInMs;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
