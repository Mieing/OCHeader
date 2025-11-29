@class FinderLiveStatsReportProductHotSaleNotificationInfo, FinderLiveStatsReportJumpInfo, FinderLiveStatsReportClickFeedPoiInfo, FinderLiveStatsReportClickIncomeEncashInfo;

@interface FinderLiveStatsReportItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) FinderLiveStatsReportClickFeedPoiInfo *clickFeedPoiInfo;
@property (retain, nonatomic) FinderLiveStatsReportProductHotSaleNotificationInfo *productHotSaleNotificationInfo;
@property (retain, nonatomic) FinderLiveStatsReportClickIncomeEncashInfo *clickIncomeEncashInfo;
@property (retain, nonatomic) FinderLiveStatsReportJumpInfo *reportJumpInfo;

+ (void)initialize;

@end
