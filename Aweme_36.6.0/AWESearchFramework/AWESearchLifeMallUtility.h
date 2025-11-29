@interface AWESearchLifeMallUtility : AWESearchUtility

+ (void)saveSearchWord:(id)a0 wordType:(id)a1 historyKey:(id)a2 extraParams:(id)a3;
+ (id)searchHistoryKey;
+ (void)saveSearchWord:(id)a0 wordType:(id)a1;
+ (void)saveSearchWord:(id)a0 wordType:(id)a1 historyKey:(id)a2;
+ (void)deleteSearchWord:(id)a0;
+ (void)deleteAllSearchWords;
+ (BOOL)p_wordSourceIsSyncFromOtherScene:(id)a0;
+ (void)p_syncDeleteSearchWordFromNonLifeMallScene:(id)a0;
+ (BOOL)isTransferWordsEnableWithEnterFrom:(id)a0 enterFromSecond:(id)a1;
+ (void)syncDeleteAllSearchWordsInNonLifeMallSceneIfNeeded;
+ (void)syncDeleteSearchWordInNonLifeMallSceneIfNeeded:(id)a0;
+ (id)fetchHistoryWordsWithIncludeTypeList:(id)a0 excludeTypeList:(id)a1 maxNumber:(id)a2 responseHistoryType:(long long)a3 enterFrom:(id)a4 enterFromSecond:(id)a5;
+ (void)deleteAllSearchWordsWithEnterFrom:(id)a0 enterFromSecond:(id)a1;
+ (void)deleteSearchWord:(id)a0 enterFrom:(id)a1 enterFromSecond:(id)a2;

@end
