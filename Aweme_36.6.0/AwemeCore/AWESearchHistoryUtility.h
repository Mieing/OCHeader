@interface AWESearchHistoryUtility : NSObject

+ (void)deleteSearchHistory:(id)a0;
+ (long long)searchHistoryCount:(id)a0;
+ (void)discardOldUserHistoryIfNeeded;
+ (id)savedSearchHistoryWordsForHistoryWordStrings:(id)a0;
+ (id)p_searchHistoryKeyForUid:(id)a0;
+ (id)searchHistoryWordDict;
+ (long long)searchMaxCount;
+ (id)p_searchHistoryKeyForUid:(id)a0 historyKey:(id)a1;
+ (BOOL)isMoreSearchHistoryEnabled;
+ (void)recordSearchHistory:(id)a0 scene:(id)a1 historyKey:(id)a2 timeCheck:(BOOL)a3 extraParams:(id)a4;
+ (id)buildHistoryWord:(id)a0 scene:(id)a1 extraParams:(id)a2;
+ (void)saveLocalHistory:(id)a0 scene:(id)a1 historyWord:(id)a2 historyKey:(id)a3 extraParams:(id)a4;
+ (void)saveCloudHistory:(id)a0 historyKey:(id)a1 forException:(BOOL)a2 extraParams:(id)a3 completion:(id /* block */)a4;
+ (id)searchNewHistoryScene;
+ (void)updateLocalHistoryForRecord:(id)a0 historyKey:(id)a1 timeCheck:(BOOL)a2 syncSuccess:(BOOL)a3;
+ (id)uidSearchHistoryKey:(id)a0;
+ (id)uidSearchHistoryKey;
+ (BOOL)isSameDay:(double)a0 time2:(double)a1;
+ (void)deleteSearchHistory:(id)a0 params:(id)a1;
+ (void)updateLocalHistoryForDelete:(id)a0 historyKey:(id)a1 isAll:(BOOL)a2;
+ (void)deleteCloudSearchHistory:(id)a0 deleteAll:(BOOL)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)deleteAllLocalSearchHistory;
+ (void)deleteLocalSearchHistory:(id)a0;
+ (id)removeNeedDeleteHistory:(id)a0;
+ (id)distinctHistory:(id)a0 byDate:(id)a1;
+ (void)discardHistoryIfNeeded;
+ (BOOL)isNeedToSyncFromOldHistory;
+ (void)syncFromOldHistory;
+ (id)fetchSearchHistoryWithIncludeList:(id)a0 excludeList:(id)a1 maxNumber:(id)a2 responseType:(long long)a3 historyKey:(id)a4;
+ (id)fetchSearchHistoryWithIncludeList:(id)a0 excludeList:(id)a1 number:(id)a2 offset:(id)a3 distinctByDate:(id)a4 responseType:(long long)a5 historyKey:(id)a6;
+ (id)distinctHistoryForAll:(id)a0;
+ (void)getSearchHistoryFromCloud;
+ (id)getAllOldSearchHistory;
+ (void)searchHistoryHasSyncOld;
+ (void)discardUnloginHistoryIfNeeded;
+ (id)searchNewHistoryKey;
+ (void)deleteAllSearchHistory;
+ (id)fetchSearchHistoryWithIncludeList:(id)a0 excludeList:(id)a1 maxNumber:(id)a2 responseType:(long long)a3 historyKey:(id)a4 excludeSource:(id)a5;
+ (id)getCurrentTimestampNumber;
+ (void)syncLocalAndCloudHistory;
+ (double)getCurrentTimestamp;

@end
