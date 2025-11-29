@class HMDTTMonitor, NSString;

@interface BDACSProtocolManager : NSObject <BDASDKProtocol>

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolImp;
+ (id)commonTrackParamsWith:(id)a0 logExtra:(id)a1 adExtraData:(id)a2;
+ (id)sharedInstance;

- (void)monitorService:(id)a0 value:(id)a1 category:(id)a2 extra:(id)a3;
- (void)eventData:(id)a0;
- (void)eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
- (void)monitorService:(id)a0 category:(id)a1;
- (void)monitorService:(id)a0 category:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
