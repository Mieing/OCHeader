@class WCFinderDoublyLinkedNode, NSMutableDictionary;

@interface WCFinderDoublyLinkedList : NSObject

@property (retain, nonatomic) WCFinderDoublyLinkedNode *headNode;
@property (retain, nonatomic) WCFinderDoublyLinkedNode *tailNode;
@property (retain, nonatomic) NSMutableDictionary *nodeDict;

- (void)addObject:(id)a0 forKey:(id)a1;
- (void)insertObjectToHead:(id)a0 forKey:(id)a1;
- (void)insertObject:(id)a0 forKey:(id)a1 afterObjectForKey:(id)a2;
- (void)insertObject:(id)a0 forKey:(id)a1 beforeObjectForKey:(id)a2;
- (void)moveObjectForKeyToHead:(id)a0;
- (id)removeTailObject;
- (id)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)description;
- (id)nodeForKey:(id)a0;
- (void).cxx_destruct;

@end
