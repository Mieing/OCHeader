@interface WAReportHomeButtonItem : WAReportBaseItem

@property (nonatomic) unsigned long long eventTimestamp;
@property (nonatomic) unsigned long long eventId;

- (int)reportID;
- (id)reportString;

@end
