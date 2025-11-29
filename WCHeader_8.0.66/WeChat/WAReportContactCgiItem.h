@interface WAReportContactCgiItem : WAReportBaseItem

@property (nonatomic) unsigned long long startTimeStampInMs;
@property (nonatomic) unsigned long long endTimeStampInMs;
@property (nonatomic) unsigned long long costTimeInMs;
@property (nonatomic) BOOL ret;
@property (nonatomic) BOOL isSync;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;

@end
