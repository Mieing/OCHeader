@interface AWEProfileRecommendSectionJumpUtil : NSObject

+ (BOOL)isFirstVisitWithContext:(id)a0;
+ (void)jumpToMixVideoFeedWithAwemeModel:(id)a0 profileContext:(id)a1 indexPath:(id)a2 logExtraDict:(id)a3;
+ (void)jumpToLLMRecommendFeedWithModel:(id)a0 detailTableVC:(id)a1 profileContext:(id)a2 indexPath:(id)a3 logExtraDict:(id)a4;
+ (void)jumpToLLMRecommendDetailPageWithModel:(id)a0 profileContext:(id)a1;
+ (id)previousPageWithContext:(id)a0;

@end
