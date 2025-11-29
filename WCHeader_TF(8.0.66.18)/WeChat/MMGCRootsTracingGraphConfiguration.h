@class NSMutableDictionary;

@interface MMGCRootsTracingGraphConfiguration : NSObject

@property (readonly, copy, nonatomic) id /* block */ transformerBlock;
@property (readonly, nonatomic) BOOL shouldIncludeBlockAddress;
@property (readonly, nonatomic) NSMutableDictionary *layoutCache;
@property (readonly, nonatomic) BOOL shouldCacheLayouts;
@property (nonatomic) BOOL onlySearchAppSymbol;

- (id)initWithTransformerBlock:(id /* block */)a0 shouldIncludeBlockAddress:(BOOL)a1;
- (id)initWithTransformerBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
