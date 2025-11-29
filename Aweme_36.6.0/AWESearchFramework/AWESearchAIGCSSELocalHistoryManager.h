@interface AWESearchAIGCSSELocalHistoryManager : NSObject

+ (BOOL)isSameQueryRepeatEntryWithSearchKeyword:(id)a0 searchSource:(id)a1 searchDedupKey:(id)a2;
+ (id)getFeedSummaryHistoryDataWithVideoID:(id)a0;
+ (id)historyStorage;
+ (void)updateLastConversationID:(id)a0 videoID:(id)a1;
+ (BOOL)disableCheckHistorySecure;
+ (void)updateHistoryWithData:(id)a0;
+ (id)getHistoryData;
+ (void)updateFeedSummaryHistoryWithData:(id)a0 videoID:(id)a1;
+ (void)clearFeedSummaryHistoryData;
+ (id)getLastConversationIDWithVideoID:(id)a0;
+ (BOOL)needCheckHistorySecure;
+ (void)finishCheckHistorySecure;
+ (void)clearQueryRepeatEntry;
+ (BOOL)isSameQueryRepeatEntryWithEmptySearchKeyword:(id)a0 searchSource:(id)a1 searchDedupKey:(id)a2;
+ (id)getValueForKey:(id)a0;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (void)clean;

@end
