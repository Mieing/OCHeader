@class AWENetworkQuailtyModel, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWENqeTTNetAdaptor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serial_queue;
@property (retain, nonatomic) NSMutableArray *nqeManager;
@property (retain, nonatomic) AWENetworkQuailtyModel *sharedNqeModel;

+ (id)shared;

- (void)handleReachabilityChangedNotification:(id)a0;
- (void)addNetworkQuailityManager:(id)a0;
- (void)removeNetworkQuailityManager:(id)a0;
- (id)fetchCurrentQuailtyModel;
- (void)p_handleNeqChangeActionRtt:(long long)a0 transportRtt:(long long)a1 downstreamThroughputKbps:(long long)a2;
- (void)p_handlePacageLossRateWithNetProtocol:(long long)a0 upLossRate:(double)a1 upLossRateVari:(double)a2 downLossRate:(double)a3 downLossRateVari:(double)a4;
- (void)p_handleNeqLevelChangeNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)notifyObserver;

@end
