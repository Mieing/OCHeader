@class NSTimer, NSMutableDictionary, BDPUniqueID;

@interface BDPMemoryWarningMonitor : NSObject

@property (retain, nonatomic) NSTimer *memoryDetectiveTimer;
@property (retain, nonatomic) NSMutableDictionary *warningDic;
@property (retain, nonatomic) BDPUniqueID *currentUniqueID;

+ (void)unregisterMemoryWarningTimerWithUniqueID:(id)a0;
+ (void)registerMemoryWarningTimerWithUniqueID:(id)a0 warningBlock:(id /* block */)a1;
+ (void)didReceiveMemoryWarningWithUniqueID:(id)a0;
+ (void)reportMemoryWarningWithType:(id)a0 rate:(float)a1 systemWarning:(BOOL)a2 uniqueID:(id)a3;
+ (id)sharedInstance;

- (void)_didReceiveMemoryWarningWithUniqueID:(id)a0;
- (void)_registerMemoryWarningTimerWithUniqueID:(id)a0 warningBlock:(id /* block */)a1;
- (void)_unregisterMemoryWarningTimerWithUniqueID:(id)a0;
- (void).cxx_destruct;

@end
