@interface AWEEcomSearchUtility : AWESearchBaseUtility

+ (id)frequrntHistoryKey;
+ (id)fetchHistoryWordsWithIncludeTypeList:(id)a0 excludeTypeList:(id)a1 maxNumber:(id)a2 responseHistoryType:(long long)a3 historyKey:(id)a4;
+ (void)deleteSearchWord:(id)a0 historyKey:(id)a1;
+ (void)deleteAllSearchWordsHistoryKey:(id)a0;
+ (void)discardOldUserHistoryIfNeeded;
+ (void)p_discardOldUserHistoryIfNeeded;
+ (id)searchHistoryKey;
+ (void)p_clearHistoryStorageForKey:(id)a0;
+ (BOOL)enableSearchTabConfigOpt;
+ (id)searchHistoryWordDict;
+ (void)saveFrequentHistoryWordsIfNeeded:(id)a0;
+ (BOOL)checkUniformityAndTrackWithRequestKW:(id)a0 responseKW:(id)a1 logPassback:(id)a2 correctModel:(id)a3 tabType:(id)a4 searchFrom:(id)a5 isRefresh:(BOOL)a6;
+ (id)fetchHistoryWordsWithIncludeTypeList:(id)a0 excludeTypeList:(id)a1 maxNumber:(id)a2 responseHistoryType:(long long)a3;
+ (void)deleteSearchWord:(id)a0;
+ (void)deleteAllSearchWords;

- (void)trackSearchCorrectionEvent:(id)a0 correctModel:(id)a1 keyword:(id)a2 logPassback:(id)a3;
- (id)currentVCStringForSearchTabType:(unsigned long long)a0;
- (id)aweui_emptySearchPageConfigForStateHarmfulCategoryWithManager:(id)a0;

@end
