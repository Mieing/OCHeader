@class NSObject, NSRunLoop;
@protocol OS_dispatch_group;

@interface SRRunLoopThread : NSThread {
    NSObject<OS_dispatch_group> *_waitGroup;
}

@property (retain, nonatomic) NSRunLoop *runLoop;

+ (id)sharedThread;

- (void).cxx_destruct;
- (id)init;
- (void)main;

@end
