@class NSString;

@interface AWEGCPOpenPlatformAuthServiceImpl : NSObject <IESGCPOpenPlatformAuthService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authorizeWithParams:(id)a0 completion:(id /* block */)a1;
- (void)authorizeWithParams:(id)a0 resultCallback:(id /* block */)a1;

@end
