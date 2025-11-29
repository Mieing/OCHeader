@interface AWESearchAIGCSearchRecommendBgUtils : NSObject

+ (id)getAICardContainerTopSearchIdWithAiCard:(id)a0;
+ (id)getAICardContainerTopNodeIdWithNode:(id)a0;
+ (id)getBackgroundPath:(id)a0 maxY:(double)a1 minY:(double)a2;
+ (void)createAIGCSearchRecommendBackgroundWithTopNode:(id)a0 bottomNode:(id)a1 scrollView:(id)a2;
+ (void)updateAIGCSearchRecommendBackgroundWithCachalotView:(id)a0;
+ (void)updateAIGCSearchRecommendBackgroundWithTopNode:(id)a0 bottomNode:(id)a1 scrollView:(id)a2;
+ (void)removeAIGCSearchRecommendBackgroundWithCachalotView:(id)a0;
+ (void)removeAIGCSearchDetailWithTopNode:(id)a0 scrollView:(id)a1;
+ (void)removeAIGCSearchBorderWithTopNode:(id)a0 scrollView:(id)a1;
+ (void)createAIGCSearchDetailWithFixedCard:(id)a0 aiCard:(id)a1 scrollView:(id)a2 params:(id)a3 detailClick:(id /* block */)a4;

@end
