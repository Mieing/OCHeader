@class LynxLRUNode, NSMapTable;

@interface LynxLRUMap : NSObject

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSMapTable *cacheDict;
@property (retain, nonatomic) LynxLRUNode *head;
@property (retain, nonatomic) LynxLRUNode *tail;

- (unsigned long long)getCapacity;
- (void)moveToHead:(id)a0;
- (void)removeTail;
- (void)addToHead:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)get:(id)a0;
- (void)set:(id)a0 value:(id)a1;
- (void)removeNode:(id)a0;

@end
