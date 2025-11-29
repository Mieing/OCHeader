@class NSString;

@interface IESVSComponentSwitchAdapterImpl : IESLiveBaseAdapter <IESVSComponentSwitchAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDisableECommerceComponent;
- (BOOL)shouldDisableGameComponent;
- (BOOL)shouldDisablePrivilegeComponent;
- (BOOL)shouldDisableComponent:(unsigned long long)a0;
- (id)targetInstance;

@end
