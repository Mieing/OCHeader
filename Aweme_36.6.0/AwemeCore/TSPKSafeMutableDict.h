@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TSPKSafeMutableDict : NSMutableDictionary

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *readWriteQuene;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)allValues;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;

@end
