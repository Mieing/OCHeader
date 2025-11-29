@class AWEDataLayerLinkedNode;

@interface AWEDataLayerLinkedList : NSObject {
    int _capacity;
    int _count;
    AWEDataLayerLinkedNode *_head;
    AWEDataLayerLinkedNode *_tail;
}

+ (id)linkedListWithCapacity:(int)a0;

- (void)appendLinkedNode:(id)a0;
- (void)bringLinkedNodeToHead:(id)a0;
- (void)removeLinkedNode:(id)a0;
- (void)removeAllLinkedNodes;
- (id)removeLinkedNodesUntilCapacity;
- (void).cxx_destruct;

@end
