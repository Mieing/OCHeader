@class NSLock, NSMapTable, NSCache;

@interface TIMXOModelClassStore : NSObject

@property (retain) NSLock *lock;
@property (retain) NSMapTable *weakMap;
@property (retain) NSCache *strongCache;

- (void).cxx_destruct;
- (id)init;

@end
