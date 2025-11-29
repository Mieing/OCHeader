@interface WAReportCgiCostTimeItem : WAReportBaseItem

@property (nonatomic) long long startTimeStamp;
@property (nonatomic) long long endTimeStamp;
@property (nonatomic) unsigned int costTime;
@property (nonatomic) unsigned int responseSize;
@property (nonatomic) int ret;
@property (nonatomic) int bizRet;
@property (nonatomic) int cgiNo;

- (int)reportID;
- (id)reportString;

@end
