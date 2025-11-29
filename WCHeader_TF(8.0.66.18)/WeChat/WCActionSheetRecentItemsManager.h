@class NSString, NSArray, RecentUsageDics;

@interface WCActionSheetRecentItemsManager : MMObject {
    RecentUsageDics *m_statisticsData;
    NSString *m_statisticsFilePath;
    NSArray *recentSortItems;
    NSArray *m_cards;
    NSArray *m_devices;
}

- (id)initWithScene:(unsigned int)a0 filePathExtension:(id)a1;
- (void)saveStatisticsData;
- (void)loadStatisticsData;
- (void)updateDeviceLastUsedTime:(id)a0;
- (void)updateWeAppLastUsedTime:(id)a0;
- (id)sortItemsByTimeWithCards:(id)a0 devices:(id)a1;
- (void)sortItems;
- (id)getRecentSortItems;
- (id)getItemTitle:(id)a0;
- (void).cxx_destruct;

@end
