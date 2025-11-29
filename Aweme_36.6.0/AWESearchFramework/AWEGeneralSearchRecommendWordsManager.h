@class TTHttpTask;

@interface AWEGeneralSearchRecommendWordsManager : NSObject

@property (retain, nonatomic) TTHttpTask *fetchRecommWordsTask;
@property (copy, nonatomic) id /* block */ getDisplayItemsBlock;
@property (copy, nonatomic) id /* block */ getSectionControllerAtIndexBlock;
@property (copy, nonatomic) id /* block */ buildRecommendWordsModelBlock;
@property (copy, nonatomic) id /* block */ getCurrentGidBlock;
@property (copy, nonatomic) id /* block */ getExtraParamsBlock;
@property (copy, nonatomic) id /* block */ visibleIndexPathsBlock;
@property (copy, nonatomic) id /* block */ fetchRecommWordsTaskCompleteBlock;
@property (copy, nonatomic) id /* block */ recommendWordsShowingBlock;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)getSearchModelWithIndex:(long long)a0 items:(id)a1;
- (void)showRecommendWordsForSectionIndex:(long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)fetchRecommWordsForSectionIndex:(long long)a0 params:(id)a1 completion:(id /* block */)a2 extraCallBack:(id /* block */)a3;
- (void)showRecommendWordsForSection:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
