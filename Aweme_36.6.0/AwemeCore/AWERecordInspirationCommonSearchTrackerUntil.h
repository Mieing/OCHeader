@interface AWERecordInspirationCommonSearchTrackerUntil : NSObject

+ (void)trackTrendingWordsShowWithWordsSource:(id)a0 wordsPosition:(long long)a1 wordsContent:(id)a2 rawQuery:(id)a3 imprId:(id)a4 groupId:(id)a5 searchPosition:(id)a6 tabName:(id)a7;
+ (void)trackInspirationSearchResultShowWithSearchWord:(id)a0 enterMethod:(id)a1 tabName:(id)a2 isNull:(long long)a3;
+ (void)trackSearchResultShowWithSearchAttachedInfo:(id)a0 searchResultFrom:(id)a1 tabName:(id)a2 isNull:(long long)a3;
+ (void)trackInspirationSearchRequestWithSearchWord:(id)a0 enterMethod:(id)a1 tabName:(id)a2;
+ (void)trackInspirationSearchBarClickWithTabName:(id)a0;
+ (void)trackShowHistorySearchTagWithTagList:(id)a0 tabName:(id)a1;
+ (void)trackClickHistorySearchTagWithTagName:(id)a0 tabName:(id)a1;
+ (void)trackDeleteHistorySearchTagWithTagName:(id)a0 tabName:(id)a1;
+ (void)trackCleanHistorySearchTagWithTabName:(id)a0;
+ (void)trackClickSearchButtonWithSearchWord:(id)a0 clickType:(id)a1 tabName:(id)a2;
+ (void)trackTrendingWordsClickWithWordsSource:(id)a0 wordsPosition:(long long)a1 wordsContent:(id)a2 rawQuery:(id)a3 imprId:(id)a4 groupId:(id)a5 searchPosition:(id)a6 tabName:(id)a7;

@end
