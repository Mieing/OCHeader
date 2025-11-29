@class BDPUniqueID, NSObject;
@protocol OS_dispatch_queue, BDPMonitorableObjectProtocol;

@interface BDPGameExceptionMonitor : NSObject {
    id<BDPMonitorableObjectProtocol> _monitorableObject;
}

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long unCaughtJSErrorCount;
@property (nonatomic) long long zeroDrawCallCount;
@property (nonatomic) BOOL disableZeroDrawWatch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (nonatomic) BOOL isStop;
@property (nonatomic) BOOL isEnterBackgroundOnOneWatch;
@property (nonatomic) BOOL isInBackground;

- (void)appWillEnterForground:(id)a0;
- (id)initWithMonitorableObject:(id)a0 uniqueID:(id)a1;
- (void)uncaughtException:(id)a0 inJSContext:(id)a1 withUniqueID:(id)a2;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)appDidEnterBackground:(id)a0;

@end
