@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEBackgroundExitDegrader : NSObject {
    char *_degradedmemory;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *degradeQueue;

- (void)degradeWithSize:(unsigned long long)a0;
- (void)degradeIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)free;

@end
