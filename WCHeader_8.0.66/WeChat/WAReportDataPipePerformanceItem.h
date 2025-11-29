@interface WAReportDataPipePerformanceItem : WAReportBaseItem

@property (nonatomic) unsigned int publibVersion;
@property (nonatomic) BOOL isConcurrent;
@property (nonatomic) unsigned int dataLengthInBytes;
@property (nonatomic) unsigned int currentQueueNum;
@property (nonatomic) unsigned long long enqueueTimeInMs;
@property (nonatomic) unsigned long long dequeueTimeInMs;
@property (nonatomic) unsigned long long queueWaitTimeInMs;
@property (nonatomic) BOOL needConfirm;
@property (nonatomic) unsigned long long confirmTimeInMs;
@property (nonatomic) unsigned long long confirmResponseTimeInMs;
@property (nonatomic) unsigned long long dataResponseTimeInMs;
@property (nonatomic) unsigned long long requestTotalTimeInMs;

- (int)reportID;
- (id)reportString;

@end
