@class TTHttpTask;

@interface AWEGeneralSearchWaterfallRecommendWordsManager : NSObject

@property (nonatomic) long long currentWaterFallRecommendWordsIndex;
@property (retain, nonatomic) TTHttpTask *fetchRecommWordsTask;
@property (copy, nonatomic) id /* block */ getDisplayItemsBlock;
@property (copy, nonatomic) id /* block */ getSectionControllerAtIndexBlock;
@property (copy, nonatomic) id /* block */ fetchCachalotGeneralComponentAtIndexBlock;
@property (copy, nonatomic) id /* block */ fetchCachalotComponentViewModelAtIndexBlock;
@property (copy, nonatomic) id /* block */ fetchCachalotRenderPipelineModelAtIndexBlock;
@property (copy, nonatomic) id /* block */ clearWaterfallRecommendWord;
@property (copy, nonatomic) id /* block */ buildRecommendWordsModelBlock;
@property (copy, nonatomic) id /* block */ getKeywordBlock;
@property (copy, nonatomic) id /* block */ fetchFeedGidBlock;
@property (copy, nonatomic) id /* block */ getExtraParamsBlock;

+ (void)beginTrigger;
+ (id)instanceForResponder:(id)a0;

- (void)clearCurrentRecordIfNeededAtIndex:(long long)a0 animated:(BOOL)a1 force:(BOOL)a2;
- (void)fetchRecommendWordsAtIndex:(long long)a0 requestExtra:(id)a1 logExtra:(id)a2;
- (void)fetchRecommendWordsAtIndex:(long long)a0 requestExtra:(id)a1 logExtra:(id)a2 completion:(id /* block */)a3;
- (id)p_getAwemeModelForRecommendWordsWithDataModel:(id)a0;
- (id)getSearchModelWithIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
