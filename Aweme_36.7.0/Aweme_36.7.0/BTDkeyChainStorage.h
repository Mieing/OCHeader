@interface BTDkeyChainStorage : NSObject

+ (BOOL)setObject:(id)a0 key:(id)a1;
+ (BOOL)setData:(id)a0 key:(id)a1;
+ (id)objectForKey:(id)a0;
+ (BOOL)removeValueForKey:(id)a0;

@end
