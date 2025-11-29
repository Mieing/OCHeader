@class NSString;

@interface EcsOpenService : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)onGetBaseRouters;
+ (id)onGetBaseNativeRouterHandlers;

- (void)onServiceInit;
- (void)preload:(id)a0;
- (void)preloadWithBase64Str:(id)a0;
- (void)open:(id)a0 context:(id)a1;
- (void)open:(id)a0 context:(id)a1 callback:(id /* block */)a2;
- (void)openWithBase64Str:(id)a0 context:(id)a1;
- (void)openWithBase64Str:(id)a0 context:(id)a1 callback:(id /* block */)a2;
- (void)openWithJson:(id)a0 context:(id)a1;
- (void)openWithJson:(id)a0 context:(id)a1 callback:(id /* block */)a2;

@end
