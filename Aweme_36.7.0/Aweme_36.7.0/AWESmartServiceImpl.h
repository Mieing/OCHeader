@class NSString;

@interface AWESmartServiceImpl : NSObject <AWESmartService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getServiceFromProtocol:(id)a0;
- (id)getServiceByProtocol:(id)a0;
- (id)getServiceFromProtocolName:(id)a0;
- (id)getCommonService:(id)a0;
- (void)evaluateServiceLazyRegisterIfNeeded;
- (void)registerService:(id)a0;
- (id)getService:(id)a0;

@end
