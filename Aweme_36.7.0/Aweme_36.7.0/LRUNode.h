@interface LRUNode : NSObject {
    id _key;
    id _value;
    LRUNode *_pre;
    LRUNode *_next;
}

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
