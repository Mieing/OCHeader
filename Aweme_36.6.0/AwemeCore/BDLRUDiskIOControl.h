@class BDDiskTimedWaitLock;

@interface BDLRUDiskIOControl : NSObject

@property (class, nonatomic) long long accessStrategy;
@property (class, nonatomic) double accessTimeout;

@property (retain, nonatomic) BDDiskTimedWaitLock *lock;

- (BOOL)canAccessDisk;
- (void)enterTimeConsumingArea;
- (void)exitTimeConsumingArea;
- (void).cxx_destruct;
- (id)init;

@end
