@interface WAReportMemoryWarningItem : WAReportBaseItem

@property (nonatomic) unsigned int cacheNum;
@property (nonatomic) long long processMemUsed;
@property (nonatomic) unsigned long long deviceMem;

- (int)reportID;
- (id)reportString;

@end
