@interface AWECommonPushManagerByteSyncImpl : NSObject

+ (void)addObserverUsingBlock:(id /* block */)a0;
+ (void)setCommonPushThreadID:(unsigned long long)a0;
+ (void)subscribeTopic:(id)a0 completion:(id /* block */)a1;
+ (void)unsubscribeTopic:(id)a0 completion:(id /* block */)a1;
+ (void)removeObserver;

@end
