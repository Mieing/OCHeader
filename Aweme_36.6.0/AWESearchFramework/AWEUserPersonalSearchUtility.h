@interface AWEUserPersonalSearchUtility : NSObject

+ (id)searchPrivacyState;
+ (id)fetchHistoryWordsWithUserID:(id)a0 currentUserId:(id)a1 searchStyleType:(unsigned long long)a2;
+ (void)deleteAllSearchWordWithUserID:(id)a0 currentUserId:(id)a1 searchStyleType:(unsigned long long)a2;
+ (void)deleteSearchWord:(id)a0 userID:(id)a1 currentUserId:(id)a2 searchStyleType:(unsigned long long)a3;
+ (void)saveSearchWord:(id)a0 userID:(id)a1 currentUserId:(id)a2 searchStyleType:(unsigned long long)a3;
+ (id)p_userHistorysKeyWithUserID:(id)a0 currentUserId:(id)a1 searchStyleType:(unsigned long long)a2;
+ (void)removeOldestHistory:(id)a0;
+ (void)insertKeyWord:(id)a0 toHistoryRecords:(id)a1;

@end
