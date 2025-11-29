@class NSArray, NSMapTable;

@interface IGListIndexPathResult : NSObject {
    NSMapTable *_oldIndexPathMap;
    NSMapTable *_newIndexPathMap;
}

@property (readonly, nonatomic) long long changeCount;
@property (readonly, copy, nonatomic) NSArray *inserts;
@property (readonly, copy, nonatomic) NSArray *deletes;
@property (readonly, copy, nonatomic) NSArray *updates;
@property (readonly, copy, nonatomic) NSArray *moves;
@property (readonly, nonatomic) BOOL hasChanges;

- (id)resultForBatchUpdates;
- (id)initWithInserts:(id)a0 deletes:(id)a1 updates:(id)a2 moves:(id)a3 oldIndexPathMap:(id)a4 newIndexPathMap:(id)a5;
- (id)oldIndexPathForIdentifier:(id)a0;
- (id)newIndexPathForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
