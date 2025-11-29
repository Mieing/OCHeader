@class NSIndexSet;

@interface WCFinderChangeSet : NSObject

@property (retain, nonatomic) NSIndexSet *removes;
@property (retain, nonatomic) NSIndexSet *inserts;
@property (retain, nonatomic) NSIndexSet *updates;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) BOOL onlyInsert;

+ (id)changeSetWithRemove:(id)a0;
+ (id)changeSetWithInsert:(id)a0;
+ (id)changeSetWithUpdate:(id)a0;

- (void)applyRemoves:(id /* block */)a0 inserts:(id /* block */)a1 updates:(id /* block */)a2;
- (id)convertRemoveIndexPath:(long long)a0;
- (id)convertInsertIndexPath:(long long)a0;
- (id)convertUpdateIndexPath:(long long)a0;
- (id)description;
- (id)descriptForIndexSet:(id)a0;
- (void).cxx_destruct;

@end
