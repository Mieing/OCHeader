@interface WAReportDestopOpItem : WAReportBaseItem

@property (nonatomic) unsigned int eventTime;
@property (nonatomic) unsigned long long opActionType;
@property (nonatomic) unsigned long long opScene;

- (id)reportString;

@end
