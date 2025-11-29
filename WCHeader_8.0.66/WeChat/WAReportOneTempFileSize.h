@interface WAReportOneTempFileSize : WAReportBaseItem

@property (nonatomic) unsigned long long fileAllocSize;

- (int)reportID;
- (id)reportString;

@end
