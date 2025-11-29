@class NSMutableArray, NSMutableIndexSet;

@interface AWEListKitLayoutUpdateInfo : NSObject

@property (retain, nonatomic) NSMutableArray *insertedItemIndexPaths;
@property (retain, nonatomic) NSMutableArray *deletedItemIndexPaths;
@property (retain, nonatomic) NSMutableIndexSet *deletedSectionIndexes;

- (id)getDeletedSectionIndexPaths;
- (void)addDeleteItemIndexPath:(id)a0;
- (void)addDeleteSectionIndex:(long long)a0;
- (void)addInsertItemIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)clean;

@end
