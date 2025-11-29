@class NSMapTable, BUPersistenceLRULinkedNode;

@interface BUPersistenceLRULinkedList : NSObject

@property (retain, nonatomic) BUPersistenceLRULinkedNode *header;
@property (retain, nonatomic) BUPersistenceLRULinkedNode *tail;
@property (retain, nonatomic) NSMapTable *mapTable;
@property (nonatomic) unsigned long long currentCapacityCount;
@property (nonatomic) unsigned long long currentCapacitySize;

- (void)bringNodeToHeadWithKey:(id)a0;
- (void)bringNodeToHeadWithKeys:(id)a0;
- (id)removeTailNode;
- (void)insertNodeAtHeadWithKey:(id)a0;
- (void)removeNodeWithKey:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;

@end
