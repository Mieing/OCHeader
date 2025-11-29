@class _YYLinkedMapNode;

@interface _YYLinkedMap : NSObject {
    struct __CFDictionary { } *_dic;
    unsigned long long _totalCost;
    unsigned long long _totalCount;
    _YYLinkedMapNode *_head;
    _YYLinkedMapNode *_tail;
    BOOL _releaseOnMainThread;
    BOOL _releaseAsynchronously;
    _YYLinkedMapNode *_mark;
}

- (id)removeTailNode;
- (void)insertNodeAtHead:(id)a0;
- (void)bringNodeToHead:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (void)dealloc;
- (void)removeNode:(id)a0;

@end
