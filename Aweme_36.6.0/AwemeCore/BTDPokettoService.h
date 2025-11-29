@class NSString;

@interface BTDPokettoService : NSObject <BDASDKProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolImp;
+ (id)sharedInstance;
+ (id)sdkVersion;
+ (id)appid;

- (void)performanceEventV3:(id)a0 params:(id)a1;
- (void)monitorService:(id)a0 value:(id)a1 category:(id)a2 extra:(id)a3;
- (void)eventData:(id)a0;
- (void)eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
- (id)ntType;
- (id)init;

@end
