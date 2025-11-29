@interface WAAfterCloseGuideReportItem : WAReportBaseItem

@property (nonatomic) unsigned int dialogType;
@property (nonatomic) unsigned int event;

- (int)reportID;
- (id)reportString;

@end
