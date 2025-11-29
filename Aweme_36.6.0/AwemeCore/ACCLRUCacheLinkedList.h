@class ACCLRUCacheNode;

@interface ACCLRUCacheLinkedList : NSObject

@property (retain, nonatomic) ACCLRUCacheNode *head;
@property (retain, nonatomic) ACCLRUCacheNode *tail;
@property (nonatomic) unsigned long long length;

- (void)insertToFirst:(id)a0;
- (id)removeLast;
- (id)remove:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)add:(id)a0;

@end
