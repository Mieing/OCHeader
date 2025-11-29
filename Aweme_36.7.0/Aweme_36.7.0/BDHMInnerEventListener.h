@class NSMutableArray;

@interface BDHMInnerEventListener : NSObject

@property (retain, nonatomic) NSMutableArray *listeners;
@property (nonatomic) BOOL disableMonitorLaunch;

+ (id)shared;

- (void)dispathEvent:(id)a0;
- (void).cxx_destruct;
- (void)registerListener:(id)a0;

@end
