@interface IESCacheDictionaryRef : NSObject {
    struct __CFDictionary { } *_caches;
}

- (void)_appDidReceiveMemoryWarningNotification;
- (id)getCacheObjectForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setCacheObject:(id)a0 forKey:(id)a1;

@end
