@class MMTimer, NSMutableArray, NSRecursiveLock;

@interface WCLazyInitObjectMgr : NSObject

@property (retain, nonatomic) NSMutableArray *lazyInitArray;
@property (retain, nonatomic) MMTimer *refreshTimer;
@property (nonatomic) double currentTimeDis;
@property (nonatomic) BOOL bDelayLoad;
@property (retain, nonatomic) NSRecursiveLock *threadLock;

+ (id)sharedInstance;

- (id)init;
- (void)timeToInit;
- (void)destroyAllEvent;
- (void)triggerObjectToInit:(id)a0;
- (void)addLazyInitObject:(id)a0;
- (BOOL)isDelayLoad;
- (void).cxx_destruct;

@end
