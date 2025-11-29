@class NSMutableArray, NSLock;

@interface AWEMVChannelDataMainRunLoopObserver : NSObject

@property (class, readonly, nonatomic) AWEMVChannelDataMainRunLoopObserver *shared;

@property (nonatomic) struct __CFRunLoopObserver { } *observer;
@property (retain, nonatomic) NSMutableArray *asyncBlocks;
@property (retain, nonatomic) NSLock *lock;
@property BOOL isActive;

- (void)removeMainRunLoopObserver;
- (void)addMainRunLoopObserver;
- (void).cxx_destruct;
- (void)asyncBlock:(id /* block */)a0;
- (id)init;
- (void)dealloc;

@end
