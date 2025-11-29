@class NSString, NSMutableDictionary;

@interface MsgSearchHelperReportCache : MMObject

@property (retain, nonatomic) NSString *searchSessionId;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned long long buildIndexStartTime;
@property (nonatomic) unsigned long long buildIndexEndTime;
@property (retain, nonatomic) NSMutableDictionary *dicReportCostTimeAndResult;
@property (nonatomic) BOOL isHadReportSearch;

- (id)getReportCostTimeAndResultWithMsgSearchType:(unsigned int)a0;
- (void).cxx_destruct;

@end
