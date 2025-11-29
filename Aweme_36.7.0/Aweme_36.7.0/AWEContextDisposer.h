@class AWEThreadSafeMutableDictionary, AWEContextCenter;

@interface AWEContextDisposer : NSObject

@property (retain) AWEThreadSafeMutableDictionary *dictionary;
@property (weak) AWEContextCenter *contextCenter;

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
