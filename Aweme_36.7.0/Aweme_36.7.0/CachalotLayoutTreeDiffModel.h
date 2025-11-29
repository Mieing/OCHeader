@class NSArray;

@interface CachalotLayoutTreeDiffModel : NSObject

@property (copy, nonatomic) NSArray *addingIndexs;
@property (copy, nonatomic) NSArray *addingResults;
@property (copy, nonatomic) NSArray *removingIndexs;
@property (copy, nonatomic) NSArray *removingResults;
@property (copy, nonatomic) NSArray *reloadingIndexs;
@property (copy, nonatomic) NSArray *reloadingResults;

- (void).cxx_destruct;

@end
