@class NSArray;

@interface AWEIMHighlyProspectiveRecommendManager : NSObject

@property (nonatomic) long long cursor;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *viewModels;

+ (id)sharedInstance;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (BOOL)hasOpenHighlyProspective;
- (void)removeRecommendCellWithModel:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
