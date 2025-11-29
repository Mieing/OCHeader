@class NSString, AWENetworkQuailityManager;

@interface AWENetworkQualityTracker : NSObject <AWENetworkQuailityDelegate>

@property (retain, nonatomic) AWENetworkQuailityManager *manager;
@property (nonatomic) double latestCallBackAt;
@property (nonatomic) double latestWeekNetworkAt;
@property (nonatomic) double latestCriticalWeekNetworkAt;
@property (nonatomic) unsigned long long neqStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)networkQualityManger:(id)a0 didChangeQuailty:(id)a1;
- (unsigned long long)statusForModel:(id)a0;
- (void)p_trackNetworkChangeWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)started;
- (void)dealloc;
- (void)ended;

@end
