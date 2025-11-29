@class HMDTTMonitor;

@interface BDXBridgeProtocolMonitor : NSObject

@property (retain, nonatomic) HMDTTMonitor *hmdMonitor;

+ (id)hostAppID;
+ (id)hostAppChannel;
+ (id)sharedInstance;

- (void)track:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)trackPerformanceWithCallMessage:(id)a0 callbackMessage:(id)a1 callbackResult:(id)a2 containerType:(id)a3 callbackEncodeDuration:(id)a4 callbackSendTimestamp:(id)a5;
- (void).cxx_destruct;
- (id)initWithMonitor:(id)a0;

@end
