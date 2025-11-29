@class NSMutableArray, NSMutableIndexSet;

@interface IGListBatchUpdates : NSObject

@property (readonly, nonatomic) NSMutableIndexSet *sectionReloads;
@property (readonly, nonatomic) NSMutableArray *itemInserts;
@property (readonly, nonatomic) NSMutableArray *itemDeletes;
@property (readonly, nonatomic) NSMutableArray *itemReloads;
@property (readonly, nonatomic) NSMutableArray *itemMoves;
@property (readonly, nonatomic) NSMutableArray *itemUpdateBlocks;
@property (readonly, nonatomic) NSMutableArray *itemCompletionBlocks;

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasChanges;

@end
