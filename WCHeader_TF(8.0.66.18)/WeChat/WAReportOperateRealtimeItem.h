@interface WAReportOperateRealtimeItem : WAReportBaseItem

@property (nonatomic) unsigned int itemId;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) unsigned int priority;
@property (nonatomic) unsigned int retryInterval;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) unsigned int action;

- (int)reportID;
- (id)reportString;

@end
