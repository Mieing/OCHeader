@class NSString;

@interface IESLivePrivilegeRoomModuleAdapterImpl : IESLiveBaseAdapter <IESLivePrivilegeRoomModuleAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reenterRoom;
- (id)dressInterface;
- (id)subscribeVIPInterface;

@end
