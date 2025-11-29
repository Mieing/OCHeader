@class NSPointerArray, TPRecursiveLock;

@interface TPPlayerEventPublisher : NSObject

@property (retain, nonatomic) NSPointerArray *receivers;
@property (retain, nonatomic) TPRecursiveLock *lock;

- (id)init;
- (void)addEventReceiver:(id)a0;
- (void)removeEventReceiver:(id)a0;
- (unsigned long long)getReceiverCount;
- (void)publishEvent:(id)a0;
- (void)clear;
- (long long)idxOfReceiver:(id)a0;
- (void).cxx_destruct;

@end
