@interface WAReportPlateManageActionItem : WAReportBaseItem

@property (nonatomic) unsigned long long callPageType;
@property (nonatomic) unsigned long long halfPageOperation;
@property (nonatomic) unsigned long long licensePlateOperation;

- (int)reportID;
- (id)reportString;

@end
