@interface WAReportLaunchCgiItem : WAReportBaseItem

@property (nonatomic) unsigned long long startTimeStampInMs;
@property (nonatomic) unsigned long long endTimeStampInMs;
@property (nonatomic) unsigned long long costTimeInMs;
@property (nonatomic) unsigned int ret;
@property (nonatomic) unsigned int isSync;
@property (nonatomic) unsigned int isNormalOpen;
@property (nonatomic) BOOL isParallel;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;

@end
