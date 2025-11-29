@class NSString;

@interface IntelligentMessageReportCostTimeAndResult : MMObject

@property (retain, nonatomic) NSString *m_searchSessionId;
@property (retain, nonatomic) NSString *m_searchText;
@property (nonatomic) unsigned long long m_searchStartTime;
@property (nonatomic) unsigned long long m_searchEndTime;
@property (nonatomic) BOOL m_isSearchStartHadPriorityBuildIndex;
@property (nonatomic) BOOL m_isHadReportSearchResult;

- (void).cxx_destruct;

@end
