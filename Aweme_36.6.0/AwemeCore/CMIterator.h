@class CMNode;

@interface CMIterator : NSObject {
    struct cmark_iter { } *_iter;
}

@property (readonly) CMNode *currentNode;
@property (readonly) long long currentEvent;

- (id)initWithRootNode:(id)a0;
- (void)resetToNode:(id)a0 withEventType:(long long)a1;
- (void)dealloc;
- (void)enumerateUsingBlock:(id /* block */)a0;

@end
