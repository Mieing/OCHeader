@class NSArray;

@interface AWESearchCollectionViewBatchUpdateParams : NSObject

@property (copy, nonatomic) NSArray *dataArray;
@property (copy, nonatomic) NSArray *insertIndexPaths;
@property (copy, nonatomic) NSArray *deleteIndexPaths;
@property (copy, nonatomic) NSArray *moveFromIndexPaths;
@property (copy, nonatomic) NSArray *moveToIndexPaths;

- (void).cxx_destruct;

@end
