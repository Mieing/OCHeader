@class NSMutableArray, NSRecursiveLock;

@interface IESLLTempoContextItem : NSObject

@property (retain) NSRecursiveLock *lock;
@property (retain) id object;
@property (retain) NSMutableArray *handlerArray;

- (void)removeHandlers;
- (void)callHandler:(id)a0;
- (void).cxx_destruct;
- (void)removeHandler:(id /* block */)a0;
- (void)addHandler:(id /* block */)a0;
- (void)post;

@end
