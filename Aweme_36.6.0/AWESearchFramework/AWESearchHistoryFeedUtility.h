@interface AWESearchHistoryFeedUtility : AWESearchHistoryUtility

+ (BOOL)isMoreSearchHistoryEnabled;
+ (id)searchNewHistoryScene;
+ (BOOL)isNeedToSyncFromOldHistory;
+ (id)getAllOldSearchHistory;
+ (void)searchHistoryHasSyncOld;
+ (id)searchNewHistoryKey;
+ (long long)historyDefaultDisplayNum;
+ (BOOL)enableSimplifyOfMoreHistoryPage;
+ (BOOL)enableSearchPredictFromAllHistory;
+ (void)resetOldHistorySyncStatus;

@end
