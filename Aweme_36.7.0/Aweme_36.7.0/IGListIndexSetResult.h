@class NSIndexSet, NSArray, NSMapTable;

@interface IGListIndexSetResult : NSObject {
    NSMapTable *_oldIndexMap;
    NSMapTable *_newIndexMap;
}

@property (readonly, nonatomic) long long changeCount;
@property (readonly, nonatomic) NSIndexSet *inserts;
@property (readonly, nonatomic) NSIndexSet *deletes;
@property (readonly, nonatomic) NSIndexSet *updates;
@property (readonly, copy, nonatomic) NSArray *moves;
@property (readonly, nonatomic) BOOL hasChanges;

- (id)resultForBatchUpdates;
- (long long)oldIndexForIdentifier:(id)a0;
- (long long)newIndexForIdentifier:(id)a0;
- (id)initWithInserts:(id)a0 deletes:(id)a1 updates:(id)a2 moves:(id)a3 oldIndexMap:(id)a4 newIndexMap:(id)a5;
- (void).cxx_destruct;
- (id)description;

@end
