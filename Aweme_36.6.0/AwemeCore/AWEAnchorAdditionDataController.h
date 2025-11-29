@class NSArray, NSDictionary;

@interface AWEAnchorAdditionDataController : AWEListDataController

@property (copy, nonatomic) NSArray *recommendDataSource;
@property (copy, nonatomic) NSArray *sectionDataSource;
@property (nonatomic) long long anchorType;
@property (nonatomic) long long page;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSArray *tabbarDataSource;

- (void)fetchRecommendGameDataSourceWithPage:(long long)a0 completion:(id /* block */)a1;
- (id)extraParamsKey;
- (id)extraParamsString;
- (void)refreshWithAnchorBusniessType:(long long)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)loadMoreWithAnchorBusniessType:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
