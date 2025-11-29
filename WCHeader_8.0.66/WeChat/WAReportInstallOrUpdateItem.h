@interface WAReportInstallOrUpdateItem : WAReportBaseItem

@property (nonatomic) unsigned int eventID;
@property (nonatomic) unsigned int eventResult;
@property (nonatomic) unsigned int eventPercent;
@property (nonatomic) long long costTime;
@property (nonatomic) unsigned int eventTime;
@property (nonatomic) BOOL isUseModule;

- (id)reportString;

@end
