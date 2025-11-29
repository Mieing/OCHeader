@interface WAReportAppTaskInterfereItem : WAReportBaseItem

@property (nonatomic) long long startTimeStamp;
@property (nonatomic) long long endTimeStamp;
@property (nonatomic) unsigned int costTime;
@property (nonatomic) unsigned int action;

- (int)reportID;
- (id)reportString;

@end
