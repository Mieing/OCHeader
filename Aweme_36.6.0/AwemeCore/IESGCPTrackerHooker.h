@class NSMapTable;

@interface IESGCPTrackerHooker : NSObject

@property (retain, nonatomic) NSMapTable *tokenMap;

- (void)removeAllHooks;
- (void)removeHookingObject:(id)a0 forSelector:(SEL)a1;
- (void)storeHookingObject:(id)a0 disposable:(id)a1 forSelector:(SEL)a2;
- (BOOL)hookWithObject:(id)a0 selector:(SEL)a1 withOptions:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)removeHookingObject:(id)a0;
- (BOOL)isHookingObject:(id)a0 forSelector:(SEL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
