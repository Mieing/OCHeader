@class NSMutableArray;

@interface IESECRelationContextItem : NSObject

@property (retain, nonatomic) NSMutableArray *handlerArray;
@property (retain, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long handlersCount;

- (void)callHandlersWithObject:(id)a0;
- (void)postAllHandlers;
- (void).cxx_destruct;
- (id)init;
- (void)removeHandler:(id /* block */)a0;
- (void)addHandler:(id /* block */)a0;
- (void)removeAllHandlers;

@end
