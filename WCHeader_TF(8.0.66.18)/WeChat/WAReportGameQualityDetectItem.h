@interface WAReportGameQualityDetectItem : WAReportBaseItem

@property (nonatomic) BOOL isDownloadCode;
@property (nonatomic) unsigned int isPreload;
@property (nonatomic) unsigned int webViewType;
@property (nonatomic) unsigned int userType;
@property (nonatomic) unsigned int runningState;
@property (nonatomic) unsigned int issueType;
@property (nonatomic) unsigned int issueSubType;
@property (nonatomic) unsigned int stage;
@property (nonatomic) unsigned int reasonType;
@property (nonatomic) unsigned long long issueTimestampInMs;
@property (nonatomic) unsigned int renderMode;
@property (nonatomic) unsigned long long runtimeDuration;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;

@end
