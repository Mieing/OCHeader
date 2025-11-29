@interface MsgSearchHelperReportCostTimeAndResult : MsgSearchHelperReport

@property (nonatomic) unsigned long long searchStartTime;
@property (nonatomic) unsigned long long searchEndTime;
@property (nonatomic) BOOL isSearchStartHadPriorityBuildIndex;
@property (nonatomic) BOOL isHadReportSearchResult;

- (void)copyFromOtherObject:(id)a0;

@end
