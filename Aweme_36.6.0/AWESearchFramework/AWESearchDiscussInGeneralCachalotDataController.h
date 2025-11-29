@interface AWESearchDiscussInGeneralCachalotDataController : AWEGeneralCachalotDataController

@property (weak, nonatomic) id multiTabManagerDelegate;

+ (BOOL)enableUseNewPreRequestTagWithSearchSource:(id)a0;

- (BOOL)enableNewPreRequestWithInitialParams:(id)a0 context:(id)a1;
- (BOOL)enablePreRequestWithInitialParams:(id)a0 context:(id)a1;
- (long long)requestDataCount;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:(id)a0;
- (void)loadMoreResponse:(id)a0;
- (id)discussRequestParams;
- (void).cxx_destruct;

@end
