@interface WAReportEvaluateSheetActionItem : WAReportBaseItem

@property (nonatomic) unsigned long long eventID;
@property (nonatomic) unsigned int eventTime;
@property (nonatomic) unsigned int evaluateScore;
@property (nonatomic) unsigned long long result;

- (id)reportString;

@end
