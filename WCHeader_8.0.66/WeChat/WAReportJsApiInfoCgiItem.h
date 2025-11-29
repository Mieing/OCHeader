@interface WAReportJsApiInfoCgiItem : WAReportBaseItem

@property (nonatomic) unsigned int costTimeMs;
@property (nonatomic) long long startTimeStampMs;
@property (nonatomic) long long endTimeStampMs;
@property (nonatomic) unsigned int ret;
@property (nonatomic) unsigned int isSync;
@property (nonatomic) unsigned int NetworkType;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;

@end
