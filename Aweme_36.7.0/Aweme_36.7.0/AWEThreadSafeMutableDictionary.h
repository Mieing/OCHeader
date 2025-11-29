@class NSMutableDictionary;

@interface AWEThreadSafeMutableDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (nonatomic) int lock;

- (id)safeCopyDictionary;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)objectForKey:(id)a0 create:(id /* block */)a1;

@end
