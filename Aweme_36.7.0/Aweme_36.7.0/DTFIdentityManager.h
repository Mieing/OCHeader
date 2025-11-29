@class NSString;

@interface DTFIdentityManager : NSObject <DTFFaceIdentityProtocol>

@property (nonatomic) BOOL didInitSecurity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)initSDK;
- (id)getMetaInfo;
- (void)initIPv6;
- (void)preload:(id)a0 completion:(id /* block */)a1;
- (void)verifyWith:(id)a0 extParams:(id)a1 onCompletion:(id /* block */)a2;
- (void)setDataProtocolVersion:(id)a0;
- (void)setRpcProxy:(id)a0;
- (void)initSecurity;
- (id)getVersion;

@end
