@class NSMutableDictionary;

@interface AWEDetailNetworkSafeDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (id)syncQueue;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)allValues;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;

@end
