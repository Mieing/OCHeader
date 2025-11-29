@class BUTimer, NSMapTable, NSObject;
@protocol OS_dispatch_semaphore;

@interface CSJViewShowAreaTracker : NSObject

@property (retain, nonatomic) BUTimer *timer;
@property (retain, nonatomic) NSMapTable *weakCache;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;

+ (id)sharedInstance;

- (void)stopTrackWithView:(id)a0;
- (void)trackWithView:(id)a0 showAreaBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_createTimer;
- (void)_fire;

@end
