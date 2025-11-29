@class NSMutableDictionary;

@interface IESLLRxContext : NSObject {
    NSMutableDictionary *_map;
}

+ (id)contextWithObjects:(id)a0;

- (id)objectForKey:(id)a0 cls:(Class)a1;
- (void).cxx_destruct;
- (id)initWithObjects:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
