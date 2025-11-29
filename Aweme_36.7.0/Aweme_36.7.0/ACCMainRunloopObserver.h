@class ACCRecursiveLock;
@protocol ACCMainRunloopObserverDelegate;

@interface ACCMainRunloopObserver : NSObject

@property (retain, nonatomic) ACCRecursiveLock *lock;
@property (nonatomic) struct __CFRunLoopObserver { } *observer;
@property (weak, nonatomic) id<ACCMainRunloopObserverDelegate> delegate;
@property (readonly, nonatomic) unsigned long long activity;

- (BOOL)endIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWith:(unsigned long long)a0;
- (BOOL)startIfNeeded;

@end
