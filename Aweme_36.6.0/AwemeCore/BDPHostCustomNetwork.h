@class NSString;

@interface BDPHostCustomNetwork : NSObject <BDPNetworkInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (BOOL)canUse;
- (void)preConnectUrl:(id)a0;
- (id)uploadTaskWithRequest:(id)a0 withMultiRequestBody:(id)a1 completionHandler:(id /* block */)a2;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)engineType;

@end
