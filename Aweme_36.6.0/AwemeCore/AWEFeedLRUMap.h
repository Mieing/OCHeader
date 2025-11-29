@class AWEFeedLRUNode;

@interface AWEFeedLRUMap : NSObject {
    struct __CFDictionary { } *_dict;
    unsigned long long _totalCount;
    AWEFeedLRUNode *_head;
    AWEFeedLRUNode *_tail;
}

- (id)removeTailNode;
- (void)insertNodeAtHead:(id)a0;
- (void)bringNodeToHead:(id)a0;
- (id)getAllNodes;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (void)dealloc;
- (void)removeNode:(id)a0;

@end
