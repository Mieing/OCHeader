@class NSString;

@interface AWEXBridgePermissionService : NSObject <BDXBridgePermissionServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willPermission:(unsigned long long)a0 beCheckedWithHander:(id /* block */)a1;
- (void)willPermission:(unsigned long long)a0 fireRequestWithHandler:(id /* block */)a1 context:(id)a2;

@end
