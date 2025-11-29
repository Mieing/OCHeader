@class NSString;
@protocol GACAppCheckBackoffWrapperProtocol, GACDeviceCheckAPIServiceProtocol, GACDeviceCheckTokenGenerator;

@interface GACDeviceCheckProvider : NSObject <GACAppCheckProvider>

@property (readonly, nonatomic) id<GACDeviceCheckAPIServiceProtocol> APIService;
@property (readonly, nonatomic) id<GACDeviceCheckTokenGenerator> deviceTokenGenerator;
@property (readonly, nonatomic) id<GACAppCheckBackoffWrapperProtocol> backoffWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getTokenWithLimitedUse:(BOOL)a0 completion:(id /* block */)a1;
- (void)getTokenWithCompletion:(id /* block */)a0;
- (void)getLimitedUseTokenWithCompletion:(id /* block */)a0;
- (id)initWithAPIService:(id)a0;
- (id)initWithAPIService:(id)a0 deviceTokenGenerator:(id)a1 backoffWrapper:(id)a2;
- (id)getTokenPromiseWithLimitedUse:(BOOL)a0;
- (id)isDeviceCheckSupported;
- (id)initWithServiceName:(id)a0 resourceName:(id)a1 APIKey:(id)a2 requestHooks:(id)a3;
- (void).cxx_destruct;
- (id)deviceToken;

@end
