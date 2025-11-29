@class NSString, _YYLinkedMap, NSObject;
@protocol OS_dispatch_queue;

@interface YYMemoryCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    _YYLinkedMap *_lru;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _lastTrimTime;
}

@property (copy) NSString *name;
@property (readonly) unsigned long long totalCount;
@property (readonly) unsigned long long totalCost;
@property unsigned long long countLimit;
@property unsigned long long costLimit;
@property double ageLimit;
@property double autoTrimInterval;
@property BOOL shouldRemoveAllObjectsOnMemoryWarning;
@property BOOL shouldRemoveAllObjectsWhenEnteringBackground;
@property (copy) id /* block */ didReceiveMemoryWarningBlock;
@property (copy) id /* block */ didEnterBackgroundBlock;
@property BOOL releaseOnMainThread;
@property BOOL releaseAsynchronously;

- (void)setObject:(id)a0 forKey:(id)a1 withCost:(unsigned long long)a2;
- (void)_appDidReceiveMemoryWarningNotification;
- (void)_trimInBackground;
- (void)_trimRecursively;
- (void)_trimToCost:(unsigned long long)a0;
- (void)_trimToCount:(unsigned long long)a0;
- (void)_trimToAge:(double)a0;
- (void)trimToCount:(unsigned long long)a0;
- (void)trimToCost:(unsigned long long)a0;
- (void)trimToAge:(double)a0;
- (void)_appDidEnterBackgroundNotification;
- (void)_trimInOperationQueue;
- (BOOL)containsObjectForKey:(id)a0 exceptObject:(id)a1;
- (void)_trimToMark;
- (void)trimToMark;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKey:(id)a0;
- (void)mark;
- (id)init;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_mark;

@end
