@interface AWERecordInspirationCommonSearchHandler : NSObject

+ (id)abInfo;
+ (BOOL)syncGetInspirationTabSupportSearchStatus;
+ (id)searchListWithCategoryItem:(id)a0 searchDetailModel:(id)a1;
+ (long long)maxRequestDetailModelCount;
+ (BOOL)isEnableShowSearchItemDebugInfoViewStatus;
+ (BOOL)personalizedRecommendationStatus;
+ (long long)maxSearchResultsCount;
+ (long long)requestTimeOut;
+ (id)attributedStringWithContent:(id)a0 queryContent:(id)a1;
+ (id)keywordsSplitQueryContent:(id)a0;
+ (id)highlightContent:(id)a0 keywords:(id)a1 highlightColor:(id)a2;
+ (id)displaySearchContent:(id)a0;
+ (BOOL)isValidStatusWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 content:(id)a1;
+ (long long)maxSearchContentLength;
+ (id)requestSearchDetailResultNotificationKey;
+ (unsigned long long)searchResultViewTypeWithSearchModels:(id)a0 detailModels:(id)a1;
+ (void)requestInspirationSearchRecommendWithSearchContent:(id)a0 completeHandler:(id /* block */)a1;
+ (void)requestInspirationSearchDetailWithSearchContent:(id)a0 searchId:(id)a1 queryParam:(id)a2 item:(id)a3 completeHandler:(id /* block */)a4;
+ (unsigned long long)searchResultViewTypeWithModel:(id)a0;
+ (id)personalRecommendGetWords;
+ (id)searchPlaceholderContent;
+ (id)inspirationCategoryDetailWithSearchDetailModel:(id)a0 item:(id)a1;
+ (id)searchDetailModelWithLastModel:(id)a0 model:(id)a1 item:(id)a2;
+ (BOOL)hasNoMoreWithSearchDetailResultModel:(id)a0 item:(id)a1;

@end
