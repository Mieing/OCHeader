@class FinderLivePromoteComponentReportInfo, NSString, NSData, FinderLiveAggregationCardReportRequest, FinderLiveEndPageReportInfo, FinderLiveGuideInfoItem, NSMutableArray, ExtStatsReddotInfo;

@interface ExtStats : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSData *feedActionValue;
@property (nonatomic) unsigned int videoDuration;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) ExtStatsReddotInfo *reddotInfo;
@property (retain, nonatomic) FinderLiveEndPageReportInfo *endPageReport;
@property (retain, nonatomic) FinderLivePromoteComponentReportInfo *promoteReport;
@property (retain, nonatomic) NSMutableArray *jumpinfoReportList;
@property (retain, nonatomic) FinderLiveAggregationCardReportRequest *aggrCardReport;
@property (retain, nonatomic) NSString *funcMsgReportExtInfo;
@property (retain, nonatomic) FinderLiveGuideInfoItem *guideInfoReport;

+ (void)initialize;

@end
