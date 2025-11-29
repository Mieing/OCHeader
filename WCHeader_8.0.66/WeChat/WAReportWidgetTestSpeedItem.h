@interface WAReportWidgetTestSpeedItem : WAReportWidgetBaseItem

@property (nonatomic) unsigned int eventId;
@property (nonatomic) unsigned int eventResult;
@property (nonatomic) unsigned int costTime;
@property (nonatomic) unsigned int dataSize;
@property (nonatomic) unsigned int downloadScene;

- (int)reportID;
- (id)reportString;

@end
