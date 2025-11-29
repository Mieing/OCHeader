@class NSLock, NSMutableDictionary;

@interface BDPGameEventHookHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *timelineOps;
@property (retain, nonatomic) NSMutableDictionary *teaOps;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL teaHooked;
@property (nonatomic) BOOL timelineHooked;

+ (id)sharedInstance;

- (void)hookEvent:(id)a0 op:(id /* block */)a1;
- (void)removeAllHookEvent;
- (void)hookTimeline;
- (void)hookTea;
- (void)removeHookEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
