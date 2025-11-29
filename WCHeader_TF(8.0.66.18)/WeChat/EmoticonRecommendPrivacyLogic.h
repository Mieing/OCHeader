@class RecommendPrivcyWrap, NSString;

@interface EmoticonRecommendPrivacyLogic : MMObject {
    RecommendPrivcyWrap *m_statisticsData;
    NSString *m_statisticsFilePath;
}

- (id)init;
- (BOOL)canShowFullHeader;
- (BOOL)canShowBriefHeader;
- (void)recordFirstFullHeaderShowTime;
- (void)recordFirstBriefHeaderShowTime;
- (void)recordRejectFullHeaderTime;
- (void)recordIsBriefHeaderOperated;
- (void)resetAllData;
- (void)saveStatisticsData;
- (void)loadStatisticsData;
- (void).cxx_destruct;

@end
