@interface WAReportLocalPubResUsageItem : WAReportBaseItem

@property (nonatomic) unsigned int pubLibType;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;

@end
