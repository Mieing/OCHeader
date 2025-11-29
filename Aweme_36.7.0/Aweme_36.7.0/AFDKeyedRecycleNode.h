@interface AFDKeyedRecycleNode : NSObject {
    id object;
    AFDKeyedRecycleNode *next;
    AFDKeyedRecycleNode *prev;
    AFDKeyedRecycleNode *lruNext;
    AFDKeyedRecycleNode *lruPrev;
    unsigned long long timestamp;
}

- (void).cxx_destruct;

@end
