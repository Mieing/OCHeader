@interface WAReportGetUrlCgiItem : WAReportBaseItem

@property (nonatomic) unsigned long long startTimeStampInMs;
@property (nonatomic) unsigned long long endTimeStampInMs;
@property (nonatomic) unsigned long long costTimeInMs;
@property (nonatomic) unsigned int ret;
@property (nonatomic) BOOL isParallel;
@property (nonatomic) BOOL isUsed;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;

@end
