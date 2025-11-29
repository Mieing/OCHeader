@class NSString, BTDPokettoMonitor;

@interface BTDADALService : NSObject <BTDALSDKProtocol>

@property (retain, nonatomic) BTDPokettoMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolImp;
+ (id)appLinkProtocolImp;
+ (id)sharedInstance;
+ (id)appid;

- (BOOL)trackAdEvent:(id)a0 tag:(id)a1 extra:(id)a2 adExtra:(id)a3;
- (void)performanceEventV3:(id)a0 params:(id)a1;
- (void)monitorService:(id)a0 value:(id)a1 category:(id)a2 extra:(id)a3;
- (void)eventData:(id)a0;
- (void)eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
- (id)ntType;
- (id)sdkAppId;
- (void)sendReqToWXWithUserName:(id)a0 path:(id)a1 customScene:(id)a2 callback:(id /* block */)a3;
- (void)requestWithResponse:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)sdkVersion;

@end
