@class NSLock, NSMutableDictionary;

@interface IESECLiveThreadSafeDictionary : NSObject

@property (retain) NSMutableDictionary *dictionary;
@property (retain) NSLock *lock;

- (id)safeCopyDictionary;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;

@end
