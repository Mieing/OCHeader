@class NSArray, NSString;

@interface AWESearchBaseUtility : NSObject

@property (copy, nonatomic) NSArray *hotSearchEnterFromArray;
@property (copy, nonatomic) NSString *responseStatusMsg;
@property (copy, nonatomic) NSString *subTitleText;
@property (copy, nonatomic) NSString *mainTitleText;
@property (nonatomic) BOOL isSearchUser;

+ (void)saveSearchWord:(id)a0 wordType:(id)a1 historyKey:(id)a2 extraParams:(id)a3;
+ (id)getTimeStamp;
+ (id)searchPrivacyState;
+ (id)p_uidSearchHistoryKey:(id)a0;
+ (id)p_uidSearchHistoryKey;
+ (id)savedSearchHistoryWordsForHistoryWordStrings:(id)a0;
+ (id)searchHistoryKey;
+ (id)p_searchHistoryKeyForUid:(id)a0;
+ (id)searchHistoryWordDict;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (void)saveSearchWord:(id)a0 wordType:(id)a1;
+ (BOOL)isGuestMode;
+ (void)saveSearchWord:(id)a0 wordType:(id)a1 historyKey:(id)a2;
+ (BOOL)p_opt_saveSearchWordShouldReturn:(id)a0 wordType:(id)a1 searchStyle:(id)a2;
+ (id)p_opt_enumerateAndDeleteExistedHistoryWords:(id)a0 inputKeyWord:(id)a1 extraParams:(id)a2 searchHistoryWordToRemove:(id *)a3;
+ (id)getTimeStampNumber;
+ (void)p_opt_realSaveSearchWord:(id)a0 withFinalSearchHistoryWords:(id)a1 forKey:(id)a2 searchStyle:(id)a3;
+ (long long)searchMaxCount;
+ (BOOL)isInHistoryBlackList:(id)a0;
+ (id)p_searchHistoryKeyForUid:(id)a0 historyKey:(id)a1;
+ (void)setSearchPrivacyState:(id)a0;
+ (void)updateSearchWord:(id)a0 historyKey:(id)a1 params:(id)a2;
+ (void)coverSearchHistoryWordsForHistory:(id)a0;

- (id)searchIconImage_no_result;
- (id)adaptLinkString;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aweui_emptySearchPageConfigForState:(unsigned long long)a0 needUnityStyle:(BOOL)a1;
- (id)aweui_emptySearchPageConfigForState:(unsigned long long)a0;
- (id)handlerMap;
- (id /* block */)p_buildStateErrorBlock;
- (id /* block */)p_buildStateEmptyBlock;
- (id /* block */)p_buildStateEmptyShouldLoginBlock;
- (id /* block */)p_buildStateEmptyReachedMaximumBlock;
- (id /* block */)p_buildStateNoMusicFeedbackBlock;
- (id /* block */)p_buildStateEmptyHistoryBlock;
- (id /* block */)p_buildStateEmptyHistoryClosedBlock;
- (id)searchImgEmptyNeterror;
- (id)searchDuximageIllustrationEmptyL3h2;
- (id)searchIconImage_frequency_control;
- (id)configInformativeText;
- (id)aweui_emptySearchPageConfigForStateHarmfulCategoryWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
