@class CAKAlbumSearchFeatureConfig, CAKAIMemoriesSearchResult, NSArray;

@interface CAKAIMemoriesSearchListViewModel : NSObject

@property (nonatomic) double loadTime;
@property (nonatomic) long long viewState;
@property (retain, nonatomic) CAKAIMemoriesSearchResult *AIMemoriesSearchResult;
@property (retain, nonatomic) CAKAlbumSearchFeatureConfig *searchFeatureConfig;
@property (copy, nonatomic) NSArray *initialSelectedAssets;
@property (nonatomic) BOOL isMatchResult;
@property (nonatomic) double queryRequestStartTime;
@property (nonatomic) double queryRequestEndTime;

- (void)searchResultWithQuery:(id)a0 lastCachedResult:(id)a1;
- (void)localSearchAssetWithQuery:(id)a0 completion:(id /* block */)a1;
- (id)fetchAssetsWithIds:(id)a0 error:(id *)a1;
- (id)containersInArray:(id)a0 withAssetIdentifier:(id)a1;
- (id)fetchAssetsWithOrderedLocalIdentifiers:(id)a0 error:(id *)a1;
- (id)initWithSearchFeatureConfig:(id)a0;
- (void)searchResultOnNetWithQuery:(id)a0 lastCachedResult:(id)a1;
- (void)searchResultWithQueryInNoNetworkCondition:(id)a0;
- (void)updateEnterSearchPageInitialSelectedAssets:(id)a0;
- (BOOL)hasAddedAssetWithCurrentSelectedAssets:(id)a0;
- (void)parseQueryIfNeeded:(id)a0 parser:(unsigned long long)a1;
- (void).cxx_destruct;

@end
