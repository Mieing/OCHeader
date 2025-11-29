@class LLContextCenter, LLThreadSafeMutableDictionary;

@interface LLContextDisposer : NSObject

@property (retain) LLThreadSafeMutableDictionary *dictionary;
@property (weak) LLContextCenter *contextCenter;

- (void)addKey:(id)a0 handler:(id /* block */)a1;
- (id)contextItemForKey:(id)a0;
- (void)removeHandlersForKey:(id)a0;
- (void)removeHandlers;
- (void)removeHandlersForKey:(id)a0 item:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dispose;
- (void)dealloc;

@end
