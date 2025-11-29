@class NSString;

@interface EcsCoreEcsSamplingRegister_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsSamplingRegister_Ur>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerPolicy:(id)a0 policy:(id)a1;
- (id)getPolicy:(id)a0;
- (id)getDefaultPolicy;

@end
