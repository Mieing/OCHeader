@class NSString;

@interface AWEByteSyncModuleService : HTSService <AWEByteSyncModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerBusinessId:(int)a0 handleMessageBlock:(id /* block */)a1;
- (void)unregisterBusinessId:(int)a0;
- (void)registerCommonParamsBlock:(id /* block */)a0;
- (void)uploadMessageData:(id)a0 forBusinessId:(int)a1;
- (void)trySyncDataFromServer;

@end
