@class NSMutableDictionary, NSMutableOrderedSet;

@interface QBDNSCache : NSObject {
    NSMutableDictionary *_dictionary;
    NSMutableOrderedSet *_set;
}

- (id)initWithDictionary:(id)a0 set:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)clear:(BOOL)a0;
- (void)store;
- (void).cxx_destruct;

@end
