@class NSMutableDictionary;

@interface WAEJObjectMemoryMgr : NSObject {
    NSMutableDictionary *_bindingObjects;
    long long _frameTick;
}

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)addBindingObject:(id)a0 jsObject:(id)a1;
- (void)removeBindingObject:(id)a0 jsObject:(id)a1;
- (id)getBindingObjects;

@end
