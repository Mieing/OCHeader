@protocol BDFlowMonitorProtocol, BDFlowAuthInstance;

@interface BDUGFlowService : NSObject

@property (retain, nonatomic) id<BDFlowMonitorProtocol> monitorDelegate;
@property (weak, nonatomic) id<BDFlowAuthInstance> authInstance;

+ (void)registerFlowMonitorDelegate:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
