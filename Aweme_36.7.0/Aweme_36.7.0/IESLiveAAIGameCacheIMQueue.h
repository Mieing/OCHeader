@class NSLock, NSMutableArray;

@interface IESLiveAAIGameCacheIMQueue : NSObject

@property (retain, nonatomic) NSMutableArray *cacheIMQueue;
@property (retain, nonatomic) NSLock *queueSafeLock;
@property (copy, nonatomic) id /* block */ timeoverCallback;

- (void)checkoutMsgWithTs:(double)a0 canConsumedMsgBlock:(id /* block */)a1;
- (void)addMsg:(id)a0 timeout:(double)a1;
- (void)addTimeoverCallbackInMainThreadWithMsg:(id)a0 timeout:(double)a1;
- (void)safeAddMsg:(id)a0;
- (void)safeRemoveMsg:(id)a0;
- (void)removeMsg:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
