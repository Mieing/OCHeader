@class ACCAIGCUGCFusionRecommendTagsDataContext;

@interface ACCAIGCUGCFusionRecommendTagsTracker : NSObject

@property (retain, nonatomic) ACCAIGCUGCFusionRecommendTagsDataContext *dataContext;

+ (id)trackerWithDataContext:(id)a0;
+ (id)indexFromList:(id)a0 keyWord:(id)a1;

- (void)trackChooseRecommendWord:(id)a0 clickType:(id)a1 cellModelList:(id)a2 outerIndex:(id)a3;
- (void)trackRecommendWordShow:(id)a0 index:(long long)a1;
- (void).cxx_destruct;

@end
